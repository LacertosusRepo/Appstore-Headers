//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController;
@protocol SPTVideoSurface;

@protocol SPTPodcastVideoViewControllerTransitionSurfaceProvider <NSObject>
- (UIView *)provideVideoSurfaceShadowViewForTransitionToViewController:(UIViewController *)arg1;
- (UIView *)provideVideoSurfaceContainerForTransitionToViewController:(UIViewController *)arg1;
- (UIView<SPTVideoSurface> *)provideVideoSurfaceForTransitionToViewController:(UIViewController *)arg1;
@end

