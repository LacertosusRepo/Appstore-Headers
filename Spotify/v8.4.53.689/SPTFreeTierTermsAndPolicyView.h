//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLUEStyleable.h"

@class NSAttributedString, NSDictionary, NSString, UITextView;

@interface SPTFreeTierTermsAndPolicyView : UIView <GLUEStyleable>
{
    NSAttributedString *_attributedText;
    id <UITextViewDelegate> _delegate;
    UITextView *_textView;
    NSDictionary *_termsViewHorizontalMargin;
}

@property(retain, nonatomic) NSDictionary *termsViewHorizontalMargin; // @synthesize termsViewHorizontalMargin=_termsViewHorizontalMargin;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <UITextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

