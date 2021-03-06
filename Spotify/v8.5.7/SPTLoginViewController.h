//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTLoginViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginInputAccessoryView, SPTLoginTheme, SPTLoginView, SPTLoginViewModel, SPTProgressView, UITapGestureRecognizer;
@protocol SPTPageContainer;

@interface SPTLoginViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTLoginViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginTheme *_theme;
    SPTLoginViewModel *_viewModel;
    UITapGestureRecognizer *_magicLinkTapRecognizer;
    SPTProgressView *_progressView;
    SPTLoginInputAccessoryView *_loginInputAccessoryView;
}

@property(retain, nonatomic) SPTLoginInputAccessoryView *loginInputAccessoryView; // @synthesize loginInputAccessoryView=_loginInputAccessoryView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITapGestureRecognizer *magicLinkTapRecognizer; // @synthesize magicLinkTapRecognizer=_magicLinkTapRecognizer;
@property(readonly, nonatomic) SPTLoginViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (id)inputAccessoryView;
- (id)loginButton;
- (void)hideProgressView;
- (void)showProgressView;
- (void)loginWithoutPasswordButtonTap:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewModelDidSucceedRequestMagicLink:(id)arg1;
- (void)viewModel:(id)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFailRequestMagicLinkWithError:(id)arg2;
- (void)viewModelDidStartRequestMagicLink:(id)arg1;
- (void)viewModelDidCompleteLoginWithSuccess:(id)arg1;
- (void)viewModel:(id)arg1 didCompleteLoginWithError:(id)arg2;
- (void)viewModelDidCompleteLoginWithNetworkDisabledError:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)enableLoginButtonIfNeeded;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)hideLoadingState;
- (void)showLoadingState;
- (void)login;
- (void)updateLoginFormWithUserName:(id)arg1 password:(id)arg2;
- (void)onePasswordLoginButtonTapped:(id)arg1;
- (void)userDidTouchUpInsideLoginButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginView *view; // @dynamic view;

@end

