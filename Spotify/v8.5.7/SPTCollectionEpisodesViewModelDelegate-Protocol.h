//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTCollectionEpisodesViewModel;

@protocol SPTCollectionEpisodesViewModelDelegate <NSObject>
- (void)collectionEpisodesViewModelDidUpdatePlaybackRestrictions:(SPTCollectionEpisodesViewModel *)arg1;
- (void)viewModelDidUpdatePlayingEpisode:(SPTCollectionEpisodesViewModel *)arg1;
- (void)viewModel:(SPTCollectionEpisodesViewModel *)arg1 episodesDidFinishLoadingWithError:(NSError *)arg2;
@end

