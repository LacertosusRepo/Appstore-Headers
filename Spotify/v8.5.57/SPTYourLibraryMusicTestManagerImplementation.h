//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTYourLibraryMusicTestManager-Protocol.h"

@class NSDictionary, NSString, SPTYourLibraryMusicFeatureProperties;
@protocol SPTCollectionPlatformTestManager, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState, SPTRemoteConfigurationResolver, SPTYourLibraryTestManager;

@interface SPTYourLibraryMusicTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTYourLibraryMusicTestManager>
{
    _Bool _premiumLabelEnabled;
    _Bool _consolidatedExperienceEnabled;
    _Bool _likedSongsFiltersReversedEnabled;
    _Bool _likedSongsFilterChipsAbbaEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTYourLibraryMusicFeatureProperties *_remoteConfigurationProperties;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <SPTYourLibraryTestManager> _yourLibraryTestManager;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _consolidatedExperienceSignal;
    NSDictionary *_likedSongsFiltersSignals;
}

@property(nonatomic, getter=isLikedSongsFilterChipsAbbaEnabled) _Bool likedSongsFilterChipsAbbaEnabled; // @synthesize likedSongsFilterChipsAbbaEnabled=_likedSongsFilterChipsAbbaEnabled;
@property(copy, nonatomic) NSDictionary *likedSongsFiltersSignals; // @synthesize likedSongsFiltersSignals=_likedSongsFiltersSignals;
@property(nonatomic, getter=isLikedSongsFiltersReversedEnabled) _Bool likedSongsFiltersReversedEnabled; // @synthesize likedSongsFiltersReversedEnabled=_likedSongsFiltersReversedEnabled;
@property(nonatomic, getter=isConsolidatedExperienceEnabled) _Bool consolidatedExperienceEnabled; // @synthesize consolidatedExperienceEnabled=_consolidatedExperienceEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedExperienceSignal; // @synthesize consolidatedExperienceSignal=_consolidatedExperienceSignal;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(readonly, nonatomic) id <SPTYourLibraryTestManager> yourLibraryTestManager; // @synthesize yourLibraryTestManager=_yourLibraryTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(retain, nonatomic) SPTYourLibraryMusicFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (id)unionOfMultipleChoiceSignalsForAllFlags:(id)arg1 andSignalsForOneFlag:(id)arg2;
@property(readonly, nonatomic, getter=isOfflineArtistEnabled) _Bool offlineArtistEnabled;
@property(readonly, nonatomic, getter=isFrecencySortOrderDefaultInPlaylistsEnabled) _Bool frecencySortOrderDefaultInPlaylistsEnabled;
@property(readonly, nonatomic) long long quickScrollMinPages;
@property(readonly, nonatomic) unsigned long long quickScrollMechanismInLikedSongs;
@property(readonly, nonatomic) unsigned long long quickScrollMechanism;
@property(readonly, nonatomic, getter=isLikedSongsFiltersEnabled) _Bool likedSongsFiltersEnabled;
@property(readonly, nonatomic, getter=isShowAlbumArtistRecommendationsEnabled) _Bool showAlbumArtistRecommendationsEnabled;
@property(readonly, nonatomic, getter=isHideCreatePlaylistEnabled) _Bool hideCreatePlaylistEnabled;
- (void)setupRemoteConfigurationProperties;
- (void)handleWindowedTrackSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupLikedSongsFiltersSignals;
- (void)setupIsPremiumOnlySignal;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 remoteConfigurationResolver:(id)arg3 collectionPlatformTestManager:(id)arg4 consolidatedExperienceSignal:(id)arg5 yourLibraryTestManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
