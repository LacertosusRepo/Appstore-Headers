//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTNowPlayingViewPremiumDefault_TopBar_ContextMenuButtonInteractionEventFactory, SPTNowPlayingViewPremiumDefault_TopBar_HideButtonInteractionEventFactory, SPTNowPlayingViewPremiumDefault_TopBar_PlaybackSourceLabelInteractionEventFactory;

@protocol SPTNowPlayingViewPremiumDefault_TopBarInteractionEventFactory <NSObject>
- (id <SPTNowPlayingViewPremiumDefault_TopBar_ContextMenuButtonInteractionEventFactory>)contextMenuButtonFactory;
- (id <SPTNowPlayingViewPremiumDefault_TopBar_PlaybackSourceLabelInteractionEventFactory>)playbackSourceLabelFactory;
- (id <SPTNowPlayingViewPremiumDefault_TopBar_HideButtonInteractionEventFactory>)hideButtonFactory;
@end
