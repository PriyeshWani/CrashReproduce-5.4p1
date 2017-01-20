//
//  SKPaymentQueue+CustomObserver.h
//  unitypurchasing
//
//  Created by Priyesh Wani on 12/15/16.
//  Copyright © 2016 Alex McAusland. All rights reserved.
//

#import <StoreKit/StoreKit.h>

@interface SKPaymentQueue (CustomObserver)

-(void) swizzledAddPayment:(SKPayment *)payment;

-(void) swizzledRestoreCompletedTransactions;

@end
