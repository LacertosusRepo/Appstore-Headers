//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTPodcastEpisode;

@protocol SPTEpisodeContextMenuControllerDelegate <NSObject>
- (void)markEpisodeAsPlayed:(id <SPTPodcastEpisode>)arg1;
- (void)offlineEpisode:(id <SPTPodcastEpisode>)arg1 offline:(_Bool)arg2;
@end
