//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeSectionController.h"

#import "YTConnectionStatusControllerObserver.h"
#import "YTOfflinePlaylistControllerObserver.h"
#import "YTOfflineVideoControllerObserver.h"
#import "YTVideoListPlaylistIDResponderProvider.h"

@class NSString, UICollectionReusableView, YTAppOfflinePlaylistController, YTConnectionStatusController;

@interface YTOfflineItemSectionController : YTInnerTubeSectionController <YTConnectionStatusControllerObserver, YTOfflinePlaylistControllerObserver, YTOfflineVideoControllerObserver, YTVideoListPlaylistIDResponderProvider>
{
    NSString *_videoListPlaylistID;
    _Bool _containsExpiringContent;
    UICollectionReusableView *_header;
    YTAppOfflinePlaylistController *_offlinePlaylistController;
    YTConnectionStatusController *_connectionStatusController;
}

- (void).cxx_destruct;
- (void)queueOfflineRefreshIfConnected;
- (void)refreshSection;
- (id)behaviorResponderProvider;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)didDeleteAllOfflineVideos;
- (void)didSaveOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)didDeleteAllOfflinePlaylists;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (id)videoListPlaylistID;
- (void)innerTubeFeedControllerDataSource:(id)arg1 didReceiveContinuationResponse:(id)arg2;
- (void)collectionViewControllerWillAskForRefresh;
- (void)updateHeader:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (id)initWithCellFactory:(id)arg1 service:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

