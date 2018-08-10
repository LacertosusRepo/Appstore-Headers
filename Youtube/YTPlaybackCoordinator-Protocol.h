//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, YTPlayerView;

@protocol YTPlaybackCoordinator <NSObject>
@property(readonly, nonatomic, getter=isInlinePlaybackSupported) _Bool inlinePlaybackSupported;
- (void)removePlaybackCoordinatorObserver:(id <YTPlaybackCoordinatorObserver>)arg1;
- (void)addPlaybackCoordinatorObserver:(id <YTPlaybackCoordinatorObserver>)arg1;
- (id <YTPlaybackController>)newControllerWithParentResponder:(id <YTResponder>)arg1 overlayFactory:(id <YTPlayerOverlayFactory>)arg2 playerView:(YTPlayerView *)arg3 parentViewController:(UIViewController *)arg4;
@end

