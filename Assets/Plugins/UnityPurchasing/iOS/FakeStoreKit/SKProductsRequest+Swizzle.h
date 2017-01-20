//
//  SKProductsRequest+Swizzle.h
//  StorekitIntegrationTests
//
//  Created by Priyesh Wani on 12/14/16.
//  Copyright © 2016 Priyesh Wani. All rights reserved.
//

#import <StoreKit/StoreKit.h>

@interface SKProductsRequest (Swizzle)

//- (void)fetchAvailableProducts;

- (void) startSwizzle;

@end
