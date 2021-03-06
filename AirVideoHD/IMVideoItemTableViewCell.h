//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMItemTableViewCellWithDetail.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class IMLayout, IMLinearGradientView, IMVideoInfoLabel, NSString, UIImageView, UILabel;

@interface IMVideoItemTableViewCell : IMItemTableViewCellWithDetail <UIGestureRecognizerDelegate>
{
    UIImageView *thumbnailImageView;
    UILabel *displayNameLabel;
    IMLinearGradientView *activeMarker;
    IMVideoInfoLabel *videoInfoLabel;
    IMLayout *layout;
    _Bool active;
    double textMarginLeft;
    double textMarginRight;
    double horizontalSpacing;
    CDUnknownBlockType longTapAction;
    double thumbnailCornerRadius;
    struct CGSize thumbnailSize;
}

@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize;
@property(nonatomic) double thumbnailCornerRadius; // @synthesize thumbnailCornerRadius;
@property(copy, nonatomic) CDUnknownBlockType longTapAction; // @synthesize longTapAction;
@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing;
@property(nonatomic) double textMarginRight; // @synthesize textMarginRight;
@property(nonatomic) double textMarginLeft; // @synthesize textMarginLeft;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)detailsLoaded;
- (void)itemChanged;
- (double)scaledDownThumbnailCornerRadius;
- (struct CGSize)scaledDownThumbnailSize;
@property(readonly, nonatomic) UIImageView *thumbnailImageView;
@property(nonatomic) _Bool active;
- (void)prepareForReuse;
- (void)longTapGestureRecognizerAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

