//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSNumberFormatter, NSString;

@interface SPTArtistAboutGlobalChartPositionView : UIView <GLUEStyleable>
{
    NSNumberFormatter *_numberFormatter;
    UIView *_circleView;
    NSLayoutConstraint *_circleViewWidthConstraint;
    UIView *_textContainerView;
    GLUELabel *_rankLabel;
    GLUELabel *_textLabel;
}

@property(retain, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) GLUELabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) NSLayoutConstraint *circleViewWidthConstraint; // @synthesize circleViewWidthConstraint=_circleViewWidthConstraint;
@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) NSNumberFormatter *numberFormatter; // @synthesize numberFormatter=_numberFormatter;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (void)setGlobalChartPosition:(unsigned long long)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)addLayoutConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

