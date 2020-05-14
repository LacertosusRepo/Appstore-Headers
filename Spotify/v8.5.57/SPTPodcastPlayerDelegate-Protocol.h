//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTPodcastPlayer;

@protocol SPTPodcastPlayerDelegate <NSObject>
- (void)podcastPlayerStateDidChange:(id <SPTPodcastPlayer>)arg1;
- (void)podcastPlayer:(id <SPTPodcastPlayer>)arg1 didChangePlayingTrackURL:(NSURL *)arg2;

@optional
- (void)podcastPlayer:(id <SPTPodcastPlayer>)arg1 didUpdateProgressForTrackURL:(NSURL *)arg2;
- (double)podcastPlayer:(id <SPTPodcastPlayer>)arg1 updateProgressIntervalForTrackURL:(NSURL *)arg2;
@end

