//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle, SPTPhoneNumberSignupPhoneNumberEntryTableViewCell, UIScrollView, UITableView, UITableViewCell, UITextField;
@protocol SPTPhoneNumberSignupPhoneNumberEntryContainerViewDelegate;

@interface SPTPhoneNumberSignupPhoneNumberEntryContainerView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isCountrySelectionEnabled;
    id <SPTPhoneNumberSignupPhoneNumberEntryContainerViewDelegate> _delegate;
    UIScrollView *_scrollView;
    GLUEGradientView *_backgroundGradientView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    UITableView *_tableView;
    GLUEButton *_nextButton;
    SPTPhoneNumberSignupPhoneNumberEntryTableViewCell *_numberEntryTableViewCell;
    UITableViewCell *_countrySelectorCell;
    SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle *_style;
    NSLayoutConstraint *_tableViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // @synthesize tableViewHeightConstraint=_tableViewHeightConstraint;
@property(readonly, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryContainerViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UITableViewCell *countrySelectorCell; // @synthesize countrySelectorCell=_countrySelectorCell;
@property(retain, nonatomic) SPTPhoneNumberSignupPhoneNumberEntryTableViewCell *numberEntryTableViewCell; // @synthesize numberEntryTableViewCell=_numberEntryTableViewCell;
@property(retain, nonatomic) GLUEButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) __weak id <SPTPhoneNumberSignupPhoneNumberEntryContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isCountrySelectionEnabled; // @synthesize isCountrySelectionEnabled=_isCountrySelectionEnabled;
- (void).cxx_destruct;
- (void)dealloc;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)subscribeToKeyboardNotifications;
- (double)tableViewHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) UITextField *phoneNumberTextField;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setPhoneNumberTextFieldPlaceholder:(id)arg1;
- (void)setCallingCodeText:(id)arg1;
- (void)setCountrySelectorText:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupTableViewHeightConstraints;
- (void)setupConstraints;
- (void)setupTextFieldDelegate;
- (void)setupCountrySelectorTableViewCell;
- (void)setupNumberEntryTableViewCell;
- (void)setupTableView;
- (void)setupScrollView;
- (void)setupSubtitleLabel;
- (void)setupNextButton;
- (void)setupTitleLabel;
- (id)initWithTheme:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

