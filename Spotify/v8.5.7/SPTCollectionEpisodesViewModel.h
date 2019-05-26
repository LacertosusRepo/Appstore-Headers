//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEpisodeContextMenuControllerDelegate-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPodcastPlayerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableOrderedSet, NSString, NSURL;
@protocol SPTCollectionEpisodesViewModelDelegate, SPTExplicitContentAccessManager, SPTOfflineManager, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastEpisodeFactory, SPTPodcastPlayer, SPTPodcastTestManager;

@interface SPTCollectionEpisodesViewModel : NSObject <SPTExplicitContentEnabledStateObserver, SPTPodcastPlayerDelegate, SPTEpisodeContextMenuControllerDelegate>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _grouped;
    _Bool _reversePlaybackOrder;
    id <SPTCollectionEpisodesViewModelDelegate> _delegate;
    NSURL *_URL;
    long long _currentMediaType;
    long long _pageType;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastEpisodeFactory> _podcastEpisodeFactory;
    id <SPTPodcastPlayer> _player;
    id <SPTOfflineManager> _offlineManager;
    NSMutableArray *_entries;
    NSMutableOrderedSet *_episodes;
    NSDictionary *_rawJSON;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastDataLoaderRequestToken> _episodesRequestToken;
}

@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> episodesRequestToken; // @synthesize episodesRequestToken=_episodesRequestToken;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) _Bool reversePlaybackOrder; // @synthesize reversePlaybackOrder=_reversePlaybackOrder;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) NSDictionary *rawJSON; // @synthesize rawJSON=_rawJSON;
@property(retain, nonatomic) NSMutableOrderedSet *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long currentMediaType; // @synthesize currentMediaType=_currentMediaType;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTCollectionEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)markEpisodeAsPlayed:(id)arg1;
- (void)offlineEpisode:(id)arg1 offline:(_Bool)arg2;
@property(readonly, nonatomic, getter=isPlayingPodcastEpsiode) _Bool playingPodcastEpsiode;
@property(readonly, nonatomic) double currentEpisodeProgress;
- (void)markAsPlayedEpisode:(id)arg1 markAsPlayed:(_Bool)arg2;
- (id)markAsPlayedAndRemoveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isPlayingEpisodeAtIndexPath:(id)arg1;
- (void)pauseEpisodeAtIndexPath:(id)arg1;
- (void)playEpisodeAtIndexPath:(id)arg1;
- (_Bool)isActiveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (id)headerForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntrySections;
- (void)parseData:(id)arg1 intoArray:(id)arg2 withHeaderItem:(id)arg3;
- (id)parseJSONData:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)dealloc;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 player:(id)arg3 offlineManager:(id)arg4 pageType:(long long)arg5 testManager:(id)arg6 explicitContentAccessManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

