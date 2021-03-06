//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTSlateViewController;

@protocol SPTSlateViewDelegate <NSObject>

@optional
- (void)slateViewControllerPositionChanged:(struct CGPoint)arg1;
- (void)slateViewControllerDismissed:(SPTSlateViewController *)arg1 swipeDirection:(struct CGPoint)arg2;
- (void)slateViewControllerSwiped:(SPTSlateViewController *)arg1 swipeDirection:(struct CGPoint)arg2;
- (void)slateViewControllerDismissed:(SPTSlateViewController *)arg1;
- (void)slateViewControllerSwiped:(SPTSlateViewController *)arg1;
- (void)slateViewControllerDidAppear:(SPTSlateViewController *)arg1;
- (void)slateViewControllerWillAppear:(SPTSlateViewController *)arg1;
@end

