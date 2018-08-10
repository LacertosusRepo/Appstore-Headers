//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTFreeTierCollectionTestManager.h"

@class NSString;

@interface SPTFreeTierCollectionTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierCollectionTestManager>
{
    _Bool _premiumLabelEnabled;
    _Bool _albumTracksIncludedInFavoriteSongs;
    _Bool _albumTracksIncludedInFavoriteSongsTestEnabled1;
    _Bool _albumTracksIncludedInFavoriteSongsTestEnabled2;
    _Bool _albumTracksIncludedInFavoriteSongsTestEnabled3;
    _Bool _madeForSignalEnabled;
    _Bool _madeForEmployeeSignalEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTFeatureFlagSignal> _windowedTrackTestSignal;
    id <SPTFeatureFlagSignal> _includeAlbumTracksInFavoriteSongsTestSignal1;
    id <SPTFeatureFlagSignal> _includeAlbumTracksInFavoriteSongsTestSignal2;
    id <SPTFeatureFlagSignal> _includeAlbumTracksInFavoriteSongsTestSignal3;
    id <SPTFeatureFlagSignal> _madeForSignal;
    id <SPTFeatureFlagSignal> _madeForEmployeeSignal;
}

@property(nonatomic, getter=isMadeForEmployeeSignalEnabled) _Bool madeForEmployeeSignalEnabled; // @synthesize madeForEmployeeSignalEnabled=_madeForEmployeeSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForEmployeeSignal; // @synthesize madeForEmployeeSignal=_madeForEmployeeSignal;
@property(nonatomic, getter=isMadeForSignalEnabled) _Bool madeForSignalEnabled; // @synthesize madeForSignalEnabled=_madeForSignalEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForSignal; // @synthesize madeForSignal=_madeForSignal;
@property(nonatomic, getter=isAlbumTracksIncludedInFavoriteSongsTestEnabled3) _Bool albumTracksIncludedInFavoriteSongsTestEnabled3; // @synthesize albumTracksIncludedInFavoriteSongsTestEnabled3=_albumTracksIncludedInFavoriteSongsTestEnabled3;
@property(nonatomic, getter=isAlbumTracksIncludedInFavoriteSongsTestEnabled2) _Bool albumTracksIncludedInFavoriteSongsTestEnabled2; // @synthesize albumTracksIncludedInFavoriteSongsTestEnabled2=_albumTracksIncludedInFavoriteSongsTestEnabled2;
@property(nonatomic, getter=isAlbumTracksIncludedInFavoriteSongsTestEnabled1) _Bool albumTracksIncludedInFavoriteSongsTestEnabled1; // @synthesize albumTracksIncludedInFavoriteSongsTestEnabled1=_albumTracksIncludedInFavoriteSongsTestEnabled1;
@property(nonatomic, getter=isAlbumTracksIncludedInFavoriteSongsEnabled) _Bool albumTracksIncludedInFavoriteSongs; // @synthesize albumTracksIncludedInFavoriteSongs=_albumTracksIncludedInFavoriteSongs;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> includeAlbumTracksInFavoriteSongsTestSignal3; // @synthesize includeAlbumTracksInFavoriteSongsTestSignal3=_includeAlbumTracksInFavoriteSongsTestSignal3;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> includeAlbumTracksInFavoriteSongsTestSignal2; // @synthesize includeAlbumTracksInFavoriteSongsTestSignal2=_includeAlbumTracksInFavoriteSongsTestSignal2;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> includeAlbumTracksInFavoriteSongsTestSignal1; // @synthesize includeAlbumTracksInFavoriteSongsTestSignal1=_includeAlbumTracksInFavoriteSongsTestSignal1;
@property(nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled; // @synthesize premiumLabelEnabled=_premiumLabelEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> windowedTrackTestSignal; // @synthesize windowedTrackTestSignal=_windowedTrackTestSignal;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)setupMadeForSignals;
@property(readonly, nonatomic, getter=isMadeForSubtitleEnabled) _Bool madeForSubtitleEnabled;
- (void)handleIncludeAlbumTracksFavoriteSongsSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)handleWindowedTrackSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupIsPremiumOnlySignal;
- (void)setupAlbumTracksInFavoriteSongsSignals;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

