//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateManager-Protocol.h"
#import "SPTSlatePrivateViewControllerDelegate-Protocol.h"
#import "SPTSlateViewDelegate-Protocol.h"

@class NSString, SPTSlatePresenterQueuedSlate, SPTSlatePrivateViewController, SPTStartupTracer;
@protocol SPTSlate, SPTSlateWireframe;

@interface SPTSlatePresenter : NSObject <SPTSlateViewDelegate, SPTSlatePrivateViewControllerDelegate, SPTSlateManager>
{
    _Bool _beingDismissed;
    SPTSlatePrivateViewController *_currentSlateViewController;
    id <SPTSlateWireframe> _wireframe;
    SPTStartupTracer *_startupTracer;
    id <SPTSlate> _presentedSlate;
    SPTSlatePresenterQueuedSlate *_queuedSlate;
}

@property(nonatomic, getter=isBeingDismissed) _Bool beingDismissed; // @synthesize beingDismissed=_beingDismissed;
@property(retain, nonatomic) SPTSlatePresenterQueuedSlate *queuedSlate; // @synthesize queuedSlate=_queuedSlate;
@property(retain, nonatomic) id <SPTSlate> presentedSlate; // @synthesize presentedSlate=_presentedSlate;
@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) id <SPTSlateWireframe> wireframe; // @synthesize wireframe=_wireframe;
@property(retain, nonatomic) SPTSlatePrivateViewController *currentSlateViewController; // @synthesize currentSlateViewController=_currentSlateViewController;
- (void).cxx_destruct;
- (void)immediatelyPresentSlate:(id)arg1 animated:(_Bool)arg2;
- (void)accessoryButtonDidTap:(id)arg1;
- (void)backgroundViewDidTap:(id)arg1;
- (_Bool)slateViewControllerShouldDismissOnSwipe:(id)arg1;
- (void)slateViewControllerSwiped:(id)arg1;
- (void)showDismissLabel:(_Bool)arg1;
- (void)hideDismissLabel:(_Bool)arg1;
- (void)slateDismissed:(id)arg1 animated:(_Bool)arg2;
- (void)dismissSlate:(id)arg1 animated:(_Bool)arg2;
- (void)presentSlate:(id)arg1 animated:(_Bool)arg2;
- (id)initWithWireframe:(id)arg1 startupTracer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

