//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSURL, UIViewController;
@protocol SPTFormatListPlatformManager, SPTFormatListPlatformRegistry, SPTFormatListPlatformRemoteControlPolicyFactory, SPTFormatListPlatformRemoteControlPolicyManager, SPTFormatListPlatformResolver, SPTFormatListPlatformTestManager, SPTPageController, SPTPageCreationContext;

@protocol SPTFormatListPlatformService <SPTService>
- (UIViewController<SPTPageController> *)provideFormatListPlatformViewController:(NSURL *)arg1 context:(id <SPTPageCreationContext>)arg2;
- (id <SPTFormatListPlatformManager>)providePlatformManagerForFormatListURL:(NSURL *)arg1;
- (id <SPTFormatListPlatformResolver>)providePlatformResolver;
- (id <SPTFormatListPlatformRemoteControlPolicyManager>)provideRemoteControlPolicyManager;
- (id <SPTFormatListPlatformRegistry>)providePlatformRegistry;
- (id <SPTFormatListPlatformRemoteControlPolicyFactory>)provideRemoteControlPolicyFactory;
- (id <SPTFormatListPlatformTestManager>)provideTestManager;
@end

