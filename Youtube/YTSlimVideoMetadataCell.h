//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTExpandableCell.h"

#import "GA11YMixinEmbedder.h"
#import "MDCInkTouchControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTResponder.h"
#import "YTSlimVideoDetailsActionsProtocol.h"
#import "YTThumbnailMapping.h"

@class FLXLayout, MDCInkTouchController, NSArray, NSMutableArray, NSString, UIControl, UITapGestureRecognizer, UIView, YTBadgesView, YTFormattedStringLabel, YTISlimVideoMetadataRenderer, YTSlimVideoDetailsActionView, YTSlimVideoDetailsActionsView, YTSlimVideoOwnerView, YTStandaloneBadgeView, YTViewGroup;

@interface YTSlimVideoMetadataCell : YTExpandableCell <GA11YMixinEmbedder, MDCInkTouchControllerDelegate, UIGestureRecognizerDelegate, YTPageStyling, YTThumbnailMapping, YTCollectionViewCellProtocol, YTResponder, YTSlimVideoDetailsActionsProtocol>
{
    YTISlimVideoMetadataRenderer *_entry;
    double _totalMetadataHeight;
    MDCInkTouchController *_inkTouchController;
    UIView *_videoOwnerViewTopSeparator;
    UIView *_videoOwnerViewBottomSeparator;
    YTSlimVideoDetailsActionsView *_videoDetailsActionsView;
    UITapGestureRecognizer *_channelAvatarTapRecognizer;
    NSArray *_expandedOnlyViews;
    FLXLayout *_layout;
    id <YTResponder> _parentResponder;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTFormattedStringLabelDelegate> _formattedStringLabelDelegate;
    YTSlimVideoOwnerView *_videoOwnerView;
    UIControl *_disclosureTarget;
    YTStandaloneBadgeView *_topStandaloneBadge;
    YTFormattedStringLabel *_titleLabel;
    YTStandaloneBadgeView *_underTitleStandaloneBadge;
    YTFormattedStringLabel *_subtitleCollapsedLabel;
    YTFormattedStringLabel *_subtitleExpandedLabel;
    YTBadgesView *_badgesView;
    YTViewGroup *_badgesViewGroup;
    UIView *_descriptionContainer;
    UIView *_descriptionLabelGroup;
    YTFormattedStringLabel *_descriptionLabel;
    NSMutableArray *_metadataRowLabels;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 expanded:(_Bool)arg2 offlineButtonVisible:(_Bool)arg3 size:(struct CGSize)arg4;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) NSMutableArray *metadataRowLabels; // @synthesize metadataRowLabels=_metadataRowLabels;
@property(retain, nonatomic) YTFormattedStringLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIView *descriptionLabelGroup; // @synthesize descriptionLabelGroup=_descriptionLabelGroup;
@property(retain, nonatomic) UIView *descriptionContainer; // @synthesize descriptionContainer=_descriptionContainer;
@property(retain, nonatomic) YTViewGroup *badgesViewGroup; // @synthesize badgesViewGroup=_badgesViewGroup;
@property(retain, nonatomic) YTBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleExpandedLabel; // @synthesize subtitleExpandedLabel=_subtitleExpandedLabel;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleCollapsedLabel; // @synthesize subtitleCollapsedLabel=_subtitleCollapsedLabel;
@property(retain, nonatomic) YTStandaloneBadgeView *underTitleStandaloneBadge; // @synthesize underTitleStandaloneBadge=_underTitleStandaloneBadge;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) YTStandaloneBadgeView *topStandaloneBadge; // @synthesize topStandaloneBadge=_topStandaloneBadge;
@property(retain, nonatomic) UIControl *disclosureTarget; // @synthesize disclosureTarget=_disclosureTarget;
@property(readonly, nonatomic) YTSlimVideoOwnerView *videoOwnerView; // @synthesize videoOwnerView=_videoOwnerView;
@property(nonatomic) __weak id <YTFormattedStringLabelDelegate> formattedStringLabelDelegate; // @synthesize formattedStringLabelDelegate=_formattedStringLabelDelegate;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (_Bool)badgesVisible;
- (void)resetFlexLayout;
- (void)removeChannelAvatarTarget;
- (void)removeExpandCollapseTarget;
- (struct CGSize)sizeSubviewsWithSize:(struct CGSize)arg1;
- (double)descriptionContainerHeight;
- (void)createMetadataLabels;
- (void)clearMetadataLabels;
- (void)updateSubtitleLabels;
- (void)positionExpandableViews;
- (void)layoutBadges;
- (void)removeExpandedOnlyViews;
- (void)addExpandedOnlyViews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidProgressWithVideoID:(id)arg1 percentageDownloaded:(double)arg2;
- (void)updateAccountLinkButton:(id)arg1;
- (void)setOfflineButtonVisible:(_Bool)arg1 dimmed:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOfflineVideo:(id)arg1 offlineability:(id)arg2;
- (void)setToggled:(_Bool)arg1 forSupportedRenderer:(id)arg2;
- (_Bool)isToggledForSupportedRenderer:(id)arg1;
@property(nonatomic) int likeStatus;
@property(readonly, nonatomic) YTSlimVideoDetailsActionView *offlineActionView;
@property(readonly, nonatomic) NSArray *buttonHintTargets;
@property(readonly, nonatomic) NSArray *buttonHintRenderers;
@property(nonatomic) __weak id <YTSlimVideoDetailsActionViewDelegate> videoActionsDelegate;
- (id)entry;
- (void)setEntry:(id)arg1;
- (id)thumbnailMappings;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)inkTouchController:(id)arg1 insertInkView:(id)arg2 intoView:(id)arg3;
- (void)pageStyleDidChange:(long long)arg1;
- (void)updateMetadata:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setExpanded:(_Bool)arg1;
- (void)setChannelAvatarTarget:(id)arg1 action:(SEL)arg2;
- (void)setExpandCollapseTarget:(id)arg1 action:(SEL)arg2;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)sidePadding;
- (double)menuButtonRightPadding;
- (double)disclosureArrowPaddingX;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

