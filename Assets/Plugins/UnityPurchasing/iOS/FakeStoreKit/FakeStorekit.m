//
//  FakeStorekit.m
//  StorekitIntegrationTests
//
//  Created by Priyesh Wani on 12/14/16.
//  Copyright © 2016 Priyesh Wani. All rights reserved.
//

#import "FakeStorekit.h"
#import <StoreKit/StoreKit.h>
#import <OCMock/OCMock.h>
#import "UnityPurchasing+Ext.h"

@implementation FakeStorekit
@synthesize unityPurchasing = _unityPurchasing;

static FakeStorekit *storeKit = nil;
@synthesize completedTransactions = _completedTransactions;

+ (id) getInstance {
    if(storeKit == nil) {
        storeKit = [[FakeStorekit alloc] init];
    }
    return storeKit;
}

- (id) init {
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(processTransactionPayment:) name:@"PaymentPosted" object:nil];
    if(!storeKit) {
        storeKit = [super init];
    }
    return storeKit;
}

-(void) fetchProducts {
    SKProductsRequest* prodRequest;
    printf("Fetching available products from fake store kit");
    NSSet *productIdentifiers = [NSSet setWithObjects:@"com.unity.skswizzle.testProduct",nil];
    prodRequest = [[SKProductsRequest alloc]
                   initWithProductIdentifiers:productIdentifiers];
    prodRequest.delegate = self;
    [prodRequest start];

}

- (void) purchaseProduct: (ProductDefinition*) prodDefinition {
    printf("hfuhwerf");
}

-(void) setUnityPurchasingObject:(UnityPurchasing *)unityPurchasingObject {
    self.unityPurchasing = unityPurchasingObject;
}

-(void)processTransactionPayment:(NSNotification*) notification {
    printf("Processing transaction payment.");
    //Create Transaction
    SKPayment *payment = (notification.userInfo)[@"payment"];
    if(storeKit.completedTransactions == nil) {
        storeKit.completedTransactions = [[NSMutableArray alloc] init];
    }
    [[storeKit completedTransactions] addObject:payment];
    id transaction = [OCMockObject mockForClass:[SKPaymentTransaction class]];
    NSInteger integerVal;
    if([[storeKit state] isEqualToString:@"Restore"]) {
        integerVal =SKPaymentTransactionStateRestored;
        [[[transaction stub] andReturnValue: OCMOCK_VALUE(integerVal)] transactionState];
    } else {
        integerVal = SKPaymentTransactionStatePurchased;
        [[[transaction stub] andReturnValue: OCMOCK_VALUE(integerVal)] transactionState];
    }
    NSString *stringVal = [payment productIdentifier];
    [[[transaction stub] andReturnValue:OCMOCK_VALUE(stringVal)] transactionIdentifier];
    [[[transaction stub] andReturnValue:OCMOCK_VALUE(payment)] payment];
    NSArray *transactionArray = [NSArray arrayWithObjects:transaction,nil];
    [self.unityPurchasing processPaymentRequest:transactionArray];
}

-(NSArray*) productsListFromStore {
    //Product 01
    id sword = [OCMockObject niceMockForClass:[SKProduct class]];
    [[[sword stub] andReturn:@"sword.ios"] productIdentifier];
    [[[sword stub] andReturn:@"Historically, the Long Sword featured a distinctive cruciform hilt and a long, double edged blade that was equally adept at opposing both light and heavily armored foes"] localizedDescription];
    [[[sword stub] andReturn:@"Italian Sword"] localizedTitle];
    [[[sword stub] andReturn:[NSDecimalNumber numberWithDouble:1.23]] price];
    
    //Product 02
    id rifle = [OCMockObject niceMockForClass:[SKProduct class]];
    [[[rifle stub] andReturn:@"rifle.ios"] productIdentifier];
    [[[rifle stub] andReturn:@"Browning AB3 Composite Stalker Bolt-Action Rifle Combo with Redfield Scope"] localizedDescription];
    [[[rifle stub] andReturn:@"Bolt-Action Rifle"] localizedTitle];
    [[[rifle stub] andReturn:[NSDecimalNumber numberWithDouble:1.23]] price];
    
    //Product 03
    id machineGun = [OCMockObject niceMockForClass:[SKProduct class]];
    [[[machineGun stub] andReturn:@"machinegun.ios"] productIdentifier];
    [[[machineGun stub] andReturn:@"Fully automatic mounted or portable firearm"] localizedDescription];
    [[[machineGun stub] andReturn:@"LMG"] localizedTitle];
    [[[machineGun stub] andReturn:[NSDecimalNumber numberWithDouble:1.23]] price];
    
    NSArray<SKProduct*> *prodList = @[sword,rifle,machineGun];
    return prodList;
    
}

-(void) addProductsToValidProductsDictionary:(SKProductsResponse*) response {
    NSMutableDictionary *productsDictionary = [[NSMutableDictionary alloc] init];
    for(SKProduct *prod in response.products) {
        [productsDictionary setObject:prod forKey:prod.productIdentifier];
    }
    [self.unityPurchasing setValidProducts:productsDictionary];
}

-(void) restoreCompletedTransactions {
    NSMutableArray<SKPayment *> *completedPaymentTransactions = [storeKit completedTransactions];
    for(SKPayment *payment in completedPaymentTransactions) {
        //Add the payment back to the queue to restore the purchase
        [[SKPaymentQueue defaultQueue] addPayment:payment];
    }
    [unityPurchasing notifyRestoreComplete];
}

#pragma mark StoreKit Delegate
-(void)productsRequest:(SKProductsRequest *)request
    didReceiveResponse:(SKProductsResponse *)response
{
    NSLog(@"Received Products list from fake store");
    [self.delegate didReceiveResponseFromFakeStorekit:self response:response];
}

@end
