//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIView<SPTContextMenuHeader>, UIViewController;

@protocol SPTScannablesUserInterfaceFactory <NSObject>
- (UIViewController *)provideScanViewContoller;
- (UIView<SPTContextMenuHeader> *)createContextMenuViewHeaderWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 entityURL:(NSURL *)arg3 fallbackHeader:(UIView<SPTContextMenuHeader> *)arg4;
@end
