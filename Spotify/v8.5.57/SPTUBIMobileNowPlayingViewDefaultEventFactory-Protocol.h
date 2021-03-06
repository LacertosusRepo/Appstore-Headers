//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileNowPlayingViewDefault_BottomBarContainerEventFactory, SPTUBIMobileNowPlayingViewDefault_CoverArtEventFactory, SPTUBIMobileNowPlayingViewDefault_MainControlsContainerEventFactory, SPTUBIMobileNowPlayingViewDefault_PlaybackProgressEventFactory, SPTUBIMobileNowPlayingViewDefault_ScrollComponentsContainerEventFactory, SPTUBIMobileNowPlayingViewDefault_TopBarContainerEventFactory, SPTUBIMobileNowPlayingViewDefault_TrackInformationContainerEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefaultEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeUiHide;
- (id <SPTUBIInteractionEvent>)dragUiReveal;
- (id <SPTUBIMobileNowPlayingViewDefault_ScrollComponentsContainerEventFactory>)scrollComponentsContainerFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_BottomBarContainerEventFactory>)bottomBarContainerFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_MainControlsContainerEventFactory>)mainControlsContainerFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_PlaybackProgressEventFactory>)playbackProgressFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TrackInformationContainerEventFactory>)trackInformationContainerFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_CoverArtEventFactory>)coverArtFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TopBarContainerEventFactory>)topBarContainerFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

