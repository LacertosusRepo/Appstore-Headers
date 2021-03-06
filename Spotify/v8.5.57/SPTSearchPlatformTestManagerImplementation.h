//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTSearchPlatformTestManager-Protocol.h"

@class NSString, SPTSearchFeatureProperties;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal;

@interface SPTSearchPlatformTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTSearchPlatformTestManager>
{
    _Bool _searchKitEnabled;
    _Bool _podcastResultCardsTopPlayedEnabled;
    _Bool _podcastResultCardsDurationEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    SPTSearchFeatureProperties *_properties;
    id <SPTFeatureFlagSignal> _searchKitSignal;
    id <SPTFeatureFlagSignal> _podcastResultCardsTopPlayedSignal;
    id <SPTFeatureFlagSignal> _podcastResultCardsDurationSignal;
    unsigned long long _podcastRowsType;
}

@property(nonatomic) unsigned long long podcastRowsType; // @synthesize podcastRowsType=_podcastRowsType;
@property(nonatomic, getter=isPodcastResultCardsDurationEnabled) _Bool podcastResultCardsDurationEnabled; // @synthesize podcastResultCardsDurationEnabled=_podcastResultCardsDurationEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> podcastResultCardsDurationSignal; // @synthesize podcastResultCardsDurationSignal=_podcastResultCardsDurationSignal;
@property(nonatomic, getter=isPodcastResultCardsTopPlayedEnabled) _Bool podcastResultCardsTopPlayedEnabled; // @synthesize podcastResultCardsTopPlayedEnabled=_podcastResultCardsTopPlayedEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> podcastResultCardsTopPlayedSignal; // @synthesize podcastResultCardsTopPlayedSignal=_podcastResultCardsTopPlayedSignal;
@property(nonatomic, getter=isSearchKitEnabled) _Bool searchKitEnabled; // @synthesize searchKitEnabled=_searchKitEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> searchKitSignal; // @synthesize searchKitSignal=_searchKitSignal;
@property(readonly, nonatomic) SPTSearchFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isLyricsRowDebuggingEnabled) _Bool lyricsRowDebuggingEnabled;
@property(readonly, nonatomic, getter=isTopicsEnabled) _Bool topicsEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)updatePodcastRowType;
- (void)setUpSearchKitSignal;
- (void)setUpPodcastResultsCardsSignals;
- (id)initWithFeatureFlagFactory:(id)arg1 remoteConfigurationResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

