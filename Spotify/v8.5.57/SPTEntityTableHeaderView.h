//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"
#import "SPTThemableViewLayoutDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class GLUEButton, NSArray, NSAttributedString, NSString, SPTBadgeView, SPTEntityStickyHeaderView, SPTEntityTableHeaderBackgroundView, SPTPageControl, SPTUIBlurView, UIFont, UIImage, UIImageView, UILabel, UINavigationItem, UIScrollView, UITableView, UITapGestureRecognizer;
@protocol SPTEntityTableHeaderViewDelegate, SPTThemableViewLayoutDelegate;

@interface SPTEntityTableHeaderView : UIView <UIScrollViewDelegate, SPTThemableView, SPTThemableViewLayoutDelegate>
{
    _Bool _primaryActionButtonEnabled;
    _Bool _shouldOverlayImageWhenTapped;
    _Bool _shouldEnterStickyMode;
    _Bool _topViewActive;
    _Bool _shouldDisplayMetadataLabelAboveTitleAccessoryView;
    _Bool _sticky;
    _Bool _shouldUseBigImages;
    _Bool _animatingTopView;
    _Bool _shouldOnlyAdjustLayoutForPositiveYOffset;
    _Bool _layoutWithoutPrimaryAction;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    UINavigationItem *_stickyHeaderNavigationItem;
    long long _size;
    UIView *_topView;
    UIImageView *_imageView;
    SPTEntityStickyHeaderView *_stickyHeaderView;
    long long _imageStyle;
    UIImageView *_sponsoredImageView;
    SPTBadgeView *_imageBadgeView;
    UIView *_titleAccessoryView;
    GLUEButton *_primaryActionButton;
    NSArray *_alternateViews;
    id <SPTEntityTableHeaderViewDelegate> _delegate;
    UITableView *_tableView;
    SPTEntityTableHeaderBackgroundView *_backgroundView;
    UIView *_imageWrapperView;
    UITapGestureRecognizer *_imageViewGestureRecognizer;
    UILabel *_mainTitleLabel;
    UILabel *_metadataLabel;
    UILabel *_creatorLabel;
    UILabel *_stickyHeaderTitleLabelView;
    UIView *_firstPageView;
    UIView *_pageScrollViewContainer;
    UIScrollView *_pageScrollView;
    SPTPageControl *_pageControl;
    SPTUIBlurView *_overlayView;
    UIImageView *_overlayImageView;
    struct CGPoint _tableContentOffset;
}

