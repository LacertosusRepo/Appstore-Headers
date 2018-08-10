//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTUserDefaults.h"

#import "YTSettingsBackedByUserDefaults.h"

@class NSArray, NSDate, NSString, YTIBrowseResponse;

@interface YTUserDefaults (YouTube) <YTSettingsBackedByUserDefaults>
- (id)appKeysProvider;
@property(retain, nonatomic) NSDate *downloadRecommendationsNextSyncDate;
@property(nonatomic, getter=areDownloadRecommendationsEnabled) _Bool downloadRecommendationsEnabled;
- (_Bool)isWatchBreakSettingSetByUser;
- (id)watchBreakWaitAfterVideoEndsKey;
- (id)watchBreakFrequencyMinutesKey;
- (id)watchBreakEnabledKey;
@property(nonatomic) _Bool watchBreakWaitAfterVideoEnds;
@property(nonatomic) long long watchBreakFrequencyMinutes;
@property(nonatomic) _Bool watchBreakEnabled;
@property(nonatomic) _Bool didShowNewReelUserEducation;
@property(nonatomic) _Bool didShowReelsPickerTooltip;
@property(nonatomic) _Bool didShowReelsOnboardingOverlay;
@property(retain, nonatomic) NSDate *darkThemePromoLastShownDate;
@property(nonatomic) long long darkThemePromoShownCount;
@property(nonatomic) _Bool lastDarkThemeAllowed;
@property(nonatomic) long long pageStyle;
@property(nonatomic) _Bool offlineQualityRememberMySetting;
@property(nonatomic) _Bool didShowOfflineFirstDownloadMessage;
@property(retain, nonatomic) YTIBrowseResponse *offlineLibraryResponse;
@property(nonatomic, getter=isForceNavEndpointClick) _Bool forceNavEndpointClick;
@property(nonatomic) int vixServiceToOverride;
@property(copy, nonatomic) NSString *vixSnapshot;
@property(copy, nonatomic) NSString *vixUsername;
@property(nonatomic) long long lastCleanedIndex;
@property(nonatomic) long long retroactiveSignInLifetimeNumberOfPrompts;
@property(retain, nonatomic) NSDate *retroactiveSignInLastPrompted;
@property(retain, nonatomic) NSDate *retroactiveSignInLastSignedOut;
@property(retain, nonatomic) NSDate *lastDemoSwipeToOpenFeedActionBarDate;
@property(nonatomic) _Bool hasSwipedToOpenFeedActionBar;
@property(nonatomic) _Bool hasSeenVideoZoomUserEdu;
@property(nonatomic) _Bool showViewGestures;
@property(nonatomic) _Bool showButtonTapTargets;
@property(nonatomic) _Bool showViewFrames;
@property(retain, nonatomic) NSDate *lastOfflineRefreshAutomaticallyScheduledDate;
@property(nonatomic) long long doubleTapSeekDuration;
@property(nonatomic) long long maxLocalHistorySuggestions;
@property(nonatomic) _Bool doNotCount;
@property(nonatomic, getter=isOfflineHamplayerEnabled) _Bool offlineHamplayerEnabled;
@property(nonatomic, getter=isOfflineAVFoundationEnabled) _Bool offlineAVFoundationEnabled;
@property(nonatomic) _Bool playAsYouBrowseVATDShown;
@property(nonatomic) long long playAsYouBrowseSettingState;
@property(nonatomic, getter=isNerdStatsEnabled) _Bool nerdStatsEnabled;
@property(nonatomic) _Bool hasShownVRWelcomeScreen;
@property(nonatomic, getter=isWebMEnabled) _Bool webMEnabled;
@property(nonatomic) long long forcedMediaPlayerType;
@property(nonatomic) _Bool alwaysShowRetroactiveSignIn;
@property(nonatomic) _Bool alwaysShowFirstSignIn;
@property(nonatomic) _Bool searchHistoryPaused;
@property(nonatomic) _Bool watchHistoryPaused;
@property(copy, nonatomic) NSString *flexGenServerURL;
@property(nonatomic, getter=hasClearedOldBackgroundOnboardingHint) _Bool clearedOldBackgroundOnboardingHint;
@property(nonatomic, getter=hasBackgroundOnboardingHintShown) _Bool backgroundOnboardingHintShown;
@property(nonatomic) _Bool fullscreenPlaybackOnExternalScreenEnabled;
@property(nonatomic) int autonavSettingsState;
@property(nonatomic, getter=isPictureInPictureEnabled) _Bool pictureInPictureEnabled;
@property(nonatomic) long long backgroundability;
@property(nonatomic, getter=isForcedInnerTubeUploads) _Bool forcedInnerTubeUploads;
@property(nonatomic) long long uploadQuality;
@property(nonatomic, getter=isFPSWatchdogEnabled) _Bool FPSWatchdogEnabled;
@property(nonatomic, getter=isFPSStatusBarEnabled) _Bool FPSStatusBarEnabled;
@property(nonatomic) _Bool browseDebug;
@property(nonatomic) long long forcedPromoIDRequests;
@property(copy, nonatomic) NSString *forcedPromoID;
@property(copy, nonatomic) NSArray *customExperimentIDs;
@property(nonatomic) _Bool enableCastSDKLogging;
@property(nonatomic, getter=isMDXVerboseLoggingEnabled) _Bool MDXVerboseLoggingEnabled;
@property(nonatomic) long long MDXForcedPromotionElementType;
@property(nonatomic) long long MDXServerEnvironment;
@property(nonatomic) _Bool disableMDXDeviceDiscovery;
@property(retain, nonatomic) NSDate *promotedItemLastClosedTime;
@property(nonatomic, getter=areHintsDisabled) _Bool hintsDisabled;
@property(nonatomic) _Bool logAdRequests;
@property(nonatomic, getter=isOfflineConfirmRemoveDisabled) _Bool offlineConfirmRemoveDisabled;
@property(nonatomic, getter=isWelcomeDismissed) _Bool welcomeDismissed;
@property(copy, nonatomic) NSString *captionLanguageCode;
@property(copy, nonatomic) NSString *contentRegion;
@property(nonatomic) _Bool initialFormatHDOnWiFiOnly;
@property(nonatomic) int safeSearch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

