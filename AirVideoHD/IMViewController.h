//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMViewControllerTransitionNotifications-Protocol.h"

@class IMLayoutGuide, NSString, UIView;

@interface IMViewController : NSObject <IMViewControllerTransitionNotifications>
{
    UIView *view;
    NSString *nibName;
    int currentState;
    long long rotatingToOrientation;
    _Bool viewDidLoadCalled;
    _Bool _preventLayoutSubviews;
    IMViewController *parent;
}

+ (void)transitionFrom:(id)arg1 to:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 preAnimation:(CDUnknownBlockType)arg5 animations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 callNotifications:(_Bool)arg8;
+ (void)transitionFrom:(id)arg1 to:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6 callNotifications:(_Bool)arg7;
+ (void)transitionFrom:(id)arg1 to:(id)arg2 duration:(double)arg3 options:(unsigned long long)arg4 animations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
+ (id)controllerFromNib;
@property(nonatomic) _Bool preventLayoutSubviews; // @synthesize preventLayoutSubviews=_preventLayoutSubviews;
@property(nonatomic) __weak IMViewController *parent; // @synthesize parent;
@property int currentState; // @synthesize currentState;
- (void).cxx_destruct;
- (_Bool)isIPhone;
- (_Bool)isIPad;
- (_Bool)isLandscape;
- (_Bool)isPortrait;
- (long long)interfaceOrientation;
- (void)didReceiveMemoryWarning;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)endOrientationRotation;
- (void)beginOrientationRotation:(long long)arg1;
- (_Bool)rotationAnimationInProgress;
- (_Bool)automaticallyAdjustsScrollViewInsets;
@property(readonly, retain, nonatomic) IMLayoutGuide *bottomLayoutGuide;
@property(readonly, retain, nonatomic) IMLayoutGuide *topLayoutGuide;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)adjustScrollViewInsets;
- (void)didEndDisappearanceTransition:(id)arg1;
- (void)willBeginDisappearanceTransition:(id)arg1;
- (void)didEndAppearanceTransition:(id)arg1;
- (void)willBeginAppearanceTransition:(id)arg1;
- (id)forwardEventControllers;
- (_Bool)isViewLoaded;
- (void)viewDidUnload;
- (void)unloadView;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithNib:(id)arg1;
- (void)initialize;
- (id)init;
@property(retain, nonatomic) UIView *view;
- (void)setController:(id)arg1 forView:(id)arg2;
- (void)showInModalWindow;
- (id)showAttachedToView:(id)arg1 withContentSize:(struct CGSize)arg2;

@end

