//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTBaseInteractionDelegate.h"
#import "YTBaseInteractionObserver.h"

@class UIPanGestureRecognizer, YTNGWatchCollectionViewController;

@protocol YTNGWatchLayerViewAnimationDelegate <YTBaseInteractionDelegate, YTBaseInteractionObserver>
- (double)flexiblePlayerHeight;
- (double)statusBarHeight;
- (YTNGWatchCollectionViewController *)watchCollectionViewController;
- (long long)currentWatchViewLayout;
- (void)didAddWatchFlowCollapseRecognizer:(UIPanGestureRecognizer *)arg1;
- (void)didCollapseWatchFlowWithGestureType:(int)arg1;
- (void)willCollapseWatchFlow;
- (void)didExpandWatchFlowWithGestureType:(int)arg1;
- (void)willExpandWatchFlow;
@end
