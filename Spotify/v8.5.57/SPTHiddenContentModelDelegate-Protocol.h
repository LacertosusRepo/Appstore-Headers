//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;
@protocol SPTHiddenContentModel;

@protocol SPTHiddenContentModelDelegate <NSObject>
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didFailToLoadArtistsWithError:(NSError *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didLoadArtists:(NSArray *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didFailToLoadTracksWithError:(NSError *)arg2;
- (void)hiddenContentModel:(id <SPTHiddenContentModel>)arg1 didLoadTracks:(NSArray *)arg2;
@end
