//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTContextMenuSectionHeaderDelegate-Protocol.h"
#import "SPTNowPlayingPlaybackActionsHandlerObserver-Protocol.h"
#import "SPTStatefulPlayerObserver-Protocol.h"

@class NSString, SPTNowPlayingContextMenuHeaderView, SPTNowPlayingModel, SPTStatefulPlayer, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingPlaybackActionsHandler;

@interface SPTNowPlayingContextMenuHeaderViewController : UIViewController <SPTNowPlayingPlaybackActionsHandlerObserver, SPTStatefulPlayerObserver, SPTContextMenuSectionHeaderDelegate>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTStatefulPlayer *_player;
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)playerDidUpdateTrackPosition:(id)arg1;
- (void)playerDidReceiveStateUpdate:(id)arg1;
- (void)player:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)playerDidUpdatePlaybackControls:(id)arg1;
- (void)playbackActionsHandlerDidToggleRepeat:(id)arg1;
- (void)playbackActionsHandlerDidToggleShuffle:(id)arg1;
- (void)playbackActionsHandlerDidPlayPause:(id)arg1;
- (id)contextMenuViewForSectionHeader;
- (double)contextMenuHeightForSectionHeader;
- (void)updateRepeatButton;
- (void)updateShuffleButton;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 auxiliaryActionsHandler:(id)arg3 player:(id)arg4 theme:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SPTNowPlayingContextMenuHeaderView *view; // @dynamic view;

@end

