//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController<SPTFreeTierRecoverAccountSlateContentUnit>;

@protocol SPTFreeTierRecoverAccountSlateContentUnit <NSObject>
@property(nonatomic) __weak id <SPTFreeTierRecoverAccountSlateContentUnitDelegate> delegate;
- (_Bool)shouldDismiss;
- (NSString *)dismissButtonText;

@optional
- (void)slateDidDismiss;
- (void)userDidTouchUpInsideDismissButton;
- (UIViewController<SPTFreeTierRecoverAccountSlateContentUnit> *)nextViewController;
@end

