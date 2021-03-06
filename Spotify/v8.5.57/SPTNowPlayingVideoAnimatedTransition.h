//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, UIView, UIWindow;

@interface SPTNowPlayingVideoAnimatedTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    UIView *_screenshotView;
    UIWindow *_screenshotWindow;
}

@property(readonly, nonatomic) UIWindow *screenshotWindow; // @synthesize screenshotWindow=_screenshotWindow;
@property(readonly, nonatomic) UIView *screenshotView; // @synthesize screenshotView=_screenshotView;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;
- (id)initWithPresenting:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

