//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, SPTHubsKitViewModel;

@protocol SPTSearchRecentsViewModelBuilder <NSObject>
- (SPTHubsKitViewModel *)buildWithItems:(NSArray *)arg1 playingTrackURI:(NSURL *)arg2 playingAlbumURI:(NSURL *)arg3 allowPlayback:(_Bool)arg4;
@end
