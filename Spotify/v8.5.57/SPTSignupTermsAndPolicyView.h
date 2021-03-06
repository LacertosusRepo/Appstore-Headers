//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSArray, NSString, UITextView;
@protocol UITextViewDelegate;

@interface SPTSignupTermsAndPolicyView : UIView <GLUEStyleable>
{
    id <UITextViewDelegate> _delegate;
    UITextView *_textView;
    NSArray *_termsViewHorizontalMargin;
}

@property(retain, nonatomic) NSArray *termsViewHorizontalMargin; // @synthesize termsViewHorizontalMargin=_termsViewHorizontalMargin;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <UITextViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)setAttributedText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

