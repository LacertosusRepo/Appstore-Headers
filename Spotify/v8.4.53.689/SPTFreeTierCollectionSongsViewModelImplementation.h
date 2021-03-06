//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionSongsHeaderViewModelActionDelegate.h"
#import "SPTFreeTierCollectionSongsModelDelegate.h"
#import "SPTFreeTierCollectionSongsViewModel.h"
#import "SPTPlayerObserver.h"

@class NSString, NSURL, SPTFreeTierCollectionLogger, SPTFreeTierCollectionSongsHeaderViewModelImplementation, SPTPlayOrigin, SPTPlayerState;

@interface SPTFreeTierCollectionSongsViewModelImplementation : NSObject <SPTFreeTierCollectionSongsHeaderViewModelActionDelegate, SPTPlayerObserver, SPTFreeTierCollectionSongsViewModel, SPTFreeTierCollectionSongsModelDelegate>
{
    _Bool _compactMode;
    NSString *_title;
    id <SPTFreeTierCollectionEntityViewModelDelegate> _delegate;
    id <SPTFreeTierCollectionSongsModel> _model;
    id <SPContextMenuFeature> _contextMenuFeature;
    SPTPlayOrigin *_playOrigin;
    id <SPTPlayer> _player;
    id <SPTOfflineModeState> _offlineModeState;
    SPTFreeTierCollectionLogger *_logger;
    SPTPlayerState *_lastPlayerState;
    SPTFreeTierCollectionSongsHeaderViewModelImplementation *_headerViewModel;
    unsigned long long _offlineAvailability;
    NSURL *_URL;
    id <SPTFreeTierCollectionTestManager> _testManager;
    id <SPTFreeTierPreCurationTestManager> _preCurationTestManager;
}

@property(readonly, nonatomic) id <SPTFreeTierPreCurationTestManager> preCurationTestManager; // @synthesize preCurationTestManager=_preCurationTestManager;
@property(readonly, nonatomic) id <SPTFreeTierCollectionTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(retain, nonatomic) SPTFreeTierCollectionSongsHeaderViewModelImplementation *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(readonly, nonatomic) SPTFreeTierCollectionLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <SPTFreeTierCollectionSongsModel> model; // @synthesize model=_model;
@property(readonly, nonatomic, getter=isCompactMode) _Bool compactMode; // @synthesize compactMode=_compactMode;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)playActionForSongsHeaderViewModel:(id)arg1;
- (void)songsModelDidUpdate:(id)arg1;
- (void)songsModel:(id)arg1 error:(id)arg2;
- (id)sectionIdForSectionType:(long long)arg1;
- (_Bool)isPlaying;
- (void)logExtraSongsWhyAction;
- (void)logPreviewWithAlbumCoverActionAtIndexPath:(id)arg1;
- (void)toggleTrackBanAtIndexPath:(id)arg1;
- (void)toggleTrackLikeAtIndexPath:(id)arg1;
- (void)presentMenuForSongAtIndexPath:(id)arg1 withSenderControl:(id)arg2 andLogContext:(id)arg3;
- (void)setAvailableOffline:(_Bool)arg1;
- (_Bool)isAdditionalControlsSection:(unsigned long long)arg1;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (id)sectionViewModelAtIndex:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isPreCurationEnabled) _Bool preCurationEnabled;
@property(readonly, nonatomic, getter=isPreviewList) _Bool previewList;
@property(readonly, nonatomic) unsigned long long numberSections;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithModel:(id)arg1 contextMenuFeature:(id)arg2 playOrigin:(id)arg3 player:(id)arg4 offlineModeState:(id)arg5 logger:(id)arg6 testManager:(id)arg7 preCurationTestManager:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

