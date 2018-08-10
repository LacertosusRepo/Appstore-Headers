//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "GA11YMixinEmbedder.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class FLXLayout, GIMMe, NSString, UITapGestureRecognizer, YTColdConfig, YTFormattedStringLabel, YTVideoThumbnailView;

@interface YTPremiumSeasonCardView : UIControl <GA11YMixinEmbedder, YTReusableView, YTThumbnailMapping>
{
    UITapGestureRecognizer *_tapRecognizer;
    _Bool _shouldResetLayout;
    YTColdConfig *_coldConfig;
    id <GA11YMixinImpl> _accessibilityMixin;
    GIMMe *_gimme;
    id <YTPremiumSeasonCardCellDelegate> _delegate;
    id <YTVideoCardModel> _model;
    FLXLayout *_layout;
    YTFormattedStringLabel *_titleLabel;
    YTVideoThumbnailView *_thumbnail;
}

@property(retain, nonatomic) YTVideoThumbnailView *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) id <YTVideoCardModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <YTPremiumSeasonCardCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (double)viewHeightForModel:(id)arg1;
- (void)didTapView:(id)arg1;
- (void)resetLayout;
- (id)root;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (struct CGRect)thumbnailFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

