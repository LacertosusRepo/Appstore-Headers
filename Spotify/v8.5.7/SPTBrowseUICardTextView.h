//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SPTBrowseUICardTextViewStyle, UITextView;

@interface SPTBrowseUICardTextView : UIView <GLUEStyleable>
{
    _Bool _canReuseLayout;
    NSString *_text;
    NSArray *_exclusionPaths;
    UITextView *_textView;
    NSTextStorage *_sizingTextStorage;
    NSLayoutManager *_sizingLayoutManager;
    NSTextContainer *_sizingTextContainer;
    SPTBrowseUICardTextViewStyle *_style;
}

+ (id)sharedCache;
@property(nonatomic) _Bool canReuseLayout; // @synthesize canReuseLayout=_canReuseLayout;
@property(copy, nonatomic) SPTBrowseUICardTextViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) NSTextContainer *sizingTextContainer; // @synthesize sizingTextContainer=_sizingTextContainer;
@property(readonly, nonatomic) NSLayoutManager *sizingLayoutManager; // @synthesize sizingLayoutManager=_sizingLayoutManager;
@property(readonly, nonatomic) NSTextStorage *sizingTextStorage; // @synthesize sizingTextStorage=_sizingTextStorage;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSArray *exclusionPaths; // @synthesize exclusionPaths=_exclusionPaths;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)cacheKey;
- (double)maxTextBoundingHeightForStyle:(unsigned long long)arg1;
- (double)maxTextWidth;
- (double)maxFontSize;
- (double)minFontSize;
- (double)hyphenationFactorForStyle:(unsigned long long)arg1;
- (double)fontSizeForStyle:(unsigned long long)arg1;
- (_Bool)isSingleWord;
- (struct SPTTextAttributes)textAttributes;
- (struct CGSize)boundingSizeForAttributedString:(id)arg1;
- (id)attributedStringWithFontSize:(double)arg1 hyphenationFactor:(double)arg2;
- (id)attributedString;
- (void)invalidateLayout;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
