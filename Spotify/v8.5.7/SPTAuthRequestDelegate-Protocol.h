//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, SPTAuthRequest;

@protocol SPTAuthRequestDelegate <NSObject>
- (void)authRequest:(SPTAuthRequest *)arg1 didCompleteWithResponseURI:(NSURL *)arg2;
- (void)authRequestDidStart:(SPTAuthRequest *)arg1;
@end

