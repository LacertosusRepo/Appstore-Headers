//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTNowPlayingRemoteControlPolicy;

@protocol SPTNowPlayingRemoteControlPolicyRegistry <NSObject>
- (id <SPTNowPlayingRemoteControlPolicy>)remoteControlPolicyForKey:(NSString *)arg1;
- (void)unregisterRemoteControlPolicy:(NSString *)arg1;
- (void)registerRemoteControlPolicy:(id <SPTNowPlayingRemoteControlPolicy>)arg1 policyKey:(NSString *)arg2;
@end

