//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol SPTAlertQueuePresenter <NSObject>
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

