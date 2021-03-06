//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierCollectionTabControlStyle;

@interface SPTFreeTierCollectionTabControlCollectionViewCell : UICollectionViewCell <GLUEStyleable>
{
    GLUELabel *_titleLabel;
    SPTFreeTierCollectionTabControlStyle *_style;
    NSLayoutConstraint *_leadingLabelConstraints;
    NSLayoutConstraint *_trailingLabelConstraints;
}

@property(retain, nonatomic) NSLayoutConstraint *trailingLabelConstraints; // @synthesize trailingLabelConstraints=_trailingLabelConstraints;
@property(retain, nonatomic) NSLayoutConstraint *leadingLabelConstraints; // @synthesize leadingLabelConstraints=_leadingLabelConstraints;
@property(retain, nonatomic) SPTFreeTierCollectionTabControlStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

