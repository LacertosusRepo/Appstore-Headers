//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTPlaylistExtenderModel-Protocol.h"
#import "SPTPlaylistExtenderModelEffectLoop-Protocol.h"
#import "SPTPlaylistExtenderModelEventLoop-Protocol.h"

@class NSString, NSURL;
@protocol SPTExplicitContentAccessManager, SPTNetworkConnectivityController, SPTPlayer, SPTPlaylistExtender, SPTPlaylistExtenderModel, SPTPlaylistExtenderModelDelegate, SPTPlaylistExtenderModelState, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTPlaylistExtenderModelImplementation : NSObject <SPTNetworkConnectivityControllerObserver, SPTPlaylistExtenderModel, SPTPlaylistExtenderModelEffectLoop, SPTPlaylistExtenderModelEventLoop>
{
    id <SPTPlaylistExtenderModelDelegate> delegate;
    id subscriptionToken;
    id <SPTPlaylistExtender> _playlistExtender;
    id <SPTPlayer> _player;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
    unsigned long long _preferredNumberOfTracks;
    NSURL *_playlistURI;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTPlaylistExtenderModelState> _currentState;
}

@property(retain, nonatomic) id <SPTPlaylistExtenderModelState> currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
@property(nonatomic) unsigned long long preferredNumberOfTracks; // @synthesize preferredNumberOfTracks=_preferredNumberOfTracks;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPlaylistExtender> playlistExtender; // @synthesize playlistExtender=_playlistExtender;
@property(retain, nonatomic) id subscriptionToken; // @synthesize subscriptionToken;
@property(nonatomic) __weak id <SPTPlaylistExtenderModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
@property(readonly, nonatomic) NSString *sectionFooterButtonTitle;
@property(readonly, nonatomic) NSString *sectionHeaderSubtitle;
@property(readonly, nonatomic) NSString *sectionHeaderTitle;
- (_Bool)shouldDisplayFooter;
- (void)trackSelectedAtIndex:(long long)arg1;
- (void)refresh;
- (unsigned long long)numberOfTracks;
- (void)startLoading;
- (id)itemForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)addTrackAtIndex:(unsigned long long)arg1;
- (void)pushState:(id)arg1 withEffects:(id)arg2;
- (void)pushEvent:(id)arg1;
@property(readonly, nonatomic) __weak id <SPTPlaylistExtenderModel> model;
- (id)initWithPlaylistExtender:(id)arg1 player:(id)arg2 explicitContentAccessManager:(id)arg3 playlistDataLoader:(id)arg4 playlistModel:(id)arg5 networkConnectivityController:(id)arg6 playlistURI:(id)arg7 preferredNumberOfTracks:(unsigned long long)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
