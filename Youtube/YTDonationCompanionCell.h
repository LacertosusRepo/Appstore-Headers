//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCellActionProtocol.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTEngagementPanelExpansionProtocol.h"
#import "YTThumbnailMapping.h"

@class NSString, UIView, YTButton, YTDonationProgressView, YTExpansionView, YTFormattedStringLabel, YTIDonationShelfRenderer, YTImageView;

@interface YTDonationCompanionCell : YTCollectionViewCell <YTCellActionProtocol, YTThumbnailMapping, YTCollectionViewCellProtocol, YTEngagementPanelExpansionProtocol>
{
    YTIDonationShelfRenderer *_renderer;
    UIView *_titleView;
    YTButton *_actionButton;
    YTImageView *_image;
    YTFormattedStringLabel *_campaignTitleLabel;
    YTFormattedStringLabel *_campaignSubtitleLabel;
    YTDonationProgressView *_progressView;
    id <YTResponder> _parentResponder;
    YTExpansionView *_expansionView;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTExpansionView *expansionView; // @synthesize expansionView=_expansionView;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (void)sizeViewsWithWidth:(double)arg1;
- (void)removeDidPressExpansionTarget;
- (void)setDidPressExpansionTarget:(id)arg1 action:(SEL)arg2;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
