//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton, UIView, UIViewController;
@protocol SPTNowPlayingAuxiliaryActionsHandlerObserver;

@protocol SPTNowPlayingAuxiliaryActionsHandler <NSObject>
@property(readonly, nonatomic) _Bool isHeartActionAllowed;
@property(readonly, nonatomic) _Bool isBanActionAllowed;
@property(readonly, nonatomic) _Bool isCurrentTrackInCollection;
@property(readonly, nonatomic) _Bool isCurrentTrackBanned;
- (void)presentSleepTimerMenuFromView:(UIButton *)arg1 inViewController:(UIViewController *)arg2;
- (void)goToNowPlayingView:(UIButton *)arg1;
- (void)goToQueue:(UIButton *)arg1;
- (void)showEntityPage:(UIButton *)arg1;
- (void)presentContextMenuInViewController:(UIViewController *)arg1 sender:(UIButton *)arg2;
- (void)minimizePlayingView:(UIButton *)arg1;
- (void)presentShareMenu:(UIButton *)arg1;
- (void)presentConnectDevicePicker:(id)arg1;
- (void)presentSpeedControlMenuFromView:(UIView *)arg1 inViewController:(UIViewController *)arg2;
- (void)toggleTrackBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleTrackBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)toggleBanStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)toggleCollectionStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2 withConfirmation:(_Bool)arg3;
- (void)toggleCollectionStateFromViewController:(UIViewController *)arg1 andActionControl:(UIButton *)arg2;
- (void)removeObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
- (void)addObserver:(id <SPTNowPlayingAuxiliaryActionsHandlerObserver>)arg1;
@end

