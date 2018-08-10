//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTNGWatchCollectionViewControllerEventObserver.h"

@class UIView, UIViewController<YTWatchPlayerViewControllerDelegate>, YTNGWatchView;

@protocol YTNGWatchViewControllerProtocol <YTNGWatchCollectionViewControllerEventObserver>
- (_Bool)isPlayerAlignmentNonStandard;
- (void)setExpansionFraction:(double)arg1;
- (void)startCountdownIfEndscreenActive;
- (void)autonavCountdownDidStopWithEndscreenCancelled:(_Bool)arg1;
- (void)updateRequestNavigationList;
- (YTNGWatchView *)watchView;
- (struct CGRect)frameForPlayerView:(_Bool)arg1;
- (unsigned long long)preferredFullscreenOrientations;
- (double)watchNextViewOriginY;
- (void)setPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg1;
- (void)setFullscreen:(_Bool)arg1;
- (void)setThumbnailView:(UIView *)arg1;
@end

