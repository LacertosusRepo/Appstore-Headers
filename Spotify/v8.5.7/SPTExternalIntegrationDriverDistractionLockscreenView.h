//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSArray, NSString, SPTExternalIntegrationDriverDistractionLockscreenDismissalView, SPTExternalIntegrationDriverDistractionLockscreenLogotypesView, UIStackView;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTExternalIntegrationDriverDistractionLockscreenView : UIView <SPTThemableView>
{
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    SPTExternalIntegrationDriverDistractionLockscreenLogotypesView *_logotypesView;
    SPTExternalIntegrationDriverDistractionLockscreenDismissalView *_dismissalView;
    UIStackView *_containerView;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(readonly, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) SPTExternalIntegrationDriverDistractionLockscreenDismissalView *dismissalView; // @synthesize dismissalView=_dismissalView;
@property(readonly, nonatomic) SPTExternalIntegrationDriverDistractionLockscreenLogotypesView *logotypesView; // @synthesize logotypesView=_logotypesView;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (id)createLayout;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1 dismissible:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
