//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformRemoteControlPolicyFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTFormatListPlatformRemoteControlPolicyManagerImplementation;
@protocol SPTFeedbackManager, SPTFormatListPlatformResolver, SPTLogCenter, SPTPlayerFeature;

@interface SPTFormatListPlatformRemoteControlPolicyFactoryImplementation : NSObject <SPTFormatListPlatformRemoteControlPolicyFactory>
{
    id <SPTFormatListPlatformResolver> _resolver;
    id <SPTPlayerFeature> _playerFeature;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTLogCenter> _logCenter;
    SPTFormatListPlatformRemoteControlPolicyManagerImplementation *_remoteControlPolicyManager;
    id <SPTFeedbackManager> _feedbackManager;
}

@property(readonly, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly, nonatomic) SPTFormatListPlatformRemoteControlPolicyManagerImplementation *remoteControlPolicyManager; // @synthesize remoteControlPolicyManager=_remoteControlPolicyManager;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTFormatListPlatformResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)initWithResolver:(id)arg1 playerFeature:(id)arg2 logCenter:(id)arg3 remoteControlPolicyManager:(id)arg4 feedbackManager:(id)arg5;
- (id)createRemoteControlPolicyForURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

