//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView;
@protocol SPTPodcastVideoViewControllerTransitionDelegate, SPTVideoSurface;

@interface SPTPodcastVideoViewControllerTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _navigationControllerOperation;
    id <SPTPodcastVideoViewControllerTransitionDelegate> _delegate;
    UIView<SPTVideoSurface> *_originVideoSurface;
    UIView *_originVideoSurfaceContainer;
    UIView<SPTVideoSurface> *_targetVideoSurface;
    UIView *_targetVideoSurfaceContainer;
    UIView *_transitionView;
    struct CGRect _targetVideoSurfaceFrame;
}

@property(readonly, nonatomic) UIView *transitionView; // @synthesize transitionView=_transitionView;
@property(readonly, nonatomic) struct CGRect targetVideoSurfaceFrame; // @synthesize targetVideoSurfaceFrame=_targetVideoSurfaceFrame;
@property(readonly, nonatomic) UIView *targetVideoSurfaceContainer; // @synthesize targetVideoSurfaceContainer=_targetVideoSurfaceContainer;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *targetVideoSurface; // @synthesize targetVideoSurface=_targetVideoSurface;
@property(readonly, nonatomic) UIView *originVideoSurfaceContainer; // @synthesize originVideoSurfaceContainer=_originVideoSurfaceContainer;
@property(readonly, nonatomic) UIView<SPTVideoSurface> *originVideoSurface; // @synthesize originVideoSurface=_originVideoSurface;
@property(nonatomic) __weak id <SPTPodcastVideoViewControllerTransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long navigationControllerOperation; // @synthesize navigationControllerOperation=_navigationControllerOperation;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)createTransitionViewUsingVideoSurfaceUsingManager:(id)arg1 mimickingSurface:(id)arg2 shadowView:(id)arg3;
- (id)initWithNavigationControllerPopOperationAndOriginVideoSurface:(id)arg1 originVideoSurfaceContainer:(id)arg2 targetVideoSurface:(id)arg3 targetVideoSurfaceContainer:(id)arg4 transitionVideoSurfaceShadowView:(id)arg5 videoSurfaceManager:(id)arg6;
- (id)initWithNavigationControllerPushOperationAndOriginVideoSurface:(id)arg1 originVideoSurfaceContainer:(id)arg2 targetVideoSurfaceFrame:(struct CGRect)arg3 transitionVideoSurfaceShadowView:(id)arg4 videoSurfaceManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
