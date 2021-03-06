//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol NowPlayingFeature <NSObject>
- (id <SPTNowPlayingModesRegistry>)provideModesRegistry;
- (id <SPTNowPlayingFeedbackObservable>)provideNowPlayingFeedbackObservable;
- (id <SPTNowPlayingRemoteControlPolicyRegistry>)provideRemoteControlPolicyRegistry;
- (id <SPTNowPlayingRemoteControlEventControllerRegistry>)provideRemoteControlEventControllerRegistry;
- (id <SPTNowPlayingShowsFormatOverriderRegistry>)provideShowsFormatOverriderRegistry;
- (id <SPTNowPlayingInfoCenterManagerProtocol>)provideInfoCenterManager;
- (id <SPTNowPlayingContentProviderRegistries>)provideContentProviderRegistries;
- (id <SPTQueueInteractor>)provideQueueInteractor;
- (id <SPTNowPlayingStateObservable>)provideNowPlayingStateObservable;
- (id <SPTNowPlayingContainerIdleMonitorObservable>)provideNowPlayingContainerIdleMonitorObservable;
- (id <SPTNowPlayingVideoManager>)provideVideoManager;
- (id <SPTNowPlayingManager>)provideNowPlayingManager;
@end

