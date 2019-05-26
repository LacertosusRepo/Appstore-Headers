//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEpisodeContextMenuControllerDelegate-Protocol.h"

@class NSString;
@protocol SPTCollectionLogger, SPTCollectionPlatform, SPTOfflineManager, SPTPodcastDataLoader, SPTPodcastLogger, SPTPodcastTestManager, SPTShow, SPTShowEntityService;

@interface SPTPodcastContextMenuDelegateObject : NSObject <SPTEpisodeContextMenuControllerDelegate>
{
    id <SPTOfflineManager> _offlineManager;
    id <SPTShowEntityService> _showEntityService;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastLogger> _logger;
    id <SPTShow> _show;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTPodcastTestManager> _testManager;
}

@property(nonatomic) __weak id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) __weak id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) id <SPTShow> show; // @synthesize show=_show;
@property(retain, nonatomic) id <SPTPodcastLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTShowEntityService> showEntityService; // @synthesize showEntityService=_showEntityService;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (void)markEpisodeAsPlayed:(id)arg1;
- (void)offlineEpisode:(id)arg1 offline:(_Bool)arg2;
- (void)autoFollowIfNotFollowed:(id)arg1;
- (void)followPodcast;
- (void)loadPodcastWithURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithOfflineManager:(id)arg1 showEntityService:(id)arg2 dataLoader:(id)arg3 logger:(id)arg4 collectionLogger:(id)arg5 collectionPlatform:(id)arg6 testManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

