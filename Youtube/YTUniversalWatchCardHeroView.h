//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class CALayer, GA11YElement, NSString, UIImageView, YT16by9ImageView, YTBadge, YTFormattedStringLabel, YTIUniversalWatchCardRenderer, YTQTMButton, YTUniversalWatchCardCollageMetadataView, YTUniversalWatchCardOneVsOneEventMetadataView;

@interface YTUniversalWatchCardHeroView : UIControl <YTReusableView, YTThumbnailMapping>
{
    CALayer *_tintLayer;
    UIImageView *_metadataGradientImageView;
    YTIUniversalWatchCardRenderer *_renderer;
    GA11YElement *_nonInteractiveA11yElements;
    YT16by9ImageView *_singleImageView;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTQTMButton *_actionButton;
    YTBadge *_durationBadge;
    YTUniversalWatchCardCollageMetadataView *_collageMetadataView;
    YTUniversalWatchCardOneVsOneEventMetadataView *_eventMetadataView;
}

@property(retain, nonatomic) YTUniversalWatchCardOneVsOneEventMetadataView *eventMetadataView; // @synthesize eventMetadataView=_eventMetadataView;
@property(retain, nonatomic) YTUniversalWatchCardCollageMetadataView *collageMetadataView; // @synthesize collageMetadataView=_collageMetadataView;
@property(retain, nonatomic) YTBadge *durationBadge; // @synthesize durationBadge=_durationBadge;
@property(retain, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YT16by9ImageView *singleImageView; // @synthesize singleImageView=_singleImageView;
- (void).cxx_destruct;
- (_Bool)isOneVsOneRenderer;
- (void)adjustTintOnTouchUp;
- (void)adjustTintOnTouchDown;
- (void)didTapCallToAction;
- (void)setupCallToActionButton:(id)arg1;
- (id)accessibilityElements;
- (id)nonInteractiveA11yViews;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)setRenderer:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

