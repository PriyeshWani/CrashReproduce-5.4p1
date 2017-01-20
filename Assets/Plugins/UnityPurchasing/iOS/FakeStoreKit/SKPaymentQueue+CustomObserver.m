//
//  SKPaymentQueue+CustomObserver.m
//  unitypurchasing
//
//  Created by Priyesh Wani on 12/15/16.
//  Copyright © 2016 Alex McAusland. All rights reserved.
//

#import "SKPaymentQueue+CustomObserver.h"
#import <objc/runtime.h>
#import "FakeStorekit.h"

@implementation SKPaymentQueue (CustomObserver)

+(void) load {
    
    printf("Swapping the addpayment references");
    static dispatch_once_t once_token;
    dispatch_once(&once_token,  ^{
        SEL storekitStart = @selector(addPayment:);
        SEL swizzleStorekitStart = @selector(swizzledAddPayment:);
        Method originalMethod = class_getInstanceMethod(self, storekitStart);
        Method extendedMethod = class_getInstanceMethod(self, swizzleStorekitStart);
        method_exchangeImplementations(originalMethod, extendedMethod);
        
        SEL skpaymentrestorePurchases = @selector(restoreCompletedTransactions);
        SEL swizzledRestorePurchasesCall = @selector(swizzledRestoreCompletedTransactions);
        Method originalRestoreCompletedTransactions = class_getInstanceMethod(self, skpaymentrestorePurchases);
        Method extendedRestoreCompletedTransactions = class_getInstanceMethod(self, swizzledRestorePurchasesCall);
        method_exchangeImplementations(originalRestoreCompletedTransactions, extendedRestoreCompletedTransactions);
        
    });    
}

- (void) swizzledAddPayment:(SKPayment *)payment {
    NSLog(@"Payment added to the server queue");
    NSDictionary *paymentInfo = @{@"payment": payment};
    [[NSNotificationCenter defaultCenter] postNotificationName:@"PaymentPosted" object:self userInfo:paymentInfo];
}

-(void) swizzledRestoreCompletedTransactions {
    //Add completed payments to the queue again.
    //Inform FakeStoreKit that restore has been initiated.
    [[FakeStorekit getInstance] setState:@"Restore"];
    [[FakeStorekit getInstance] restoreCompletedTransactions];
}

@end
