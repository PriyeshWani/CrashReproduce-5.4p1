//
//  FakeStorekit.h
//  StorekitIntegrationTests
//
//  Created by Priyesh Wani on 12/14/16.
//  Copyright © 2016 Priyesh Wani. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import "UnityPurchasing.h"



@class FakeStorekit;
@class ProductDefinition;
@protocol  FakeStorekitDelegate;


@interface FakeStorekit : NSObject<SKProductsRequestDelegate> {
    UnityPurchasing *unityPurchasing;
}

@property NSMutableArray<SKPayment *> *completedTransactions;

@property (nonatomic, weak) id<FakeStorekitDelegate> delegate;

@property (nonatomic, weak) UnityPurchasing *unityPurchasing;

@property NSString *state;

+(FakeStorekit *) getInstance;

-(void) fetchProducts;

-(void) purchaseProduct: (ProductDefinition*) prodDefinition;

-(void) setUnityPurchasingObject: (UnityPurchasing *) unityPurchasingObject;

-(NSArray<SKProduct *> *) productsListFromStore;

-(void) restoreCompletedTransactions;

-(void) addProductsToValidProductsDictionary: (SKProductsResponse*) response;


@end

@protocol  FakeStorekitDelegate<NSObject>
- (void) didReceiveResponseFromFakeStorekit: (FakeStorekit *) storekit response:(SKProductsResponse *)response;

@end
