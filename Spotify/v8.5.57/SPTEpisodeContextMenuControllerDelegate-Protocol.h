//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTPodcastEpisode, SPTShow;

@protocol SPTEpisodeContextMenuControllerDelegate <NSObject>
- (void)updateFollowedState:(_Bool)arg1 forShow:(id <SPTShow>)arg2;
- (void)markEpisodeAsPlayed:(id <SPTPodcastEpisode>)arg1 played:(_Bool)arg2;
- (void)toggleOfflineEpisode:(id <SPTPodcastEpisode>)arg1 completion:(void (^)(unsigned long long))arg2;
@end
