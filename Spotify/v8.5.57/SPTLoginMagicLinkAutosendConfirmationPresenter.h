//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginAutosendLogger, SPTLoginOpenEmailAppController, SPTLoginSlideUpModalPresenter, SPTLoginSlideUpModalViewController, SPTLoginTheme;

@interface SPTLoginMagicLinkAutosendConfirmationPresenter : NSObject
{
    SPTLoginTheme *_theme;
    SPTLoginOpenEmailAppController *_emailAppController;
    SPTLoginAutosendLogger *_logger;
    SPTLoginSlideUpModalViewController *_controller;
    SPTLoginSlideUpModalPresenter *_modalPresenter;
}

@property(retain, nonatomic) SPTLoginSlideUpModalPresenter *modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(retain, nonatomic) SPTLoginSlideUpModalViewController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) SPTLoginAutosendLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTLoginOpenEmailAppController *emailAppController; // @synthesize emailAppController=_emailAppController;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)dismissDialog;
- (void)didTapTryAnotherPasswordButton:(id)arg1;
- (void)didTapOpenEmailButton:(id)arg1;
- (id)confirmationViewWithUser:(id)arg1;
- (void)presentAutosendConfirmationForUser:(id)arg1;
- (id)initWithTheme:(id)arg1 emailAppController:(id)arg2 logger:(id)arg3 slideupModalPresenter:(id)arg4;

@end
