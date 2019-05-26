//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingFeedbackManager-Protocol.h"

@class NSString, NSURL, SPTPlayerTrack;
@protocol SPTCollectionPlatformTestManager;

@protocol SPTDailyMixManager <SPTNowPlayingFeedbackManager>
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager;
- (void)negativeArtistFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)negativeSongFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)positiveSongFeedbackForTrack:(SPTPlayerTrack *)arg1 contextURL:(NSURL *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (long long)feedbackForTrackURL:(NSURL *)arg1;
- (void)startDecoratedDailyMixWithURL:(NSURL *)arg1 startedFromElement:(NSString *)arg2 atIndex:(unsigned long long)arg3 completion:(void (^)(NSError *))arg4;
- (void)startDailyMixWithURL:(NSURL *)arg1 startedFromElement:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
