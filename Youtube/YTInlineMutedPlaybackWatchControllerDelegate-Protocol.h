//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class YTInlineMutedPlaybackWatchController;

@protocol YTInlineMutedPlaybackWatchControllerDelegate <NSObject>
- (void)handleReverseInception;
- (void)handleFinishedPlayback;
- (void)watchController:(YTInlineMutedPlaybackWatchController *)arg1 playerStateDidChange:(long long)arg2;
@end

