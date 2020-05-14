//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SPTPhoneNumberSignupSearchBarStyle, UIImageView, UITextField;
@protocol SPTPhoneNumberSignupSearchBarDelegate;

@interface SPTPhoneNumberSignupSearchBar : UIView <UITextFieldDelegate, GLUEStyleable>
{
    id <SPTPhoneNumberSignupSearchBarDelegate> _delegate;
    UITextField *_textField;
    UIImageView *_searchIcon;
    UIView *_backgroundView;
    SPTPhoneNumberSignupSearchBarStyle *_style;
}

@property(retain, nonatomic) SPTPhoneNumberSignupSearchBarStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak id <SPTPhoneNumberSignupSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setTextFieldAccessibiltiyIdentifier:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setPlaceHolderText:(id)arg1;
- (void)setupSearchIcon;
- (void)setupTextField;
- (void)setupBackgroundView;
- (void)setupViewForConstraints;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

