//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCreatePlaylistTestManager-Protocol.h"

@class NSString, SPTCreatePlaylistFeatureProperties;
@protocol SPTRemoteConfigurationResolver;

@interface SPTCreatePlaylistTestManagerImplementation : NSObject <SPTCreatePlaylistTestManager>
{
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTCreatePlaylistFeatureProperties *_remoteConfigurationProperties;
}

@property(retain, nonatomic) SPTCreatePlaylistFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
- (void).cxx_destruct;
- (void)setupRemoteConfigurationProperties;
@property(readonly, nonatomic, getter=isCreatePlaylistEnabled) _Bool createPlaylistEnabled;
- (id)initWithRemoteConfigurationResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
