//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSString, UIBarButtonItem, UIToolbar;
@protocol SPTSignupPickerContainerViewDelegate;

@interface SPTSignupPickerContainerView : UIView <GLUEStyleable>
{
    UIView *_pickerView;
    id <SPTSignupPickerContainerViewDelegate> _delegate;
    UIToolbar *_toolbar;
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) __weak id <SPTSignupPickerContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setupConstraints;
- (id)initWithPickerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

