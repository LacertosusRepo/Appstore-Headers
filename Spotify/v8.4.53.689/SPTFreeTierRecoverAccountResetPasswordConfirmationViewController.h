//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTFreeTierRecoverAccountSlateContentUnit.h"
#import "SPTPageController.h"

@class NSString, NSURL, SPTFreeTierRecoverAccountResetPasswordConfirmationView, SPTFreeTierRecoverAccountResetPasswordConfirmationViewModel;

@interface SPTFreeTierRecoverAccountResetPasswordConfirmationViewController : UIViewController <SPTPageController, SPTFreeTierRecoverAccountSlateContentUnit>
{
    id <SPTFreeTierRecoverAccountSlateContentUnitDelegate> delegate;
    SPTFreeTierRecoverAccountResetPasswordConfirmationViewModel *_viewModel;
    SPTFreeTierRecoverAccountResetPasswordConfirmationView *_confirmationView;
}

@property(retain, nonatomic) SPTFreeTierRecoverAccountResetPasswordConfirmationView *confirmationView; // @synthesize confirmationView=_confirmationView;
@property(readonly, nonatomic) SPTFreeTierRecoverAccountResetPasswordConfirmationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <SPTFreeTierRecoverAccountSlateContentUnitDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (_Bool)shouldDismiss;
- (id)dismissButtonText;
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

