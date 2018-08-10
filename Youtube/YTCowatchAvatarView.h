//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTImageViewContainer.h"

@class NSString, UIImage, YTImageView, YTSpinningCircularBorder;

@interface YTCowatchAvatarView : UIView <YTImageViewContainer>
{
    YTImageView *_avatarView;
    YTSpinningCircularBorder *_spinningCircularBorder;
    _Bool _isTransitioning;
    UIImage *_avatar;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIImage *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)finishByTransitioningToSyncingState;
- (void)finishByTransitioningToState:(unsigned long long)arg1;
- (void)startTransitionFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
@property(readonly, nonatomic) YTImageView *imageView;
- (id)initWithPlaceholder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

