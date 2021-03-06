//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMViewController, UIView;

@interface IMModalWindow : NSObject
{
    IMViewController *controller;
    IMModalWindow *previous;
    UIView *tapProtect;
    UIView *view;
    _Bool keyboardShown;
    _Bool visible;
    double width;
    double height;
    double keyboardHeight;
    _Bool supportsIPhoneLandscape;
    int cornerRadius;
    CDUnknownBlockType veilTappedAction;
    double _animationDuration;
}

+ (id)newModalWindowWithController:(id)arg1;
+ (_Bool)visible;
@property double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) _Bool supportsIPhoneLandscape; // @synthesize supportsIPhoneLandscape;
@property int cornerRadius; // @synthesize cornerRadius;
@property(copy, nonatomic) CDUnknownBlockType veilTappedAction; // @synthesize veilTappedAction;
- (void).cxx_destruct;
- (void)setWidth:(int)arg1 height:(int)arg2 animated:(_Bool)arg3;
- (void)setWidth:(int)arg1 height:(int)arg2;
- (void)dealloc;
- (void)close;
- (void)show;
- (struct CGRect)getTapProtectBounds;
- (struct CGRect)getViewBounds;
- (struct CGRect)getContainerFrame;
- (void)createVeil:(id)arg1;
- (void)veilTapped:(id)arg1;
- (void)createViewHierarchy:(id)arg1;
- (void)orientationDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (struct CGPoint)getCenterPoint;
- (id)initWithController:(id)arg1;

@end

