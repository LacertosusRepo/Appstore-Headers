//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTNowPlayingRemoteControlPolicy;

@protocol SPTFormatListPlatformRemoteControlPolicyFactory <NSObject>
- (id <SPTNowPlayingRemoteControlPolicy>)createRemoteControlPolicyForURI:(NSURL *)arg1;
@end

