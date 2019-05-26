//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSCache, NSURL, SPTPodcastEpisodeCachedProgress;

@protocol SPTPodcastEpisodeProgressPolling <NSObject>
@property(readonly, nonatomic) NSCache *progressCache;
- (SPTPodcastEpisodeCachedProgress *)cachedProgressForEpisode:(NSURL *)arg1;
- (void)updateCurrentProgress:(double)arg1 position:(double)arg2 duration:(double)arg3 forEpisode:(NSURL *)arg4;
@end
