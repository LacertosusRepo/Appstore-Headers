//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol SPTNowPlayingContainingViewController;

@protocol SPTNowPlayingContainedViewController <NSObject>
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;

@optional
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
@end
