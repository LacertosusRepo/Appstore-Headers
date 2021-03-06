//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTImageBlurView.h"

@class UIView;

@interface SPTUIBlurView : SPTImageBlurView
{
    _Bool _respondsToBlurUpdateNotifications;
    long long _blurType;
}

+ (id)blurViewForUIWithType:(long long)arg1 frame:(struct CGRect)arg2;
@property(nonatomic, getter=isRespondingToBlurUpdateNotifications) _Bool respondsToBlurUpdateNotifications; // @synthesize respondsToBlurUpdateNotifications=_respondsToBlurUpdateNotifications;
@property(nonatomic) long long blurType; // @synthesize blurType=_blurType;
- (void)blurNeedsUpdate;
- (void)configureForBlurType;
@property(nonatomic) __weak UIView *underlyingView;
- (void)setMaximumBlurRadius:(double)arg1;
- (double)maximumBlurRadius;
- (void)updateNotificationObservation;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithType:(long long)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

