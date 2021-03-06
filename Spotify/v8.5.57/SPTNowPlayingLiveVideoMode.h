//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingMode-Protocol.h"

@class NSString, SPTNowPlayingLiveVideoViewModel, SPTTheme;
@protocol SPTNowPlayingModeLayoutDelegate, SPTNowPlayingModeViewControllerRegistry, SPTNowPlayingPlaybackActionsHandler;

@interface SPTNowPlayingLiveVideoMode : NSObject <SPTNowPlayingMode>
{
    id <SPTNowPlayingModeLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingModeViewControllerRegistry> _viewControllerRegistry;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    SPTNowPlayingLiveVideoViewModel *_viewModel;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingLiveVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingModeViewControllerRegistry> viewControllerRegistry; // @synthesize viewControllerRegistry=_viewControllerRegistry;
@property(nonatomic) __weak id <SPTNowPlayingModeLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (id)queueHeadUnitViewController;
- (id)footerUnitViewController;
- (id)headUnitViewController;
- (id)durationUnitViewController;
- (id)informationUnitViewController;
- (id)navigationBarUnitViewController;
- (id)identifier;
- (id)initWithViewControllerRegistry:(id)arg1 playbackActionsHandler:(id)arg2 viewModel:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

