//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol SPTModerationWebViewControllerViewModelDelegate <NSObject>
- (void)updateNavigationButtons;
- (void)hideErrors;
- (void)showGenericErrorWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2 buttonTitle:(NSString *)arg3;
- (void)showOfflineErrorWithTitle:(NSString *)arg1 subtitle:(NSString *)arg2;
- (void)hideLoading;
- (void)showLoading;
@end

