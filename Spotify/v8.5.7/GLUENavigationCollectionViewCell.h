//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUENavigationRow-Protocol.h"

@class GLUELabel, GLUENavigationRowView, NSString;

@interface GLUENavigationCollectionViewCell : UICollectionViewCell <GLUENavigationRow>
{
    GLUENavigationRowView *_rowView;
}

@property(readonly, nonatomic) GLUENavigationRowView *rowView; // @synthesize rowView=_rowView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(readonly, nonatomic) unsigned long long state;
@property(nonatomic) long long icon;
@property(readonly, nonatomic) GLUELabel *titleLabel;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
