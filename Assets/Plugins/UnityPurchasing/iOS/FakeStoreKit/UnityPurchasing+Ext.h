//
//  UnityPurchasing+Ext.h
//  unitypurchasing
//
//  Created by Priyesh Wani on 12/16/16.
//  Copyright © 2016 Alex McAusland. All rights reserved.
//

#import "UnityPurchasing.h"

@interface UnityPurchasing (Ext)

-(void) setValidProducts:(NSMutableDictionary*) dictionary;

-(void) processPaymentRequest : (NSArray *) transactionArray;

-(void) swizzle : (SEL) originalMethodSelector swizzledMethod : (SEL) replaceMethod;

-(void) notifyRestoreComplete;


@end




