//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UINavigationController, UIScreenEdgePanGestureRecognizer;

@interface SPTSignupInteractiveTransition : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    _Bool _interactive;
    _Bool _finishInteractiveTransition;
    UIScreenEdgePanGestureRecognizer *_edgePanGestureRecognizer;
    UINavigationController *_navigationController;
}

@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic, getter=shouldFinishInteractiveTransition) _Bool finishInteractiveTransition; // @synthesize finishInteractiveTransition=_finishInteractiveTransition;
@property(retain, nonatomic) UIScreenEdgePanGestureRecognizer *edgePanGestureRecognizer; // @synthesize edgePanGestureRecognizer=_edgePanGestureRecognizer;
@property(nonatomic, getter=isInteractive) _Bool interactive; // @synthesize interactive=_interactive;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleEdgePanGestureRecognizer:(id)arg1;
- (double)gestureProgressFromGestureRecognizer:(id)arg1;
- (void)setupEdgePanGestureRecognizerInView:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

