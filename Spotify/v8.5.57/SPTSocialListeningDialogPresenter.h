//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPopupManager, SPTSocialListeningGLUETheme, SPTSocialListeningLoggerImplementation;
@protocol SPTSocialListeningDialogPresenterDelegate, SPTSocialListeningTestManager;

@interface SPTSocialListeningDialogPresenter : NSObject
{
    id <SPTSocialListeningDialogPresenterDelegate> _delegate;
    SPTPopupManager *_popupManager;
    SPTSocialListeningGLUETheme *_theme;
    SPTSocialListeningLoggerImplementation *_logger;
    id <SPTSocialListeningTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTSocialListeningLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(nonatomic) __weak id <SPTSocialListeningDialogPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentFreeUserErrorJoinDialog;
- (void)presentSessionFullDialog;
- (void)presentSessionDeletedDialogWhenHostLeaves:(id)arg1;
- (void)confirmDeleteSessionTapped;
- (void)presentConfirmDeleteSessionDialogFromScreen:(unsigned long long)arg1;
- (id)initWithTheme:(id)arg1 popupManager:(id)arg2 logger:(id)arg3 testManager:(id)arg4;

@end

