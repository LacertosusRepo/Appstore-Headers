//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class NSAttributedString, NSString, UILabel;

@interface SPTHomeUILabel : UIView <GLUEStyleable>
{
    UILabel *_label;
}

+ (void)applyStyle:(id)arg1 toLabel:(id)arg2;
+ (struct CGSize)sizeForAttributedText:(id)arg1 style:(id)arg2 maxWidth:(double)arg3;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)addConstraints;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

