//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTVideoPlaybackSession;

@protocol SPTVideoPlaybackSessionDelegate <NSObject>
- (void)videoPlaybackSession:(SPTVideoPlaybackSession *)arg1 didPlayToTime:(CDStruct_1b6d18a9)arg2;
- (void)videoPlaybackSessionDidFinish:(SPTVideoPlaybackSession *)arg1;
- (void)videoPlaybackSession:(SPTVideoPlaybackSession *)arg1 didChangeDuration:(double)arg2;
- (void)videoPlaybackSessionDidStart:(SPTVideoPlaybackSession *)arg1;
@end

