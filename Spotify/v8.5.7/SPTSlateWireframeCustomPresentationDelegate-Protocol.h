//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTSlateViewController;

@protocol SPTSlateWireframeCustomPresentationDelegate <NSObject>

@optional
- (void)dismissSlateViewControllerInCustomMode:(SPTSlateViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)presentSlateViewControllerInCustomMode:(SPTSlateViewController *)arg1 animated:(_Bool)arg2;
@end
