//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIImageView, UIView, UIViewController;
@protocol SPTContextMenuHeader;

@protocol SPTScannablesUserInterfaceFactory <NSObject>
- (UIImageView *)createScannableImageViewForEntityURL:(NSURL *)arg1;
- (UIViewController *)provideScanViewControllerWithSourceIdentifier:(NSString *)arg1;
- (UIView<SPTContextMenuHeader> *)createContextMenuViewHeaderWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 entityURL:(NSURL *)arg3 imageURL:(NSURL *)arg4 fallbackHeader:(UIView<SPTContextMenuHeader> *)arg5;
@end
