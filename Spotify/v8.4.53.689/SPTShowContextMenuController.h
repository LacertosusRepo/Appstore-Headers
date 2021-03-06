//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTShowContextMenuMetadataViewDelegate.h"

@class NSString;

@interface SPTShowContextMenuController : NSObject <SPTShowContextMenuMetadataViewDelegate>
{
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTUIPresentationService> _presentationService;
    id <SPTSleepTimerService> _sleepTimerFeature;
}

@property(nonatomic) __weak id <SPTSleepTimerService> sleepTimerFeature; // @synthesize sleepTimerFeature=_sleepTimerFeature;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void).cxx_destruct;
- (id)subtitleContextMenuActionForURI:(id)arg1 sourceURL:(id)arg2 options:(id)arg3;
- (void)showContextMenuMetadataViewShowMore:(id)arg1;
- (id)logContext;
- (void)presentContextMenuForEpisode:(id)arg1 URI:(id)arg2 metadata:(id)arg3 sourceURL:(id)arg4 contextMenuDelegate:(id)arg5 inViewController:(id)arg6 senderView:(id)arg7 options:(id)arg8;
- (id)provideGoToArtistActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideGoToAlbumActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideAddToPlaylistActionForTrackURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 contextSourceURL:(id)arg4;
- (void)presentContexMenuForShow:(id)arg1 enableOfflineEditing:(_Bool)arg2 contextMenuDelegate:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5 options:(id)arg6;
- (void)presentContexMenuWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (void)presentContexMenuWithMetaDataView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (id)initWithContextMenuFeature:(id)arg1 podcastTestManager:(id)arg2 collectionPlatfrom:(id)arg3 collectionTestManager:(id)arg4 podcastFeature:(id)arg5 sleepTimerFeature:(id)arg6 presentationService:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

