//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountsAuthRequestDelegate-Protocol.h"

@class MISSING_TYPE;

@interface _TtC25ThirdPartyAuthFeatureImplP33_1224ADA00303A67C7AED57D1C5C60E6A35StartPreflightEffectHandlerDelegate : NSObject <SPTAccountsAuthRequestDelegate>
{
    MISSING_TYPE *sendHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)performAuthWithCookie:(id)arg1 accountsRequestURL:(id)arg2;
- (void)authRequest:(id)arg1 didCompleteForAccountsRequestURL:(id)arg2 withResponseURI:(id)arg3;
- (void)authRequestDidStart:(id)arg1;

@end

