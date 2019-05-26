//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSearchSearchBarProtocol-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;
@protocol SPTSearchSearchBarDelegate;

@interface SPTSearchFancySearchBar : UIView <UITextFieldDelegate, SPTSearchSearchBarProtocol>
{
    id <SPTSearchSearchBarDelegate> _delegate;
    UITextField *_searchTextField;
}

@property(readonly, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(nonatomic) __weak id <SPTSearchSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setShowsCancelButton:(_Bool)arg1 animated:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)becomeFirstResponder;
@property(copy, nonatomic) NSString *text;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)clearButtonSelected:(id)arg1;
- (id)makeClearButton;
- (void)setupTextField;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

