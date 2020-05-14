//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPodcastMixFeatureProperties;
@protocol SPTRemoteConfigurationResolver;

@interface SPTPodcastMixConfiguration : NSObject
{
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTPodcastMixFeatureProperties *_remoteConfigurationProperties;
}

@property(retain, nonatomic) SPTPodcastMixFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long episodeContextMenuAction;
@property(readonly, nonatomic, getter=isFeatureEnabled) _Bool featureEnabled;
- (void)setupRemoteConfigurationProperties;
- (id)initWithRemoteConfigurationResolver:(id)arg1;

@end
