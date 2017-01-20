//
//  SKProductsRequest+Swizzle.m
//  StorekitIntegrationTests
//
//  Created by Priyesh Wani on 12/14/16.
//  Copyright © 2016 Priyesh Wani. All rights reserved.
//

#import "SKProductsRequest+Swizzle.h"
#import <objc/runtime.h>
#import <OCMock/OCMock.h>
#import "FakeStorekit.h"

@implementation SKProductsRequest (Swizzle)

+ (void) load {
    printf("In load function\n");
    static dispatch_once_t once_token;
    dispatch_once(&once_token,  ^{
        SEL storekitStart = @selector(start);
        SEL swizzleStorekitStart = @selector(startSwizzle);
        Method originalMethod = class_getInstanceMethod(self, storekitStart);
        Method extendedMethod = class_getInstanceMethod(self, swizzleStorekitStart);
        method_exchangeImplementations(originalMethod, extendedMethod);
        
    });
}

- (void) startSwizzle {
    NSLog(@"Fetching Products from Fake Storekit");
    id response = [OCMockObject niceMockForClass:[SKProductsResponse class]];
    FakeStorekit *storeKit = [[FakeStorekit alloc] init];
    [[[response stub] andReturn:[storeKit productsListFromStore]] products];
    [[[response stub] andReturn:@[]] invalidProductIdentifiers];
    [self.delegate productsRequest:self didReceiveResponse:response];
}

@end
