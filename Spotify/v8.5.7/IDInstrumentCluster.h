//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDHmiActionDelegate-Protocol.h"
#import "IDHmiEventDelegate-Protocol.h"
#import "IDHmiServiceLifecycleProtocol-Protocol.h"

@class IDHmiAction, IDHmiEvent, IDListModel, IDModel, IDView, NSString;
@protocol IDInstrumentClusterDataSource, IDInstrumentClusterDelegate;

@interface IDInstrumentCluster : NSObject <IDHmiActionDelegate, IDHmiEventDelegate, IDHmiServiceLifecycleProtocol>
{
    id <IDInstrumentClusterDataSource> _dataSource;
    id <IDInstrumentClusterDelegate> _delegate;
    unsigned long long _mode;
    IDView *_playlistTargetView;
    long long _identifier;
    IDModel *_playlistModel;
    IDModel *_modeSwitchModel;
    IDListModel *_listModel;
    IDHmiAction *_playlistSelectAction;
    IDHmiAction *_dataRequestAction;
    IDHmiEvent *_dataRequestEvent;
}

+ (id)new;
@property(readonly, nonatomic) IDHmiEvent *dataRequestEvent; // @synthesize dataRequestEvent=_dataRequestEvent;
@property(retain, nonatomic) IDHmiAction *dataRequestAction; // @synthesize dataRequestAction=_dataRequestAction;
@property(retain, nonatomic) IDHmiAction *playlistSelectAction; // @synthesize playlistSelectAction=_playlistSelectAction;
@property(readonly, nonatomic) IDListModel *listModel; // @synthesize listModel=_listModel;
@property(retain, nonatomic) IDModel *modeSwitchModel; // @synthesize modeSwitchModel=_modeSwitchModel;
@property(retain, nonatomic) IDModel *playlistModel; // @synthesize playlistModel=_playlistModel;
@property long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak IDView *playlistTargetView; // @synthesize playlistTargetView=_playlistTargetView;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property __weak id <IDInstrumentClusterDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <IDInstrumentClusterDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)preparePlaylist;
- (void)clearPlaylist;
- (void)flushPlaylistItemsInRange:(struct _NSRange)arg1;
- (void)handleDataRequest:(id)arg1;
- (void)handleDataRequestAction:(id)arg1;
- (void)handlePlaylistSelectAction:(id)arg1;
- (void)handleAction:(id)arg1 info:(id)arg2;
- (void)handleHmiEvent:(id)arg1 info:(id)arg2;
- (void)widgetHmiServiceDidStop:(id)arg1;
- (void)widgetHmiServiceDidStart:(id)arg1;
- (void)reloadPlaylist;
- (void)reloadPlaylistItemAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithId:(long long)arg1 playlistModel:(id)arg2 modeSwitchModel:(id)arg3 playlistSelectAction:(id)arg4 dataRequestAction:(id)arg5;
- (id)initWithPlaylistModel:(id)arg1 modeSwitchModel:(id)arg2 playlistSelectAction:(id)arg3 dataRequestAction:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

