//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPodcastEpisodeProgressPolling-Protocol.h"
#import "SPTPodcastYourLibraryEpisodesViewModel-Protocol.h"

@class NSCache, NSDictionary, NSMutableArray, NSString, NSURL;
@protocol SPTExplicitContentAccessManager, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastPlayer, SPTPodcastYourLibraryEpisodesViewModelDelegate;

@interface SPTPodcastYourLibraryDownloadsViewModel : NSObject <SPTExplicitContentEnabledStateObserver, SPTPodcastYourLibraryEpisodesViewModel, SPTPodcastEpisodeProgressPolling>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    id <SPTPodcastYourLibraryEpisodesViewModelDelegate> _delegate;
    NSCache *_progressCache;
    NSURL *_URL;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSMutableArray *_episodes;
    id <SPTPodcastDataLoaderRequestToken> _episodesRequestToken;
    NSDictionary *_rawJSON;
}

@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(copy, nonatomic) NSDictionary *rawJSON; // @synthesize rawJSON=_rawJSON;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> episodesRequestToken; // @synthesize episodesRequestToken=_episodesRequestToken;
@property(retain, nonatomic) NSMutableArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSCache *progressCache; // @synthesize progressCache=_progressCache;
@property(nonatomic) __weak id <SPTPodcastYourLibraryEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (id)parseJSONDictionary:(id)arg1;
- (id)cachedProgressForEpisode:(id)arg1;
- (void)updateCurrentProgress:(double)arg1 position:(double)arg2 duration:(double)arg3 forEpisode:(id)arg4;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (id)allEpisodesInSection:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntrySections;
- (_Bool)isEpisodePlayingAtIndexPath:(id)arg1;
- (_Bool)isEpisodeActiveAtIndexPath:(id)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
@property(readonly, nonatomic, getter=isPlayingPodcastEpsiode) _Bool playingPodcastEpisode;
@property(readonly, nonatomic) double currentEpisodeProgress;
- (id)episodeAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 player:(id)arg3 explicitContentAccessManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

