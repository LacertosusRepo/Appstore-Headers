//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTPlayerViewLayoutProtocol.h"

@class NSURL, YTPlayerView;

@protocol YTPlayerViewDelegate <YTPlayerViewLayoutProtocol>
- (void)playerViewDidDragDrop:(YTPlayerView *)arg1;
- (NSURL *)dragDropShareURLForPlayerView:(YTPlayerView *)arg1;
- (_Bool)isContentPanAllowedForPlayerView:(YTPlayerView *)arg1;
- (void)playerViewViewportSizeDidChange:(YTPlayerView *)arg1;
- (void)playerViewDidPinchToSmallscreen:(YTPlayerView *)arg1;
- (void)playerViewDidPinchToFullscreen:(YTPlayerView *)arg1;
@end

