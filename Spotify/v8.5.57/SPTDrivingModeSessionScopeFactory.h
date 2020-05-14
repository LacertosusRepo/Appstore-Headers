//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeContextMenuFactory-Protocol.h"
#import "SPTDrivingModePivotViewFactory-Protocol.h"

@class NSString, SPTDrivingModeLogger, SPTDrivingModeSession;
@protocol SPTDrivingModeRemoteConfiguration, SPTExternalIntegrationPlaybackService, SPTGLUEService, SPTNowPlayingService, SPTPlayer, SPTUIPresentationService;

@interface SPTDrivingModeSessionScopeFactory : NSObject <SPTDrivingModePivotViewFactory, SPTDrivingModeContextMenuFactory>
{
    id <SPTUIPresentationService> _presentationService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTPlayer> _player;
    id <SPTGLUEService> _glueService;
    SPTDrivingModeSession *_session;
    SPTDrivingModeLogger *_logger;
    id <SPTDrivingModeRemoteConfiguration> _remoteConfiguration;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
}

@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) id <SPTDrivingModeRemoteConfiguration> remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
@property(retain, nonatomic) SPTDrivingModeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTDrivingModeSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
- (void).cxx_destruct;
- (id)createContextMenuViewController;
- (id)createPivotViewViewController;
- (id)initWithSession:(id)arg1 remoteConfiguration:(id)arg2 presentationService:(id)arg3 nowPlayingService:(id)arg4 player:(id)arg5 logger:(id)arg6 glueService:(id)arg7 playbackService:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

