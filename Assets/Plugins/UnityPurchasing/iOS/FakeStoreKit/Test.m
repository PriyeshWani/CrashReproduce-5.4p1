//
//  Test.m
//  Test
//
//  Created by Alex McAusland on 27/07/2015.
//  Copyright (c) 2015 Alex McAusland. All rights reserved.
//

#if !TARGET_OS_IOS


#import <Cocoa/Cocoa.h>
#import <XCTest/XCTest.h>
#import "UnityPurchasing.h"
#import <OCMock/OCMock.h>
#import "FakeStorekit.h"
#import "UnityPurchasing+Ext.h"

//From UnityPurchasing.m
void unityPurchasingPurchase(const char* json, const char* developerPayload);

UnityPurchasing* UnityPurchasing_getInstance();

@interface FakeProduct : NSObject

@property NSDecimalNumber* price;
@property NSString* localizedDescription;
@property NSString* localizedTitle;
@property NSLocale* priceLocale;
@property NSString* productIdentifier;

@end

@implementation FakeProduct

SKProductsRequest *prodRequest;
NSSet *productIdentifiers;
FakeStorekit *skit;

@synthesize price;
@synthesize localizedDescription;
@synthesize localizedTitle;
@synthesize priceLocale;
@synthesize productIdentifier;

@end

@interface Test : XCTestCase<FakeStorekitDelegate>
{
    FakeStorekit *store;
    XCTestExpectation *responseFromStore;
    XCTestExpectation *transactionHandler;
    XCTestExpectation *productPurchaseExpectation;
    XCTestExpectation *restorePurchaseExpectation;
    dispatch_group_t group;
}

@end

@implementation Test

UnityPurchasing* unityPurchasing;

- (void)setUp {
    [super setUp];
    unityPurchasing = UnityPurchasing_getInstance();
    store = [FakeStorekit getInstance];
    store.delegate = self;
    [store setUnityPurchasingObject:unityPurchasing];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(completeTransactionExternally:) name:@"CompleteTransaction" object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(productPurchaseComplete:) name:@"ProductPurchaseComplete" object:nil];

}


NSString* productDef = @"{\
\"id\" : \"sword\",\
\"storeSpecificId\" : \"sword.ios\",\
\"type\" : \"NonConsumable\"\
}";

NSString* invalidProductDef = @"{\
\"id\" : \"invalidProd\",\
\"storeSpecificId\" : \"invalid-prod.ios\",\
\"type\" : \"NonConsumable\"\
}";

NSString* productDefs = @"[\
{\
\"id\" : \"sword\",\
\"storeSpecificId\" : \"sword.ios\",\
\"type\" : \"NonConsumable\"\
},\
{\
\"id\" : \"coins\",\
\"storeSpecificId\" : \"coins.ios\",\
\"type\" : \"Consumable\"\
}\
]";

int productId = 0;

-(void) completeTransactionExternally : (NSNotification *) notification {
    NSString *message = notification.userInfo[@"message"];
    XCTAssertNotNil(message);
    if([[store state] isEqualToString:@"restore"]) {
        XCTAssertEqual(message, @"onTransactionsRestoredSuccess");
        
    }
    if(notification) {
        NSLog(@"Verified product purchase failure for invalid product!");
        XCTAssertEqualObjects(notification.userInfo[@"message"], @"OnPurchaseFailed");
        [transactionHandler fulfill];
    }
}


FakeProduct* getFakeProduct() {
    FakeProduct* result = [[FakeProduct alloc] init];
    result.localizedDescription = @"Fake description";
    result.localizedTitle = @"Fake title";
    result.price = [NSDecimalNumber decimalNumberWithString:@"1.23"];
    result.priceLocale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US"];
    result.productIdentifier = [NSString stringWithFormat:@"%i", productId++];
    
    return result;
}

NSArray* getFakeProducts(int count) {
    NSMutableArray* result = [[NSMutableArray alloc] init];
    for (int t = 0; t < count; t++) {
        [result addObject:getFakeProduct()];
    }
    return result;
}

- (void)testProductDefsDeserialisation {
    NSArray* result = [[UnityPurchasing class] deserializeProductDefs:productDefs];
    ProductDefinition* first = [result objectAtIndex:0];

    XCTAssertEqualObjects(first.id, @"sword");
    
    ProductDefinition* second = [result objectAtIndex:1];
    XCTAssertEqualObjects(second.id, @"coins");
    XCTAssertEqualObjects(second.type, @"Consumable");
}

- (void)testProductDefDeserialisation {
    ProductDefinition* result = [[UnityPurchasing class] deserializeProductDef:productDef];
    
    XCTAssertEqualObjects(result.id, @"sword");
}

