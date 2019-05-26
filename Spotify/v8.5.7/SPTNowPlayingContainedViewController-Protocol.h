//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
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
- (void)configureForOrientation:(long long)arg1;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
@end
