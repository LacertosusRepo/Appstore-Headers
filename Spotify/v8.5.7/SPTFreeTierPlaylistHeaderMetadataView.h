//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUELabel, NSDate, NSLayoutConstraint, NSString, UIImage, UIImageView, UIStackView, UITextView;
@protocol SPTFreeTierPlaylistHeaderMetadataViewDelegate;

@interface SPTFreeTierPlaylistHeaderMetadataView : UIView <GLUEStyleable>
{
    id <SPTFreeTierPlaylistHeaderMetadataViewDelegate> _delegate;
    NSDate *_lastModifiedDate;
    double _totalDuration;
    UIStackView *_verticalStack;
    UIStackView *_middleRowStack;
    NSLayoutConstraint *_imageHeightConstraint;
    UITextView *_descriptionView;
    GLUELabel *_metadataLabel;
    UIImageView *_ownerImageView;
    GLUEButton *_ownerNameButton;
    UIImageView *_lastModifiedIconView;
    GLUELabel *_lastModifiedLabel;
    UIImageView *_totalDurationIconView;
    GLUELabel *_totalDurationLabel;
}

@property(retain, nonatomic) GLUELabel *totalDurationLabel; // @synthesize totalDurationLabel=_totalDurationLabel;
@property(retain, nonatomic) UIImageView *totalDurationIconView; // @synthesize totalDurationIconView=_totalDurationIconView;
@property(retain, nonatomic) GLUELabel *lastModifiedLabel; // @synthesize lastModifiedLabel=_lastModifiedLabel;
@property(retain, nonatomic) UIImageView *lastModifiedIconView; // @synthesize lastModifiedIconView=_lastModifiedIconView;
@property(retain, nonatomic) GLUEButton *ownerNameButton; // @synthesize ownerNameButton=_ownerNameButton;
@property(retain, nonatomic) UIImageView *ownerImageView; // @synthesize ownerImageView=_ownerImageView;
@property(retain, nonatomic) GLUELabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(retain, nonatomic) UIStackView *middleRowStack; // @synthesize middleRowStack=_middleRowStack;
@property(retain, nonatomic) UIStackView *verticalStack; // @synthesize verticalStack=_verticalStack;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(nonatomic) __weak id <SPTFreeTierPlaylistHeaderMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ownerImageWasTapped:(id)arg1;
- (void)ownerNameButtonWasTapped:(id)arg1;
@property(readonly, nonatomic) struct CGSize ownerImageSize;
@property(retain, nonatomic) UIImage *ownerImage;
@property(copy, nonatomic) NSString *ownerName;
@property(copy, nonatomic) NSString *descriptionText;
- (void)layoutOwnerImage;
- (void)layoutSubviews;
- (void)glue_applyStyle:(id)arg1;
- (void)setupBottomRowStack;
- (void)setupBottomRowComponents;
- (void)setupBottomRow;
- (void)setupMiddleRowStack;
- (void)setupMiddleRowComponents;
- (void)setupMiddleRow;
- (void)setupDescription;
- (void)setupVerticalStack;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

