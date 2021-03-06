//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingArtistLabelUBILogger-Protocol.h"
#import "SPTNowPlayingCloseButtonUBILogger-Protocol.h"
#import "SPTNowPlayingConnectButtonUBILogger-Protocol.h"
#import "SPTNowPlayingContextMenuButtonUBILogger-Protocol.h"
#import "SPTNowPlayingCoverArtUBILogger-Protocol.h"
#import "SPTNowPlayingPlayButtonUBILogger-Protocol.h"
#import "SPTNowPlayingPlaybackSourceLabelUBILogger-Protocol.h"
#import "SPTNowPlayingProgressBarUBILogger-Protocol.h"
#import "SPTNowPlayingShareButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsBackwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkip15SecondsForwardButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipNextButtonUBILogger-Protocol.h"
#import "SPTNowPlayingSkipPreviousButtonUBILogger-Protocol.h"
#import "SPTNowPlayingTrackTitleLabelUBILogger-Protocol.h"
#import "SPTNowPlayingViewUBILogger-Protocol.h"

@class NSString;
@protocol SPTUBILogger, SPTUBIMobileNowPlayingViewVideoShowEventFactory;

@interface SPTNowPlayingVideoShowModeUBILoggerImplementation : NSObject <SPTNowPlayingViewUBILogger, SPTNowPlayingConnectButtonUBILogger, SPTNowPlayingPlayButtonUBILogger, SPTNowPlayingProgressBarUBILogger, SPTNowPlayingArtistLabelUBILogger, SPTNowPlayingTrackTitleLabelUBILogger, SPTNowPlayingCoverArtUBILogger, SPTNowPlayingContextMenuButtonUBILogger, SPTNowPlayingPlaybackSourceLabelUBILogger, SPTNowPlayingCloseButtonUBILogger, SPTNowPlayingSkip15SecondsBackwardButtonUBILogger, SPTNowPlayingSkip15SecondsForwardButtonUBILogger, SPTNowPlayingShareButtonUBILogger, SPTNowPlayingSkipNextButtonUBILogger, SPTNowPlayingSkipPreviousButtonUBILogger>
{
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileNowPlayingViewVideoShowEventFactory> _eventFactory;
}

@property(readonly, nonatomic) id <SPTUBIMobileNowPlayingViewVideoShowEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logShareButtonTapped;
- (void)logSkip15SecondsForwardTapped;
- (void)logSkip15SecondsBackwardTapped;
- (void)logCloseButtonTapped;
- (void)logGoToPlayContextButtonTappedWithContextURI:(id)arg1;
- (void)logContextMenuButtonTapped;
- (void)logTapToToggleControls;
- (void)logSwipeToPreviousWithPlayerState:(id)arg1;
- (void)logSwipeToNextWithPlayerState:(id)arg1;
- (void)logGoToAlbum:(id)arg1;
- (void)logTapToOpenArtist:(id)arg1;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logOpenConnectButtonTapped;
- (void)logSwipeToClose;
- (id)initWithUbiLogger:(id)arg1 eventFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

