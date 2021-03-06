//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTFreeTierAllSongsDataSourceDelegate-Protocol.h"

@class NSString, NSURL;
@protocol SPTAudioPreviewPlayer, SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTFreeTierAllSongsDataSource, SPTFreeTierAllSongsHeaderEntityViewModel, SPTFreeTierAllSongsViewModelDelegate, SPTFreeTierPreCurationTestManager, SPTLogCenter, SPTViewLogger;

@interface SPTFreeTierAllSongsViewModel : NSObject <SPTExplicitContentEnabledStateObserver, SPTFreeTierAllSongsDataSourceDelegate>
{
    _Bool _loaded;
    id <SPTFreeTierAllSongsViewModelDelegate> _delegate;
    NSURL *_viewURI;
    id <SPTAudioPreviewPlayer> _audioPreviewPlayer;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFreeTierAllSongsDataSource> _dataSource;
    id <SPTViewLogger> _viewLogger;
    id <SPTLogCenter> _logCenter;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTFreeTierPreCurationTestManager> _preCurationTestManager;
}

@property(readonly, nonatomic) id <SPTFreeTierPreCurationTestManager> preCurationTestManager; // @synthesize preCurationTestManager=_preCurationTestManager;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> audioPreviewPlayer; // @synthesize audioPreviewPlayer=_audioPreviewPlayer;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(nonatomic) __weak id <SPTFreeTierAllSongsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)freeTierAllSongsDataSource:(id)arg1 didFailToloadModelWithError:(id)arg2;
- (void)freeTierAllSongsDidLoadModelWithDataSource:(id)arg1;
- (void)freeTierAllSongsRequireReloadModelWithDataSource:(id)arg1;
- (void)logViewDataDidFailToLoadWithError:(id)arg1 pageIdentifier:(id)arg2;
- (void)logViewDataDidLoadWithPageIdentifier:(id)arg1;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1;
- (_Bool)isPlayingPreviewForIndexPath:(id)arg1;
- (unsigned long long)trackFeedbackTypeForIndexPath:(id)arg1;
- (id)trackIdentifierForIndexPath:(id)arg1;
- (void)trackContextMenuDataForIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)trackURIForIndexPath:(id)arg1;
- (_Bool)isTrackPreviewEnabledAtIndexPath:(id)arg1;
- (_Bool)isTrackQuickActionsEnabledAtIndexPath:(id)arg1;
- (_Bool)isTrackPlaybackRestrictedForIndexPath:(id)arg1;
- (_Bool)isTrackPremiumOnlyForIndexPath:(id)arg1;
- (_Bool)isTrackExplicitForIndexPath:(id)arg1;
- (_Bool)isTrackEnabledForIndexPath:(id)arg1;
- (_Bool)isSongBannedForIndexPath:(id)arg1;
- (_Bool)isSongLikedForIndexPath:(id)arg1;
- (id)albumNameForIndexPath:(id)arg1;
- (id)imageURLForIndexPath:(id)arg1;
- (id)subtitleAccessoryViewForIndexPath:(id)arg1;
- (id)subtitleForIndexPath:(id)arg1;
- (id)titleForIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)shouldShowHeaders;
- (id)titleForAllSongsViewModel;
- (id)toggleBanForIndexPath:(id)arg1;
- (id)toggleLikeForIndexPath:(id)arg1;
- (id)toggleNegativeFeedbackForIndexPath:(id)arg1;
- (id)togglePositiveFeedbackForIndexPath:(id)arg1;
- (void)audioPreviewPreventedForIndexPath:(id)arg1;
- (void)stopAudioPreviewViewPlayerIfNeeded;
- (void)stopAudioPreviewViewPlayer;
- (void)loadModel;
- (void)dealloc;
@property(readonly, nonatomic, getter=isPreCurationEnabled) _Bool preCurationEnabled;
@property(readonly, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel;
@property(readonly, nonatomic) _Bool hasHeader;
@property(readonly, nonatomic) NSString *updateDialogMessageForAllSongs;
@property(readonly, nonatomic) _Bool shouldDisplayUpdateDialogForAllSongs;
- (id)initWithDataSource:(id)arg1 audioPreviewPlayer:(id)arg2 collectionPlatform:(id)arg3 viewLogger:(id)arg4 logCenter:(id)arg5 explicitContentAccessManager:(id)arg6 preCurationTestManager:(id)arg7 viewURI:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

