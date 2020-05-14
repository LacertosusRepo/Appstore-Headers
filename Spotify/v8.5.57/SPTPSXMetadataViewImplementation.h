//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTPSXMetadataView-Protocol.h"

@class NSDate, NSString, SPTActionButton, UIImage, UIImageView, UILabel, UITextView;
@protocol SPTPSXMetadataViewDelegate;

@interface SPTPSXMetadataViewImplementation : UIView <SPTPSXMetadataView>
{
    NSDate *_lastModifiedDate;
    double _totalDuration;
    SPTActionButton *_ownerNameButton;
    UIView *_ownerImageContainerView;
    id <SPTPSXMetadataViewDelegate> _delegate;
    UIView *_containerView;
    UITextView *_descriptionView;
    UILabel *_metadataLabel;
    UIImageView *_ownerImageView;
    UIImageView *_lastModifiedIconView;
    UILabel *_lastModifiedLabel;
    UILabel *_totalDurationLabel;
    UIImageView *_totalDurationIconView;
}

@property(retain, nonatomic) UIImageView *totalDurationIconView; // @synthesize totalDurationIconView=_totalDurationIconView;
@property(retain, nonatomic) UILabel *totalDurationLabel; // @synthesize totalDurationLabel=_totalDurationLabel;
@property(retain, nonatomic) UILabel *lastModifiedLabel; // @synthesize lastModifiedLabel=_lastModifiedLabel;
@property(retain, nonatomic) UIImageView *lastModifiedIconView; // @synthesize lastModifiedIconView=_lastModifiedIconView;
@property(retain, nonatomic) UIImageView *ownerImageView; // @synthesize ownerImageView=_ownerImageView;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPTPSXMetadataViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *ownerImageContainerView; // @synthesize ownerImageContainerView=_ownerImageContainerView;
@property(retain, nonatomic) SPTActionButton *ownerNameButton; // @synthesize ownerNameButton=_ownerNameButton;
@property(nonatomic) double totalDuration; // @synthesize totalDuration=_totalDuration;
@property(retain, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
- (void).cxx_destruct;
- (void)ownerImageWasTapped:(id)arg1;
- (void)ownerNameButtonWasTapped:(id)arg1;
- (void)updateConstraints;
@property(readonly, nonatomic) struct CGSize ownerImageSize;
@property(retain, nonatomic) UIImage *ownerImage;
@property(copy, nonatomic) NSString *ownerName;
@property(copy, nonatomic) NSString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

