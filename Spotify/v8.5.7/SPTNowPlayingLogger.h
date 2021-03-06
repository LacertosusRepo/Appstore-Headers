//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTInteractionLogger, SPTLogCenter, SPTNowPlayingBarInteractionEventFactory, SPTNowPlayingModeResolver, SPTNowPlayingTestManager, SPTNowPlayingViewPremiumDefaultInteractionEventFactory;

@interface SPTNowPlayingLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTInteractionLogger> _interactionLogger;
    id <SPTNowPlayingBarInteractionEventFactory> _nowPlayingBarInteractionFactory;
    id <SPTNowPlayingViewPremiumDefaultInteractionEventFactory> _nowPlayingViewInteractionFactory;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTNowPlayingModeResolver> _modeResolver;
    CDUnknownBlockType _likeActionResolver;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType likeActionResolver; // @synthesize likeActionResolver=_likeActionResolver;
@property(readonly, nonatomic) __weak id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTNowPlayingViewPremiumDefaultInteractionEventFactory> nowPlayingViewInteractionFactory; // @synthesize nowPlayingViewInteractionFactory=_nowPlayingViewInteractionFactory;
@property(retain, nonatomic) id <SPTNowPlayingBarInteractionEventFactory> nowPlayingBarInteractionFactory; // @synthesize nowPlayingBarInteractionFactory=_nowPlayingBarInteractionFactory;
@property(retain, nonatomic) id <SPTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logInteractionRequestId:(id)arg1 featureId:(id)arg2 pageURI:(id)arg3 section:(id)arg4 targetURI:(id)arg5 type:(id)arg6 intent:(id)arg7 action:(id)arg8;
- (void)logSettingsPlayFeedBackSoundEnabled:(_Bool)arg1 itemIndex:(long long)arg2;
- (void)logHideButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logBarHeartButtonTapped:(long long)arg1 playerState:(id)arg2;
- (void)logHeartButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logNowPlayingRotatedPortraitWithPlayerState:(id)arg1;
- (void)logNowPlayingRotatedLandscapeWithPlayerState:(id)arg1;
- (void)logTapToOpenArtist:(id)arg1 playerState:(id)arg2;
- (void)logTapToHideControls:(_Bool)arg1 playerState:(id)arg2;
- (void)logShareWithPlayerState:(id)arg1;
- (void)logSwipeToOpenWithPlayerState:(id)arg1;
- (void)logBarTappedWithPlayerState:(id)arg1;
- (void)logShuffleButtonTappedEnableShuffle:(_Bool)arg1 playerState:(id)arg2;
- (void)logRepeatButtonTappedWithMode:(unsigned long long)arg1 playerState:(id)arg2;
- (void)logCollectionButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logGoToAlbum:(id)arg1 playerState:(id)arg2;
- (void)logOpenConnectButtonTappedWithPlayerState:(id)arg1;
- (void)logGoToPlayContextButtonTappedWithPlayerState:(id)arg1 contextURI:(id)arg2;
- (void)logGoToQueueButtonTappedWithPlayerState:(id)arg1;
- (void)logSpeedControlMenuButtonTappedWithPlayerState:(id)arg1;
- (void)logContextMenuButtonTappedWithPlayerState:(id)arg1;
- (void)logSwipeToCloseWithPlayerState:(id)arg1;
- (void)logCloseButtonTappedWithPlayerState:(id)arg1;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (void)logSwipeToNextWithPlayerState:(id)arg1;
- (void)logSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (id)stringByPrependingModeToString:(id)arg1;
- (id)intentForHidingControls:(_Bool)arg1;
- (id)intentForShufflingState:(_Bool)arg1;
- (id)intentForRepeatMode:(unsigned long long)arg1;
- (id)intentForCollectionButtonBehavior:(long long)arg1;
- (id)intentForPlayButtonBehavior:(long long)arg1;
- (id)initWithLogCenter:(id)arg1 testManager:(id)arg2 modeResolver:(id)arg3 likeActionResolver:(CDUnknownBlockType)arg4 interactionLogger:(id)arg5 nowPlayingBarInteractionFactory:(id)arg6 nowPlayingViewInteractionFactory:(id)arg7;
- (void)ubi_logRemainingTimeLabelTapped;
- (void)ubi_logTapToOpenArtist:(id)arg1 playerState:(id)arg2;
- (void)ubi_logBarHeartButtonTapped:(long long)arg1 playerState:(id)arg2;
- (void)ubi_logBarSwipeToOpenWithPlayerState:(id)arg1;
- (void)ubi_logBarSwipeToPreviousWithPlayerState:(id)arg1;
- (void)ubi_logBarSwipeToNextWithPlayerState:(id)arg1;
- (void)ubi_logBarPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;

@end

