//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTPodcastUIStringFormatter;

@protocol SPTPodcastEpisodeCellState <NSObject>
- (NSString *)currentStatusWithFormatter:(id <SPTPodcastUIStringFormatter>)arg1;
- (_Bool)canBeMarkedAsPlayed;
- (_Bool)isEpisodePlayable;
- (_Bool)isEpisodeExplicit;
- (_Bool)isEpisodeUnfinished;
- (_Bool)isEpisodeActive;
- (_Bool)isEpisodePlaying;
- (NSURL *)podcastImageURL;
- (_Bool)supportsGranularProgressUpdates;
- (double)syncProgress;
- (long long)offlineSyncStatus;
- (double)listeningProgress;
- (NSString *)longDescription;
- (NSString *)podcastSubtitle;
- (NSString *)podcastTitle;
@end

