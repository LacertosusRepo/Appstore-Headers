//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSignupBirthDateViewModelDelegate-Protocol.h"
#import "SPTSignupPickerContainerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginTheme, SPTSignupAnimatedTransitioning, SPTSignupBirthDateViewModel, SPTSignupPickerContainerView, SPTSignupSingleInputFieldView;
@protocol SPTPageContainer;

@interface SPTSignupBirthDateViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTSignupPickerContainerViewDelegate, UITextFieldDelegate, SPTSignupBirthDateViewModelDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTSignupBirthDateViewModel *_viewModel;
    SPTSignupPickerContainerView *_datePickerView;
    SPTSignupAnimatedTransitioning *_animatedTransitioning;
    SPTLoginTheme *_theme;
}

@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSignupAnimatedTransitioning *animatedTransitioning; // @synthesize animatedTransitioning=_animatedTransitioning;
@property(retain, nonatomic) SPTSignupPickerContainerView *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) SPTSignupBirthDateViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPopOperationToViewController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPushOperationFromViewController:(id)arg2;
- (void)viewModelDidBeginValidation:(id)arg1;
- (void)viewModel:(id)arg1 didFinishValidationWithError:(id)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)pickerViewDidComplete:(id)arg1;
- (void)userDidTouchUpInsideNextButton:(id)arg1;
- (void)userDidChangePickerViewValue:(id)arg1;
- (id)textFromDate:(id)arg1;
- (void)setTextFieldText;
- (id)setupDatePicker;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
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
@property(retain, nonatomic) SPTSignupSingleInputFieldView *view; // @dynamic view;

@end

