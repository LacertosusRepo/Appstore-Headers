//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileNowPlayingViewFeedback_BottomBarEventFactory, SPTUBIMobileNowPlayingViewFeedback_CoverArtEventFactory, SPTUBIMobileNowPlayingViewFeedback_MainControlsEventFactory, SPTUBIMobileNowPlayingViewFeedback_PlaybackProgressEventFactory, SPTUBIMobileNowPlayingViewFeedback_ScrollComponentsEventFactory, SPTUBIMobileNowPlayingViewFeedback_TopBarEventFactory, SPTUBIMobileNowPlayingViewFeedback_TrackInformationEventFactory;

@protocol SPTUBIMobileNowPlayingViewFeedbackEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeUiHide;
- (id <SPTUBIInteractionEvent>)dragUiReveal;
- (id <SPTUBIMobileNowPlayingViewFeedback_ScrollComponentsEventFactory>)scrollComponentsFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_BottomBarEventFactory>)bottomBarFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_MainControlsEventFactory>)mainControlsFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_TrackInformationEventFactory>)trackInformationFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_CoverArtEventFactory>)coverArtFactory;
- (id <SPTUBIMobileNowPlayingViewFeedback_TopBarEventFactory>)topBarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

