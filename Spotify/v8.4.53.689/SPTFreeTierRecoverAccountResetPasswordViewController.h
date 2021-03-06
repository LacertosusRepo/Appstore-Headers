//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierRecoverAccountResetPasswordViewModelDelegate.h"
#import "SPTFreeTierRecoverAccountSlateContentUnit.h"
#import "SPTPageController.h"
#import "UITextFieldDelegate.h"

@class NSString, NSURL, SPTFreeTierRecoverAccountFormView, SPTFreeTierRecoverAccountResetPasswordViewModel;

@interface SPTFreeTierRecoverAccountResetPasswordViewController : UIViewController <UITextFieldDelegate, SPTFreeTierRecoverAccountResetPasswordViewModelDelegate, SPTPageController, SPTFreeTierRecoverAccountSlateContentUnit>
{
    id <SPTFreeTierRecoverAccountSlateContentUnitDelegate> delegate;
    SPTFreeTierRecoverAccountFormView *_passwordRecoverView;
    SPTFreeTierRecoverAccountResetPasswordViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTFreeTierRecoverAccountResetPasswordViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTFreeTierRecoverAccountFormView *passwordRecoverView; // @synthesize passwordRecoverView=_passwordRecoverView;
@property(nonatomic) __weak id <SPTFreeTierRecoverAccountSlateContentUnitDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)constrainView:(id)arg1 insideView:(id)arg2;
- (void)showLoadingState:(_Bool)arg1;
- (id)nextViewController;
- (_Bool)shouldDismiss;
- (id)dismissButtonText;
- (void)viewModel:(id)arg1 didFinishLoadingDataWithError:(id)arg2;
- (void)viewModelDidFinishLoadingDataWithSuccess:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)userDidTouchUpInsideDismissButton;
- (void)userDidTapSubmitButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

