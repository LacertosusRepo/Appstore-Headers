//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTYourLibraryPagesViewController, UIViewController;

@protocol SPTYourLibraryPagesViewControllerDelegate <NSObject>
- (void)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 didChangeActiveViewController:(UIViewController *)arg2;
- (void)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 fromSection:(double)arg2 toSection:(double)arg3 fromPage:(double)arg4 toPage:(double)arg5;
@end

