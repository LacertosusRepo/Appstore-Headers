//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTCollectionEpisodesViewModel;

@protocol SPTCollectionEpisodesViewModelDelegate <NSObject>
- (void)collectionEpisodesViewModelDidUpdatePlaybackRestrictions:(SPTCollectionEpisodesViewModel *)arg1;
- (void)viewModelDidUpdatePlayingEpisode:(SPTCollectionEpisodesViewModel *)arg1;
- (void)viewModel:(SPTCollectionEpisodesViewModel *)arg1 episodesDidFinishLoadingWithError:(NSError *)arg2;
@end