+ (id)entityHeaderViewWithSize:(long long)arg1 forTableView:(id)arg2;
@property(nonatomic) _Bool layoutWithoutPrimaryAction; // @synthesize layoutWithoutPrimaryAction=_layoutWithoutPrimaryAction;
@property(retain, nonatomic) UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) SPTUIBlurView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) _Bool shouldOnlyAdjustLayoutForPositiveYOffset; // @synthesize shouldOnlyAdjustLayoutForPositiveYOffset=_shouldOnlyAdjustLayoutForPositiveYOffset;
@property(nonatomic, getter=isAnimatingTopView) _Bool animatingTopView; // @synthesize animatingTopView=_animatingTopView;
@property(retain, nonatomic) SPTPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) UIView *pageScrollViewContainer; // @synthesize pageScrollViewContainer=_pageScrollViewContainer;
@property(retain, nonatomic) UIView *firstPageView; // @synthesize firstPageView=_firstPageView;
@property(retain, nonatomic) UILabel *stickyHeaderTitleLabelView; // @synthesize stickyHeaderTitleLabelView=_stickyHeaderTitleLabelView;
@property(retain, nonatomic) UILabel *creatorLabel; // @synthesize creatorLabel=_creatorLabel;
@property(retain, nonatomic) UILabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) UITapGestureRecognizer *imageViewGestureRecognizer; // @synthesize imageViewGestureRecognizer=_imageViewGestureRecognizer;
@property(retain, nonatomic) UIView *imageWrapperView; // @synthesize imageWrapperView=_imageWrapperView;
@property(retain, nonatomic) SPTEntityTableHeaderBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct CGPoint tableContentOffset; // @synthesize tableContentOffset=_tableContentOffset;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SPTEntityTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseBigImages; // @synthesize shouldUseBigImages=_shouldUseBigImages;
@property(nonatomic, getter=isSticky) _Bool sticky; // @synthesize sticky=_sticky;
@property(nonatomic) _Bool shouldDisplayMetadataLabelAboveTitleAccessoryView; // @synthesize shouldDisplayMetadataLabelAboveTitleAccessoryView=_shouldDisplayMetadataLabelAboveTitleAccessoryView;
@property(nonatomic, getter=topViewIsActive) _Bool topViewActive; // @synthesize topViewActive=_topViewActive;
@property(nonatomic) _Bool shouldEnterStickyMode; // @synthesize shouldEnterStickyMode=_shouldEnterStickyMode;
@property(nonatomic) _Bool shouldOverlayImageWhenTapped; // @synthesize shouldOverlayImageWhenTapped=_shouldOverlayImageWhenTapped;
@property(copy, nonatomic) NSArray *alternateViews; // @synthesize alternateViews=_alternateViews;
@property(nonatomic, getter=isPrimaryActionButtonEnabled) _Bool primaryActionButtonEnabled; // @synthesize primaryActionButtonEnabled=_primaryActionButtonEnabled;
@property(retain, nonatomic) GLUEButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
@property(retain, nonatomic) UIView *titleAccessoryView; // @synthesize titleAccessoryView=_titleAccessoryView;
@property(retain, nonatomic) SPTBadgeView *imageBadgeView; // @synthesize imageBadgeView=_imageBadgeView;
@property(retain, nonatomic) UIImageView *sponsoredImageView; // @synthesize sponsoredImageView=_sponsoredImageView;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(readonly, nonatomic) SPTEntityStickyHeaderView *stickyHeaderView; // @synthesize stickyHeaderView=_stickyHeaderView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) UINavigationItem *stickyHeaderNavigationItem; // @synthesize stickyHeaderNavigationItem=_stickyHeaderNavigationItem;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pageControlChanged:(id)arg1;
- (void)stickyHeaderViewButtonTapped;
- (void)overlayViewDismissedWithRecognizer:(id)arg1;
- (void)imageViewTapped;
@property(readonly, nonatomic) struct CGRect metadataLabelFrame;
- (void)setupStickyHeader;
- (double)heightForEntityHeaderViewSize:(long long)arg1;
- (double)topViewExtraHeight;
- (struct CGRect)frameForSponsoredImageView;
- (struct CGRect)frameForStickyHeaderView;
- (struct CGRect)frameForCreatorLabel;
- (struct CGRect)frameForImageView;
- (struct CGRect)frameForImageWrapperView;
- (struct CGRect)frameForBackgroundImageContainerView;
- (struct CGRect)frameForTitleAccessoryView;
- (struct CGRect)frameForMainTitleLabel;
- (struct CGRect)frameForTopView;
- (struct CGRect)frameForPrimaryActionButton;
- (struct CGRect)frameForPageControl;
- (struct CGRect)frameForAlternativeViewAtIndex:(long long)arg1;
- (struct CGRect)frameForFirstPageView;
- (struct CGRect)frameForScrollView;
- (struct CGRect)frameForScrollViewContainerView;
- (void)adjustHeaderViewSize:(long long)arg1;
- (void)resetMaskForSPTImageStyle;
- (struct CGRect)adjustFrameAccordingToStateAnimated:(_Bool)arg1 origin:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)adjustTableViewContentInsetAccordingToState;
- (void)hideNotVisibleViews;
- (void)tableViewContentOffsetChanged:(struct CGPoint)arg1;
- (void)accessibilityAnnouncement;
- (void)bouncePrimaryActionButton;
- (void)collapse;
@property(readonly, nonatomic) double stickyModeThreshold;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (double)calculateMaxYFromCGRect:(struct CGRect)arg1 usingPreviousY:(double)arg2;
- (_Bool)shouldAddExtraMargin;
- (id)actionButtonForStickyHeader;
- (void)enablePageScrolling:(_Bool)arg1;
- (unsigned long long)numberOfPagesForScrollView;
- (id)createNavigationItemstickyHeaderTitleLabelView;
@property(readonly, nonatomic) UIFont *metadataLabelFont;
- (id)imageBlurView;
@property(readonly, nonatomic) struct CGSize backgroundImageViewSize;
@property(readonly, nonatomic) struct CGSize imageViewSize;
- (void)deactivateTopView:(double)arg1 theme:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activateTopView:(double)arg1 theme:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setTopViewActive:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) NSString *metadataText;
@property(copy, nonatomic) NSString *metadataAccessibilityLabel;
@property(copy, nonatomic) NSAttributedString *metadataAttributedText;
@property(copy, nonatomic) NSString *creatorText;
- (void)setCreatorAttributedText:(id)arg1;
- (id)creatorAttributedText;
@property(copy, nonatomic) NSString *alternateTitle;
- (void)updateMainTitleLabelTextWithTitle:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)setStickyHeaderTitleAlpha:(double)arg1;
@property(nonatomic) long long imageContentMode;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSize:(long long)arg1 tableView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

