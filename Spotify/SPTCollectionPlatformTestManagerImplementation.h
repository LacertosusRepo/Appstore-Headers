//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformTestManager.h"
#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTCollectionPlatformTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTCollectionPlatformTestManager>
{
    _Bool _incompleteAlbumsUsedForCollectionState;
    _Bool _freeTierEnabled;
    _Bool _heartsEverywhereEnabled;
    _Bool _freeTierFavoriteSongsEnabled;
    _Bool _favoriteSongsTestEnabled1;
    _Bool _favoriteSongsTestEnabled2;
    _Bool _favoriteSongsTestEnabled3;
    _Bool _favoriteSongsTestEnabled4;
    _Bool _favoriteSongsRolloutEnabled;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTProductState> _productState;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTLocalSettings> _localSettings;
    id <SettingsRegistry> _settingsRegistry;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _heartsEverywhereSignal;
    id <SPTFreeTierEducationSnackBarPresenter> _snackbarEducationPresenter;
    id <SPTFeatureFlagSignal> _favoriteSongsTestSignal1;
    id <SPTFeatureFlagSignal> _favoriteSongsTestSignal2;
    id <SPTFeatureFlagSignal> _favoriteSongsTestSignal3;
    id <SPTFeatureFlagSignal> _favoriteSongsTestSignal4;
    id <SPTFeatureFlagSignal> _favoriteSongsRolloutSignal;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(retain, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(nonatomic, getter=isFavoriteSongsRolloutEnabled) _Bool favoriteSongsRolloutEnabled; // @synthesize favoriteSongsRolloutEnabled=_favoriteSongsRolloutEnabled;
@property(nonatomic, getter=isFavoriteSongsTestEnabled4) _Bool favoriteSongsTestEnabled4; // @synthesize favoriteSongsTestEnabled4=_favoriteSongsTestEnabled4;
@property(nonatomic, getter=isFavoriteSongsTestEnabled3) _Bool favoriteSongsTestEnabled3; // @synthesize favoriteSongsTestEnabled3=_favoriteSongsTestEnabled3;
@property(nonatomic, getter=isFavoriteSongsTestEnabled2) _Bool favoriteSongsTestEnabled2; // @synthesize favoriteSongsTestEnabled2=_favoriteSongsTestEnabled2;
@property(nonatomic, getter=isFavoriteSongsTestEnabled) _Bool favoriteSongsTestEnabled1; // @synthesize favoriteSongsTestEnabled1=_favoriteSongsTestEnabled1;
@property(nonatomic, getter=isFreeTierFavoriteSongsEnabled) _Bool freeTierFavoriteSongsEnabled; // @synthesize freeTierFavoriteSongsEnabled=_freeTierFavoriteSongsEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> favoriteSongsRolloutSignal; // @synthesize favoriteSongsRolloutSignal=_favoriteSongsRolloutSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> favoriteSongsTestSignal4; // @synthesize favoriteSongsTestSignal4=_favoriteSongsTestSignal4;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> favoriteSongsTestSignal3; // @synthesize favoriteSongsTestSignal3=_favoriteSongsTestSignal3;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> favoriteSongsTestSignal2; // @synthesize favoriteSongsTestSignal2=_favoriteSongsTestSignal2;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> favoriteSongsTestSignal1; // @synthesize favoriteSongsTestSignal1=_favoriteSongsTestSignal1;
@property(retain, nonatomic) id <SPTFreeTierEducationSnackBarPresenter> snackbarEducationPresenter; // @synthesize snackbarEducationPresenter=_snackbarEducationPresenter;
@property(nonatomic, getter=isHeartsEverywhereEnabled) _Bool heartsEverywhereEnabled; // @synthesize heartsEverywhereEnabled=_heartsEverywhereEnabled;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic, getter=isIncompleteAlbumsUsedForCollectionState) _Bool incompleteAlbumsUsedForCollectionState; // @synthesize incompleteAlbumsUsedForCollectionState=_incompleteAlbumsUsedForCollectionState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> heartsEverywhereSignal; // @synthesize heartsEverywhereSignal=_heartsEverywhereSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (void)setUpLocalSettings;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
@property(readonly, getter=isBookmarkModelEnabled) _Bool bookmarkModelEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)handleFavoriteSongsSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFavoriteSongsSignals;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 abbaFeatureFlags:(id)arg2 localSettings:(id)arg3 settingsRegistry:(id)arg4 featureSettingsItemFactory:(id)arg5 featureFlagFactory:(id)arg6 freeTierEnabledSignal:(id)arg7 heartsEverywhereSignal:(id)arg8 freeTierTestManager:(id)arg9 educationPresenter:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
