//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SPTProfileCounterWithLabelView : UIView
{
    UILabel *_countLabel;
    UILabel *_subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)setSubLabelText:(id)arg1;
- (void)setCounterText:(id)arg1;
- (void)setupConstraints;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

