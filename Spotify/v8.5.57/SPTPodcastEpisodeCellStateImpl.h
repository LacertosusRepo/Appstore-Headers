//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeCellState-Protocol.h"

@class NSString, SPTPodcastEpisodeCachedProgress;
@protocol SPTPodcastEpisode;

@interface SPTPodcastEpisodeCellStateImpl : NSObject <SPTPodcastEpisodeCellState>
{
    _Bool _isEpisodePlaying;
    _Bool _isEpisodeActive;
    _Bool _isEpisodeUnfinished;
    _Bool _canBeMarkedAsPlayed;
    id <SPTPodcastEpisode> _podcastEpisode;
    SPTPodcastEpisodeCachedProgress *_cachedProgress;
}

@property(retain, nonatomic) SPTPodcastEpisodeCachedProgress *cachedProgress; // @synthesize cachedProgress=_cachedProgress;
@property(nonatomic) _Bool canBeMarkedAsPlayed; // @synthesize canBeMarkedAsPlayed=_canBeMarkedAsPlayed;
@property(nonatomic) _Bool isEpisodeUnfinished; // @synthesize isEpisodeUnfinished=_isEpisodeUnfinished;
@property(nonatomic) _Bool isEpisodeActive; // @synthesize isEpisodeActive=_isEpisodeActive;
@property(nonatomic) _Bool isEpisodePlaying; // @synthesize isEpisodePlaying=_isEpisodePlaying;
@property(retain, nonatomic) id <SPTPodcastEpisode> podcastEpisode; // @synthesize podcastEpisode=_podcastEpisode;
- (void).cxx_destruct;
- (_Bool)isEpisodePlayable;
- (_Bool)isEpisodeExplicit;
- (id)podcastImageURL;
- (_Bool)supportsGranularProgressUpdates;
- (double)syncProgress;
- (long long)offlineSyncStatus;
- (double)listeningProgress;
- (id)longDescription;
- (id)currentStatusWithFormatter:(id)arg1;
- (id)podcastSubtitle;
- (id)podcastTitle;
- (id)initWithPodcastEpisode:(id)arg1 cachedProgress:(id)arg2 isEpisodePlaying:(_Bool)arg3 isEpisodeActive:(_Bool)arg4 isEpisodeUnfinished:(_Bool)arg5 canBeMarkedAsPlayed:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

