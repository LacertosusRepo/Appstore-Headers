//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEditFeatureContainer.h"

@class UIView, UIViewController, UIViewController<YTEditFeatureUI>, YTEditFeatureTransitionContext;

@protocol YTEditFeaturePresenter <YTEditFeatureContainer>
@property(retain, nonatomic) id <YTEditFeaturePresenterImpl> featurePresenterMixin;
- (void)didCompleteTransitionWithContext:(YTEditFeatureTransitionContext *)arg1 withStyle:(long long)arg2;
- (void)transitioningWithContext:(YTEditFeatureTransitionContext *)arg1 withStyle:(long long)arg2;
- (UIViewController *)containerViewController;
- (UIViewController<YTEditFeatureUI> *)baseViewController;

@optional
- (UIView *)containerView;
@end

