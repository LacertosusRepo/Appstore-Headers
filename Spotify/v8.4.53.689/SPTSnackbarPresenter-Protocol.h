//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTSnackbarPresenter <NSObject>
- (void)cancelAllSnackbars;
- (void)presentSnackbarWithText:(NSString *)arg1 buttonIcon:(long long)arg2 iconSize:(struct CGSize)arg3 actionBlock:(void (^)(void))arg4;
- (void)presentSnackbarWithText:(NSString *)arg1 buttonIcon:(long long)arg2 actionBlock:(void (^)(void))arg3;
- (void)presentSnackbarWithText:(NSString *)arg1 buttonTitle:(NSString *)arg2 actionBlock:(void (^)(void))arg3;
- (void)presentSnackbarWithText:(NSString *)arg1;
@end
