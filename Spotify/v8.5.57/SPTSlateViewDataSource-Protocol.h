//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTSlateViewController, UIViewController;

@protocol SPTSlateViewDataSource <NSObject>
- (UIViewController *)contentUnitForSlateViewController:(SPTSlateViewController *)arg1;

@optional
- (_Bool)shouldAllowDragGesture;
- (_Bool)shouldSuppressKeyboard;
- (_Bool)shouldFullscreen;
- (double)preferredHorizontalMargin;
- (_Bool)slateViewControllerShouldDismissOnSwipe:(SPTSlateViewController *)arg1;
@end

