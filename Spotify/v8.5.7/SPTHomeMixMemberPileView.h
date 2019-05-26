//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSLayoutConstraint, NSString, SPTHomeMixMemberPileViewStyle;

@interface SPTHomeMixMemberPileView : UIView <GLUEStyleable>
{
    SPTHomeMixMemberPileViewStyle *_currentStyle;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(copy, nonatomic) SPTHomeMixMemberPileViewStyle *currentStyle; // @synthesize currentStyle=_currentStyle;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)glue_applyStyle:(id)arg1;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

