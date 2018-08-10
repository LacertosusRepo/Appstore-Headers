//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GA11YMixinEmbedder.h"
#import "YTCellActionProtocol.h"
#import "YTReusableView.h"
#import "YTThumbnailMapping.h"

@class NSArray, NSString, YTFormattedStringLabel, YTIDefaultPromoPanelRenderer, YTImageView, YTQTMButton, YTShadowView;

@interface YTDefaultPromoPanelView : UIView <GA11YMixinEmbedder, YTCellActionProtocol, YTReusableView, YTThumbnailMapping>
{
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_descriptionLabel;
    YTQTMButton *_button;
    YTImageView *_backgroundImageView;
    YTImageView *_foregroundImageView;
    YTShadowView *_ytShadowView;
    UIView *_videoAsThumbnailPlaceholderView;
    UIView *_playbackPlaceholderView;
    NSArray *_layoutArray;
    _Bool _shouldDynamicallyHideForegroundThumbnail;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTDefaultPromoPanelViewDelegate> _delegate;
    YTQTMButton *_menuButton;
    UIView *_playbackView;
    YTIDefaultPromoPanelRenderer *_renderer;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) _Bool shouldDynamicallyHideForegroundThumbnail; // @synthesize shouldDynamicallyHideForegroundThumbnail=_shouldDynamicallyHideForegroundThumbnail;
@property(retain, nonatomic) YTIDefaultPromoPanelRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak UIView *playbackView; // @synthesize playbackView=_playbackView;
@property(readonly, nonatomic) YTQTMButton *menuButton; // @synthesize menuButton=_menuButton;
@property(nonatomic) __weak id <YTDefaultPromoPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)backgroundThumbnailDetails_regular;
- (id)backgroundThumbnailDetails_compact;
- (id)backgroundThumbnailDetails;
- (void)resetConfigurableStyles;
- (void)didTapButton;
- (void)prepareForReuse;
- (id)thumbnailMappings;
- (void)removeLongPressTarget;
- (void)setLongPressTarget:(id)arg1 action:(SEL)arg2;
- (void)removeActionTarget;
- (void)setActionTarget:(id)arg1 action:(SEL)arg2;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
@property(readonly, nonatomic) YTQTMButton *actionButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
