//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL;

@protocol SPTFreeTierCollectionSkippedRecommendedTracks <NSObject>
@property(copy, nonatomic) NSArray *skippedTracks;
- (void)resetSkippedTracks;
- (void)removeSkippedRecommendedTrackURL:(NSURL *)arg1;
- (void)addSkippedRecommendedTrackURL:(NSURL *)arg1;
@end

