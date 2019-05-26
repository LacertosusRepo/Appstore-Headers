//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginRecoverAccountViewModelDelegate-Protocol.h"
#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginRecoverAccountView, SPTLoginRecoverAccountViewModel, UITapGestureRecognizer;
@protocol SPTPageContainer;

@interface SPTLoginRecoverAccountViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTLoginRecoverAccountViewModelDelegate, UITextFieldDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginRecoverAccountViewModel *_viewModel;
    UITapGestureRecognizer *_helpTapRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *helpTapRecognizer; // @synthesize helpTapRecognizer=_helpTapRecognizer;
@property(readonly, nonatomic) SPTLoginRecoverAccountViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)showLoadingState:(_Bool)arg1;
- (void)viewModel:(id)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModel:(id)arg1 didFinishLoadingDataWithError:(id)arg2;
- (void)viewModelDidFinishLoadingDataWithSuccess:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (unsigned long long)preferredNavigationBarState;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)userDidTapStillNeedHelpLabel:(id)arg1;
- (void)userDidTouchUpInsideSendButton:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginRecoverAccountView *view; // @dynamic view;

@end

