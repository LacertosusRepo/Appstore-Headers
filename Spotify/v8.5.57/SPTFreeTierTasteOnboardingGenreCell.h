//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSArray, NSString;

@interface SPTFreeTierTasteOnboardingGenreCell : UICollectionViewCell <GLUEStyleable>
{
    _Bool _newlyCreated;
    GLUEImageView *_imageView;
    GLUELabel *_textLabel;
    NSArray *_textLabelEdgeConstraints;
}

@property(copy, nonatomic) NSArray *textLabelEdgeConstraints; // @synthesize textLabelEdgeConstraints=_textLabelEdgeConstraints;
@property(readonly, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isNewlyCreated) _Bool newlyCreated; // @synthesize newlyCreated=_newlyCreated;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (void)activateConstraints;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

