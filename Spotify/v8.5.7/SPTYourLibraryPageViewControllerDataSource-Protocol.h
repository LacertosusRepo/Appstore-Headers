//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTYourLibraryPageViewController, UIViewController;

@protocol SPTYourLibraryPageViewControllerDataSource <NSObject>
- (UIViewController *)pageViewController:(SPTYourLibraryPageViewController *)arg1 viewControllerAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberPagesForPageViewController:(SPTYourLibraryPageViewController *)arg1;
@end
