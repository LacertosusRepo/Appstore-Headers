//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, YTCowatchVideoResolver, YTPlaybackData;

@protocol YTCowatchVideoResolverDelegate <NSObject>
- (void)resetConsecutiveFailedPlaybacksForVideoResolver:(YTCowatchVideoResolver *)arg1;
- (void)videoResolver:(YTCowatchVideoResolver *)arg1 didError:(NSError *)arg2;
- (void)videoResolver:(YTCowatchVideoResolver *)arg1 didResolveVideoWithPlaybackData:(YTPlaybackData *)arg2 reason:(long long)arg3;
- (int)playerVisibilityForVideoResolver:(YTCowatchVideoResolver *)arg1;
- (_Bool)isExternalPlaybackActiveForVideoResolver:(YTCowatchVideoResolver *)arg1;
@end

