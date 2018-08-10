//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSSet, SKPayment, SPTIAPItunesProductRequest, SPTIAPProductActivationRequest, SPTIAPSpotifyProductRequest, SPTIAPTransactionRequest;

@protocol SPTIAPRequestFactory <NSObject>
- (SPTIAPProductActivationRequest *)createProductActivationRequestWithReceiptData:(NSData *)arg1;
- (SPTIAPTransactionRequest *)createTransactionRequestForPayment:(SKPayment *)arg1;
- (SPTIAPItunesProductRequest *)createItunesProductRequestForProductIdentifiers:(NSSet *)arg1;
- (SPTIAPSpotifyProductRequest *)createSpotifyProductRequest;
@end

