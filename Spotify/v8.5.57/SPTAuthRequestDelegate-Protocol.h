//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTAuthAccountsRequest, SPTAuthRequest;

@protocol SPTAuthRequestDelegate <NSObject>
- (void)authRequest:(SPTAuthRequest *)arg1 didCompleteForAccountsRequest:(SPTAuthAccountsRequest *)arg2 withResponseURI:(NSURL *)arg3;
- (void)authRequestDidStart:(SPTAuthRequest *)arg1;
@end

