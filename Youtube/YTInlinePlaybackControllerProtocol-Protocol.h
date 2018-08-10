//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponder.h"

@class NSString, UIView, YTICommand;

@protocol YTInlinePlaybackControllerProtocol <YTResponder>
@property(readonly, nonatomic) int playbackControllerState;
@property(readonly, nonatomic, getter=isCurrentVideoVertical) _Bool currentVideoVertical;
@property(nonatomic) __weak id <YTInlinePlaybackControllerDelegate> delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder;
- (YTICommand *)currentWatchEndpointForVideoId:(NSString *)arg1;
- (YTICommand *)resignAndStopPlayback;
- (void)willIncept;
- (void)didTransitionToSmallScreen;
- (void)willTransitionToSmallScreen;
- (void)didTransitionToFullScreen;
- (void)willTransitionToFullScreen;
- (void)playNavigationEndpoint:(YTICommand *)arg1 withThumbnailView:(UIView *)arg2;
@end
