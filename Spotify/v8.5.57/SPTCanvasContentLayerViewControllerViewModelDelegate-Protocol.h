//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage, UIView;

@protocol SPTCanvasContentLayerViewControllerViewModelDelegate <NSObject>
- (void)hideOverlay;
- (void)showOverlay;
- (void)hideLoadingIndicator;
- (void)showLoadingIndicator;
- (void)hideAttributionView;
- (void)showAttributionView;
- (void)didLoadVideoPlayer;
- (void)willLoadVideoPlayer;
- (void)removeVideoPlayerView;
- (void)addVideoPlayerView:(UIView *)arg1;
- (void)updateArtistAvatarImage:(UIImage *)arg1 artistName:(NSString *)arg2;
- (void)updateCanvasImage:(UIImage *)arg1;
@end

