//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SPTLoginTheme, SPTPopupManager;

@protocol SPTDialogController <NSObject>
- (void)dismissAllPresentedPopupDialogsAndClearQueue;
- (void)showDialogWithTitle:(NSString *)arg1 message:(NSString *)arg2 buttons:(NSArray *)arg3;
- (void)showDialogWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (void)showDialogWithMessage:(NSString *)arg1;
- (id)initWithPopupManager:(SPTPopupManager *)arg1 theme:(SPTLoginTheme *)arg2;
@end

