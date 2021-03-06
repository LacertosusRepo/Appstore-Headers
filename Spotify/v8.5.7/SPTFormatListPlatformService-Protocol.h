//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL;
@protocol SPTFormatListPlatformManager, SPTFormatListPlatformRegistry, SPTFormatListPlatformRemoteControlPolicyFactory, SPTFormatListPlatformRemoteControlPolicyManager, SPTFormatListPlatformResolver, SPTFormatListPlatformTestManager;

@protocol SPTFormatListPlatformService <SPTService>
- (id <SPTFormatListPlatformManager>)providePlatformManagerForFormatListURL:(NSURL *)arg1;
- (id <SPTFormatListPlatformResolver>)providePlatformResolver;
- (id <SPTFormatListPlatformRemoteControlPolicyManager>)provideRemoteControlPolicyManager;
- (id <SPTFormatListPlatformRegistry>)providePlatformRegistry;
- (id <SPTFormatListPlatformRemoteControlPolicyFactory>)provideRemoteControlPolicyFactory;
- (id <SPTFormatListPlatformTestManager>)provideTestManager;
@end

