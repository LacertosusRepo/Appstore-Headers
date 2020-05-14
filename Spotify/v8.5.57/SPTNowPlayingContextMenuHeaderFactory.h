//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNowPlayingModel, SPTStatefulPlayer, SPTTheme;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingPlaybackActionsHandler;

@interface SPTNowPlayingContextMenuHeaderFactory : NSObject
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingPlaybackActionsHandler> _playbackActionsHandler;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTStatefulPlayer *_player;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTStatefulPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingPlaybackActionsHandler> playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)createContextMenuSectionHeaderDelegate;
- (id)initWithModel:(id)arg1 playbackActionsHandler:(id)arg2 auxiliaryActionsHandler:(id)arg3 player:(id)arg4 theme:(id)arg5;

@end
