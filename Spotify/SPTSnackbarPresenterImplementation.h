//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEThemeObserver.h"
#import "SPTSnackbarAnimationViewActionHanderDelegate.h"
#import "SPTSnackbarPresenter.h"

@class NSMutableArray, NSString, NSTimer, SPTSnackbarTheme, SPTSnackbarViewPresenter, UISwipeGestureRecognizer, UIView;

@interface SPTSnackbarPresenterImplementation : NSObject <GLUEThemeObserver, SPTSnackbarPresenter, SPTSnackbarAnimationViewActionHanderDelegate>
{
    _Bool _isPresentationInProgress;
    NSMutableArray *_modelQueue;
    SPTSnackbarViewPresenter *_viewPresenter;
    SPTSnackbarTheme *_theme;
    NSTimer *_presentationTimer;
    UIView *_containerView;
    UISwipeGestureRecognizer *_swipeRecognizer;
}

@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRecognizer; // @synthesize swipeRecognizer=_swipeRecognizer;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSTimer *presentationTimer; // @synthesize presentationTimer=_presentationTimer;
@property(retain, nonatomic) SPTSnackbarTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSnackbarViewPresenter *viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(nonatomic) _Bool isPresentationInProgress; // @synthesize isPresentationInProgress=_isPresentationInProgress;
@property(retain, nonatomic) NSMutableArray *modelQueue; // @synthesize modelQueue=_modelQueue;
- (void).cxx_destruct;
- (id)styleForModelType:(unsigned long long)arg1 withTheme:(id)arg2;
- (void)themeUpdated:(id)arg1;
- (void)userDidSwipeSnackbar:(id)arg1;
- (_Bool)animationView:(id)arg1 shouldHandleTouchAtPoint:(struct CGPoint)arg2;
- (void)completeSnackbarPresentation;
- (void)snackbarDidEndPresentation:(id)arg1;
- (void)showNextSnackbarInQueue;
- (void)queueSnackbarForViewModel:(id)arg1;
- (void)cancelAllSnackbars;
- (void)presentSnackbarWithText:(id)arg1 buttonIcon:(long long)arg2 iconSize:(struct CGSize)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)presentSnackbarWithText:(id)arg1 buttonIcon:(long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)presentSnackbarWithText:(id)arg1 buttonTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)presentSnackbarWithText:(id)arg1;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 containerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
