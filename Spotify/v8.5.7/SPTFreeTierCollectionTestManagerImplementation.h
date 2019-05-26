//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionTestManager-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformTestManager, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTProductState;

@interface SPTFreeTierCollectionTestManagerImplementation : NSObject <SPTFreeTierCollectionTestManager>
{
    _Bool _premiumLabelEnabled;
    _Bool _frecencySortOrderDefaultInPlaylistsEnabled;
    _Bool _doubleTabYourLibraryEnabled;
    _Bool _collectionAlbumsEntityEnabled;
    _Bool _availableOfflineSortingEnabled;
    _Bool _consolidatedExperienceEnabled;
    _Bool _filterChipButtonEnabled;
    _Bool _recommendedAlbumsSectionEnabled;
    _Bool _textFilterRecommendedArtistsEnabled;
    _Bool _textFilterRecommendedAlbumsEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
    id <SPTFeatureFlagSignal> _yourLibrarySignal;
    id <SPTFeatureFlagSignal> _consolidatedAlbumSignal;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _frecencySortOrderDefaultInPlaylistsSignal;
    id <SPTFeatureFlagSignal> _availableOfflineSortSignal;
    id <SPTFeatureFlagSignal> _consolidatedExperienceSignal;
    id <SPTFeatureFlagSignal> _filterChipButtonSignal;
    id <SPTFeatureFlagSignal> _recommendedAlbumsSectionSignal;
    id <SPTFeatureFlagSignal> _textFilterRecommendedArtistsSignal;
    id <SPTFeatureFlagSignal> _textFilterRecommendedAlbumsSignal;
}

@property(retain, nonatomic) id <SPTFeatureFlagSignal> textFilterRecommendedAlbumsSignal; // @synthesize textFilterRecommendedAlbumsSignal=_textFilterRecommendedAlbumsSignal;
@property(nonatomic, getter=isTextFilterRecommendedAlbumsEnabled) _Bool textFilterRecommendedAlbumsEnabled; // @synthesize textFilterRecommendedAlbumsEnabled=_textFilterRecommendedAlbumsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> textFilterRecommendedArtistsSignal; // @synthesize textFilterRecommendedArtistsSignal=_textFilterRecommendedArtistsSignal;
@property(nonatomic, getter=isTextFilterRecommendedArtistsEnabled) _Bool textFilterRecommendedArtistsEnabled; // @synthesize textFilterRecommendedArtistsEnabled=_textFilterRecommendedArtistsEnabled;
@property(nonatomic, getter=isRecommendedAlbumsSectionEnabled) _Bool recommendedAlbumsSectionEnabled; // @synthesize recommendedAlbumsSectionEnabled=_recommendedAlbumsSectionEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> recommendedAlbumsSectionSignal; // @synthesize recommendedAlbumsSectionSignal=_recommendedAlbumsSectionSignal;
@property(nonatomic, getter=isFilterChipButtonEnabled) _Bool filterChipButtonEnabled; // @synthesize filterChipButtonEnabled=_filterChipButtonEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> filterChipButtonSignal; // @synthesize filterChipButtonSignal=_filterChipButtonSignal;
@property(nonatomic, getter=isConsolidatedExperienceEnabled) _Bool consolidatedExperienceEnabled; // @synthesize consolidatedExperienceEnabled=_consolidatedExperienceEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> consolidatedExperienceSignal; // @synthesize consolidatedExperienceSignal=_consolidatedExperienceSignal;
@property(nonatomic, getter=isAvailableOfflineSortingEnabled) _Bool availableOfflineSortingEnabled; // @synthesize availableOfflineSortingEnabled=_availableOfflineSortingEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> availableOfflineSortSignal; // @synthesize availableOfflineSortSignal=_availableOfflineSortSignal;
@property(nonatomic, getter=isCollectionAlbumsEntityEnabled) _Bool collectionAlbumsEntityEnabled; // @synthesize collectionAlbumsEntityEnabled=_collectionAlbumsEntityEnabled;
@property(nonatomic, getter=isDoubleTabYourLibraryEnabled) _Bool doubleTabYourLibraryEnabled; // @synthesize doubleTabYourLibraryEnabled=_doubleTabYourLibraryEnabled;
@property(nonatomic, getter=isFrecencySortOrderDefaultInPlaylistsEnabled) _Bool frecencySortOrderDefaultInPlaylistsEnabled; // @synthesize frecencySortOrderDefaultInPlaylistsEnabled=_frecencySortOrderDefaultInPlaylistsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> frecencySortOrderDefaultInPlaylistsSignal; // @synthesize frecencySortOrderDefaultInPlaylistsSignal=_frecencySortOrderDefaultInPlaylistsSignal;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> consolidatedAlbumSignal; // @synthesize consolidatedAlbumSignal=_consolidatedAlbumSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> yourLibrarySignal; // @synthesize yourLibrarySignal=_yourLibrarySignal;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)setupRecommendedArtistsSectionSignal;
- (void)setupRecommendedAlbumsSectionSignal;
@property(readonly, nonatomic, getter=isShowAlbumsWithLikedSongsEnabled) _Bool showAlbumsWithLikedSongsEnabled;
@property(readonly, nonatomic, getter=isBookmarkModelEnabled) _Bool bookmarkModelEnabled;
- (_Bool)isNPTUser;
@property(readonly, nonatomic, getter=isShowArtistsWithLikedSongsEnabled) _Bool showArtistsWithLikedSongsEnabled;
- (void)setupFilterChipButtonSignal;
- (void)setupAvailableOfflineSignal;
- (void)setupFrecencySortingSignal;
- (void)handleWindowedTrackSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupIsPremiumOnlySignal;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 collectionPlatformTestManager:(id)arg3 yourLibrarySignal:(id)arg4 consolidatedAlbumSignal:(id)arg5 consolidatedExperienceSignal:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

