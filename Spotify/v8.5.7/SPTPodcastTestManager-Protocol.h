//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTPodcastTestManagerObserver;

@protocol SPTPodcastTestManager <NSObject>
@property(readonly, nonatomic, getter=isPodcastTopicsChipsEnabled) _Bool podcastTopicsChipsEnabled;
@property(readonly, nonatomic, getter=isRefinedPodcastPageEnabled) _Bool refinedPodcastPageEnabled;
@property(readonly, nonatomic, getter=isPodcast3DTouchEnabled) _Bool podcast3DTouchEnabled;
@property(readonly, nonatomic, getter=isPodcastPlaybackOrderEnabled) _Bool podcastPlaybackOrderEnabled;
@property(readonly, nonatomic, getter=isProductionisedYourLibraryEnabled) _Bool productionisedYourLibraryEnabled;
@property(readonly, nonatomic, getter=isScannablesEnabled) _Bool podcastContextMenuScannablesEnabled;
@property(readonly, nonatomic, getter=isPodcastEpisodeCardV2Enabled) _Bool podcastEpisodeCardV2Enabled;
@property(readonly, nonatomic, getter=isPodcastShowAutoFollowDisabled) _Bool podcastShowAutoFollowDisabled;
@property(readonly, nonatomic, getter=isLikeActionEnabled) _Bool likeActionEnabled;
@property(readonly, nonatomic, getter=isFollowActionEnabled) _Bool followActionEnabled;
@property(readonly, nonatomic, getter=isOnboardingTabBarTooltipTestEnabled) _Bool onboardingTabBarTooltipTestEnabled;
@property(readonly, nonatomic, getter=isOnboardingShowcaseTestEnabled) _Bool onboardingShowcaseTestEnabled;
@property(readonly, nonatomic, getter=isActionsForVideoWithAudioEnabled) _Bool actionsForVideoWithAudioEnabled;
@property(readonly, nonatomic, getter=isShowsCollectionFeatureEnabled) _Bool showsCollectionFeatureEnabled;
@property(readonly, nonatomic, getter=isVideoEntityPagesEnabled) _Bool videoEntityPagesEnabled;
@property(readonly, nonatomic, getter=isVideoFeatureEnabled) _Bool videoFeatureEnabled;
@property(readonly, nonatomic, getter=isPodcastFeatureEnabled) _Bool podcastFeatureEnabled;
- (void)removeObserver:(id <SPTPodcastTestManagerObserver>)arg1;
- (void)addObserver:(id <SPTPodcastTestManagerObserver>)arg1;
@end
