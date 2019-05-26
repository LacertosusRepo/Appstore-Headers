//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStatefulItem-Protocol.h"

@class NSArray, NSString, UIView;
@protocol GLUEStatefulItem><GLUEReusable><GLUEStyleable;

@interface GLUECardCollectionViewCell : UICollectionViewCell <GLUEStatefulItem>
{
    UIView<GLUEStatefulItem><GLUEReusable><GLUEStyleable> *_cardView;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) UIView<GLUEStatefulItem><GLUEReusable><GLUEStyleable> *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(readonly, nonatomic) unsigned long long state;
- (void)prepareForReuse;
- (void)loadCardView;
- (void)replaceViewConstraints;
- (void)removeViewConstraints;
- (void)addViewConstraints;
- (void)setupCardView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

