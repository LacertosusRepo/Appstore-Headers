//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, SPTIAPTransactionRequest;

@protocol SPTIAPTransactionRequestDelegate <NSObject>
- (void)transactionRequest:(SPTIAPTransactionRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)transactionRequestDidFinish:(SPTIAPTransactionRequest *)arg1 withReceiptData:(NSData *)arg2;
- (void)transactionRequestDidResume:(SPTIAPTransactionRequest *)arg1;
- (void)transactionRequestDidStart:(SPTIAPTransactionRequest *)arg1;
@end

