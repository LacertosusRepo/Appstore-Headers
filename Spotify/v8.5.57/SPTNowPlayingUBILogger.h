//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingArtistLabelUBILogger-Protocol.h"
#import "SPTNowPlayingBanButtonUBILogger-Protocol.h"
#import "SPTNowPlayingCloseButtonUBILogger-Protocol.h"
#import "SPTNowPlayingConnectButtonUBILogger-Protocol.h"
#import "SPTNowPlayingContextMenuButtonUBILogger-Protocol.h"
#import "SPTNowPlayingCoverArtUBILogger-Protocol.h"
#import "SPTNowPlayingHeartButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlayButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlaybackSourceLabelUBILogger-Protocol.h"
#import "SPTNowPlayingProgressBarUBILogger-Protocol.h"
#import "SPTNowPlayingQueueButtonUBILogger-Protocol.h"
#import "SPTNowPlayingRepeatButtonUBILogger-Protocol.h"
#import "SPTNowPlayingScrollUBILogger-Protocol.h"
#import "SPTNowPlayingShareButtonUBILogger-Protocol.h"
#import "SPTNowPlayingShuffleModeButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsBackwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsForwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipNextButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipPreviousButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSleepTimerButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSpeedControlUBILogger-Protocol.h"
#import "SPTNowPlayingTrackTitleLabelUBILogger-Protocol.h"
#import "SPTNowPlayingViewUBILogger-Protocol.h"

@class NSString, SPTNowPlayingUBILoggerFactory;
@protocol SPTNowPlayingModeResolver;

@interface SPTNowPlayingUBILogger : NSObject <SPTNowPlayingPlayButtonUBILogger, SPTNowPlayingViewUBILogger, SPTNowPlayingScrollUBILogger, SPTNowPlayingQueueButtonUBILogger, SPTNowPlayingConnectButtonUBILogger, SPTNowPlayingRepeatButtonUBILogger, SPTNowPlayingSkipNextButtonUBILogger, SPTNowPlayingSkipPreviousButtonUBILogger, SPTNowPlayingShuffleModeButtonUBILogger, SPTNowPlayingProgressBarUBILogger, SPTNowPlayingHeartButtonUBILogger, SPTNowPlayingArtistLabelUBILogger, SPTNowPlayingTrackTitleLabelUBILogger, SPTNowPlayingCoverArtUBILogger, SPTNowPlayingContextMenuButtonUBILogger, SPTNowPlayingPlaybackSourceLabelUBILogger, SPTNowPlayingCloseButtonUBILogger, SPTNowPlayingBanButtonUBILogger, SPTNowPlayingSpeedControlUBILogger, SPTNowPlayingSkip15SecondsBackwardButtonUBILogger, SPTNowPlayingSkip15SecondsForwardButtonUBILogger, SPTNowPlayingShareButtonUBILogger, SPTNowPlayingSleepTimerButtonUBILogger>
{
    id <SPTNowPlayingModeResolver> _modeResolver;
    SPTNowPlayingUBILoggerFactory *_ubiLoggerFactory;
}

@property(readonly, nonatomic) SPTNowPlayingUBILoggerFactory *ubiLoggerFactory; // @synthesize ubiLoggerFactory=_ubiLoggerFactory;
@property(readonly, nonatomic) __weak id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
- (void).cxx_destruct;
- (void)logSleepTimerButtonTapped;
- (void)logShareButtonTapped;
- (void)logSkip15SecondsBackwardTapped;
- (void)logSkip15SecondsForwardTapped;
- (void)logSpeedControlMenuButtonTapped;
- (void)logBanButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logCloseButtonTapped;
- (void)logGoToPlayContextButtonTappedWithContextURI:(id)arg1;
- (void)logContextMenuButtonTapped;
- (void)logSwipeToNextWithPlayerState:(id)arg1;
- (void)logSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logTapToToggleControls;
- (void)logGoToAlbum:(id)arg1;
- (void)logTapToOpenArtist:(id)arg1;
- (void)logHeartButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (void)logShuffleButtonTappedEnableShuffle:(_Bool)arg1;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logRepeatButtonTappedWithMode:(unsigned long long)arg1;
- (void)logOpenConnectButtonTapped;
- (void)logGoToQueueButtonTapped;
- (void)logScrollComponentImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logScrollPageImpression;
- (void)logScrollSwipeInteraction;
- (void)logSwipeToClose;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (id)initWithModeResolver:(id)arg1 ubiLoggerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
