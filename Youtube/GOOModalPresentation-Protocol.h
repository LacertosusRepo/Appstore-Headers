//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol GOOModalPresentation <NSObject>
- (double)hideAnimationDuration;
- (double)showAnimationDuration;
- (_Bool)shouldDimBackground;
- (void)revealDialog;
- (void)dismissDialog:(_Bool)arg1;
- (void)reposition;
- (void)dismissWithCancelAction:(_Bool)arg1;
- (void)dismiss;
- (void)show;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@optional
@property(nonatomic) double backgroundDimAlpha;
@property(nonatomic, getter=shouldPostScreenChangeNotificationOnDismiss) _Bool postScreenChangeNotificationOnDismiss;
@property(nonatomic) __weak UIView *viewToReceiveVoiceOverFocusAfterDismissal;
@end

