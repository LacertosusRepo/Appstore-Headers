//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SPTInAppMessageNoteMessageView, UIPanGestureRecognizer;
@protocol SPTInAppMessageMessageOverlayViewDelegate;

@interface SPTInAppMessageNoteMessageOverlayView : UIView <UIGestureRecognizerDelegate>
{
    SPTInAppMessageNoteMessageView *_noteMessageView;
    id <SPTInAppMessageMessageOverlayViewDelegate> _delegate;
    NSLayoutConstraint *_noteViewBottomConstraint;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _draggingDownThreshold;
    NSArray *_noteMessageViewHorizontalConstraints;
    NSLayoutConstraint *_noteWidthConstraint;
    NSLayoutConstraint *_noteHeightConstraint;
    struct CGPoint _originalCenter;
}

@property(retain, nonatomic) NSLayoutConstraint *noteHeightConstraint; // @synthesize noteHeightConstraint=_noteHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *noteWidthConstraint; // @synthesize noteWidthConstraint=_noteWidthConstraint;
@property(copy, nonatomic) NSArray *noteMessageViewHorizontalConstraints; // @synthesize noteMessageViewHorizontalConstraints=_noteMessageViewHorizontalConstraints;
@property(nonatomic) double draggingDownThreshold; // @synthesize draggingDownThreshold=_draggingDownThreshold;
@property(nonatomic) struct CGPoint originalCenter; // @synthesize originalCenter=_originalCenter;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *noteViewBottomConstraint; // @synthesize noteViewBottomConstraint=_noteViewBottomConstraint;
@property(nonatomic) __weak id <SPTInAppMessageMessageOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTInAppMessageNoteMessageView *noteMessageView; // @synthesize noteMessageView=_noteMessageView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeDownGestureRecognizer:(id)arg1;
- (void)dismissNoteMessageViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentNoteMessageView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateNoteHeight:(double)arg1;
- (_Bool)noteViewHorizontalConstraintsActive;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)setupNoteMessageViewConstraints;
- (void)setupNoteMessageView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