- (void)testProductDescriptionSerialization {
    NSString* json = [UnityPurchasing serializeProductMetadata:getFakeProducts(101)];
    NSData* data = [json dataUsingEncoding:NSUTF8StringEncoding];
    NSArray* products = [NSJSONSerialization JSONObjectWithData:data options:0 error:nil];
    XCTAssert(nil != products);
    NSDictionary* first = [products objectAtIndex:0];
    XCTAssertEqualObjects(@"0", [first objectForKey:@"storeSpecificId"]);
    NSDictionary* metadata = [first objectForKey:@"metadata"];
    XCTAssertEqualObjects(@"Fake title", [metadata objectForKey:@"localizedTitle"]);
}


//Integration Tests

-(void) testFetchProductsFromFakeStorekit {
    responseFromStore = [self expectationWithDescription:@"Got response from the fake store"];
    
    [store fetchProducts];
    
    [self waitForExpectationsWithTimeout:5 handler:^(NSError *error) {
        if(error) {
            printf("Error.. Timed out");
        } else {
            printf("Got response from FakeStorekit");
        }
        
    }];
    
}

- (void) testPurchaseProduct {
//    NSArray* result = [[UnityPurchasing class] deserializeProductDefs:productDefs];
   // ProductDefinition* first = [result objectAtIndex:0];
    productPurchaseExpectation = [self expectationWithDescription:@"Product Purchase finished successfully"];
    group = dispatch_group_create();
    dispatch_group_enter(group);
    dispatch_group_async(group, dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        NSLog(@"Fetching products from the storekit");
        [store fetchProducts];
        dispatch_group_leave(group);
    });
    
    dispatch_group_wait(group, DISPATCH_TIME_FOREVER);
    dispatch_group_async(group, dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        const char* def = [productDef UTF8String];
        //unityPurchasingPurchase(def, "");
        unityPurchasingPurchase(def, "");
    });

    [self waitForExpectationsWithTimeout:5 handler:^(NSError *error) {
        if(error) {
            NSLog(@"Product purchase failed");
        }
    }];

}

-(void) testFailedPurchaseProduct {
    transactionHandler = [self expectationWithDescription:@"Got response from the fake store"];
    group = dispatch_group_create();
    dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        NSLog(@"Fetching products from the storekit");
        [store fetchProducts];
    });
    
    dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        const char* invalidProdDef = [invalidProductDef UTF8String];
        unityPurchasingPurchase(invalidProdDef, "");
    });
    
    [self waitForExpectationsWithTimeout: 5 handler:^(NSError *error) {
        if(error) {
            NSLog(@"Transaction did not complete. Failed to validate failure of purchaseProduct");
        } else {
            NSLog(@"Successfully verified failure of product purchase for invalid product");
        }
    }];
    
}

-(void) testRestorePurchases {
    
    [[FakeStorekit getInstance] setState:@"Restore"];
    dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        NSLog(@"Fetching products from the storekit");
        [store fetchProducts];
        
        const char* def = [productDef UTF8String];
        //unityPurchasingPurchase(def, "");
        unityPurchasingPurchase(def, "");
    });
    
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        [unityPurchasing restorePurchases];
    });
    restorePurchaseExpectation = [self expectationWithDescription:@"Restore Purchases"];
    [self waitForExpectationsWithTimeout:5 handler:^(NSError *error) {
        if(error) {
            NSLog(@"Failed to restore purchases");
        }
    }];
}

-(void) initiatePurchaseOfProduct : (NSString *) productDef {
    //dispatch_group_t group = dispatch_group_create();
    dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        NSLog(@"Fetching products from the storekit");
        [store fetchProducts];
    });
    dispatch_sync(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0), ^ {
        const char* def = [productDef UTF8String];
        //unityPurchasingPurchase(def, "");
        unityPurchasingPurchase(def, "");
    });
}

#pragma mark StoreKit Delegate

-(void) didReceiveResponseFromFakeStorekit:(FakeStorekit *)storekit response:(SKProductsResponse *)response {
    printf("Got Response");
    //Add to valid products dictionary
    NSMutableDictionary* fetchedProducts = [[NSMutableDictionary alloc]init];
    NSArray<SKProduct*> *productsList = response.products;
    for (SKProduct *product in productsList) {
        [fetchedProducts setObject:product forKey:(NSString*)[product productIdentifier]];
    }
    [unityPurchasing setValidProducts:fetchedProducts];
    XCTAssertNotNil(response.products);
    XCTAssertEqual(response.products.count, 3);
    [responseFromStore fulfill];
}


-(void) productPurchaseComplete: (NSNotification*) notification {
    if([notification.userInfo[@"state"] isEqualToString:@"restore"]) {
        [restorePurchaseExpectation fulfill];
    } else {
        [productPurchaseExpectation fulfill];
    }
    
}



@end

#endif
