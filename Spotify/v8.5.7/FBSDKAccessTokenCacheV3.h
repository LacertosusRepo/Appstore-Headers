//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKAccessTokenCaching-Protocol.h"

@class NSString;

@interface FBSDKAccessTokenCacheV3 : NSObject <FBSDKAccessTokenCaching>
{
}

+ (id)accessTokenForV3Dictionary:(id)arg1;
- (void)cacheAccessToken:(id)arg1;
- (void)clearCache;
- (id)fetchAccessToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

