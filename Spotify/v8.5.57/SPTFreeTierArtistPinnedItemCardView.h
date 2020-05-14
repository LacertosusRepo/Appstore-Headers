//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUECalendarThumbnailView, GLUEGradientView, GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierArtistPinnedItemCommentPlaceholderView, SPTFreeTierArtistPinnedItemCommentView;

@interface SPTFreeTierArtistPinnedItemCardView : UIView <GLUEStyleable>
{
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_commentPlaceholderText;
    NSString *_commentText;
    NSString *_concertMonthText;
    unsigned long long _concertDate;
    UIView *_contentView;
    GLUEImageView *_backgroundImageView;
    GLUEGradientView *_backgroundGradientView;
    GLUEImageView *_contentImageView;
    NSLayoutConstraint *_contentImageViewWidthConstraint;
    NSLayoutConstraint *_contentImageViewHeightConstraint;
    GLUECalendarThumbnailView *_calendarView;
    NSLayoutConstraint *_calendarViewWidthConstraint;
    NSLayoutConstraint *_calendarViewHeightConstraint;
    UIView *_metadataView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTFreeTierArtistPinnedItemCommentView *_commentView;
    SPTFreeTierArtistPinnedItemCommentPlaceholderView *_commentPlaceholderView;
    UIView *_trailingAccessoryView;
    NSLayoutConstraint *_disclosureViewWidthConstraint;
    NSLayoutConstraint *_disclosureViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *disclosureViewHeightConstraint; // @synthesize disclosureViewHeightConstraint=_disclosureViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *disclosureViewWidthConstraint; // @synthesize disclosureViewWidthConstraint=_disclosureViewWidthConstraint;
@property(retain, nonatomic) UIView *trailingAccessoryView; // @synthesize trailingAccessoryView=_trailingAccessoryView;
@property(retain, nonatomic) SPTFreeTierArtistPinnedItemCommentPlaceholderView *commentPlaceholderView; // @synthesize commentPlaceholderView=_commentPlaceholderView;
@property(retain, nonatomic) SPTFreeTierArtistPinnedItemCommentView *commentView; // @synthesize commentView=_commentView;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *metadataView; // @synthesize metadataView=_metadataView;
@property(retain, nonatomic) NSLayoutConstraint *calendarViewHeightConstraint; // @synthesize calendarViewHeightConstraint=_calendarViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *calendarViewWidthConstraint; // @synthesize calendarViewWidthConstraint=_calendarViewWidthConstraint;
@property(retain, nonatomic) GLUECalendarThumbnailView *calendarView; // @synthesize calendarView=_calendarView;
@property(retain, nonatomic) NSLayoutConstraint *contentImageViewHeightConstraint; // @synthesize contentImageViewHeightConstraint=_contentImageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentImageViewWidthConstraint; // @synthesize contentImageViewWidthConstraint=_contentImageViewWidthConstraint;
@property(retain, nonatomic) GLUEImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) GLUEImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long concertDate; // @synthesize concertDate=_concertDate;
@property(copy, nonatomic) NSString *concertMonthText; // @synthesize concertMonthText=_concertMonthText;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(copy, nonatomic) NSString *commentPlaceholderText; // @synthesize commentPlaceholderText=_commentPlaceholderText;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (void)updateCalendarView;
- (_Bool)isConcert;
- (void)updateCommentVisibility;
- (_Bool)hasComment;
- (void)setContentImage:(id)arg1;
- (void)setArtistImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)addLayoutConstraints;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
