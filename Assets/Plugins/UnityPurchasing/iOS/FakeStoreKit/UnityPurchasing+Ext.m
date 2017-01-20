//
//  UnityPurchasing+Ext.m
//  unitypurchasing
//
//  Created by Priyesh Wani on 12/16/16.
//  Copyright © 2016 Alex McAusland. All rights reserved.
//

#import "UnityPurchasing+Ext.h"
#import <objc/runtime.h>
#import <OCMock/OCMock.h>
#import "FakeStorekit.h"
#import <StoreKit/StoreKit.h>


@implementation UnityPurchasing (Ext)



+ (void) load {
    
    printf("In load function\n");
    static dispatch_once_t once_token;
    
    dispatch_once(&once_token,  ^{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wundeclared-selector"
        
//        SEL unityPurchasindSendMessage = @selector(UnitySendMessage:payload:);
//        SEL swizzleSendMessage = @selector(swizzledSendMessageMethod:payload:);
//        Method originalMethod = class_getInstanceMethod(self, unityPurchasindSendMessage);
//        Method extendedMethod = class_getInstanceMethod(self, swizzleSendMessage);
//        method_exchangeImplementations(originalMethod, extendedMethod);
        
        
//        SEL unityPurchasindSendMessageWithTransactionId = @selector(UnitySendMessage:payload:receipt:transactionId:);
//        SEL swizzleSendMessageWithTransactionId = @selector(swizzledSendMethodWithTransactionId);
//        Method originalMethod_sendMessage_withTransactionId = class_getInstanceMethod(self, unityPurchasindSendMessageWithTransactionId);
//        Method extendedMethod_sendMessage_withTransactionId = class_getInstanceMethod(self, swizzleSendMessageWithTransactionId);
//        method_exchangeImplementations(originalMethod_sendMessage_withTransactionId, extendedMethod_sendMessage_withTransactionId);

#pragma clang diagnostic pop
    });
    
}


- (void) processPaymentRequest : (NSArray *) transactionArray {
    [self paymentQueue:[SKPaymentQueue defaultQueue] updatedTransactions:transactionArray];
}

//- (void) swizzledSendMessageMethod:(NSString*) subject payload:(NSString*) payload {
//    NSDictionary *userInfo = @{@"message" : subject};
//    NSLog(@"Message received : %@", subject);
//    [[NSNotificationCenter defaultCenter] postNotificationName:@"CompleteTransaction" object:self userInfo:userInfo];
//}
//
//-(void) swizzledSendMethodWithTransactionId {
//    NSLog(@"Transaction Complete");
//    if([[[FakeStorekit getInstance] state] isEqualToString:@"Restore"]) {//Purchase is restored
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"ProductPurchaseComplete" object:self userInfo:@{@"state" : @"restore"}];
//    } else {
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"ProductPurchaseComplete" object:self];
//    }
//}

-(void)setValidProducts:(NSMutableDictionary*) dictionary {
    if(nil == validProducts) {
        validProducts = [[NSMutableDictionary alloc] init];
    }
    [validProducts addEntriesFromDictionary:dictionary];
}

-(void) swizzle : (SEL) originalMethodSelector swizzledMethod : (SEL) replaceMethod {
    Method originalMethod = class_getInstanceMethod([UnityPurchasing class], originalMethodSelector);
    Method extendedMethod = class_getInstanceMethod([UnityPurchasing class], replaceMethod);
    method_exchangeImplementations(originalMethod, extendedMethod);
}

-(void) notifyRestoreComplete {
    [self paymentQueueRestoreCompletedTransactionsFinished: [SKPaymentQueue defaultQueue]];
}

@end
