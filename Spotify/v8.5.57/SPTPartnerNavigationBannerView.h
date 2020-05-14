//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTBannerView.h"

#import "SPTPartnerNavigationBannerViewModelDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GLUEButton, GLUELabel, NSString, SPTPartnerBannerProgressView, SPTPartnerNavigationBannerViewModel, UIButton, UICollectionView, UIImageView, UIStackView, UIView;

@interface SPTPartnerNavigationBannerView : SPTBannerView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, SPTPartnerNavigationBannerViewModelDelegate, UIGestureRecognizerDelegate>
{
    SPTPartnerNavigationBannerViewModel *_viewModel;
    UIView *_containerView;
    UIStackView *_textStackView;
    UIStackView *_topStackView;
    UIStackView *_bottomStackView;
    UIStackView *_contentStackView;
    UIImageView *_imageView;
    GLUELabel *_topLabel;
    GLUELabel *_bottomLabel;
    SPTPartnerBannerProgressView *_autoDismissProgressView;
    UIButton *_dismissButton;
    UIView *_dismissView;
    UIView *_separatorView;
    UICollectionView *_integrationListView;
    GLUEButton *_moreOptionsButton;
}

@property(readonly, nonatomic) GLUEButton *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
@property(readonly, nonatomic) UICollectionView *integrationListView; // @synthesize integrationListView=_integrationListView;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIView *dismissView; // @synthesize dismissView=_dismissView;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(readonly, nonatomic) SPTPartnerBannerProgressView *autoDismissProgressView; // @synthesize autoDismissProgressView=_autoDismissProgressView;
@property(readonly, nonatomic) GLUELabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(readonly, nonatomic) GLUELabel *topLabel; // @synthesize topLabel=_topLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(readonly, nonatomic) UIStackView *bottomStackView; // @synthesize bottomStackView=_bottomStackView;
@property(readonly, nonatomic) UIStackView *topStackView; // @synthesize topStackView=_topStackView;
@property(readonly, nonatomic) UIStackView *textStackView; // @synthesize textStackView=_textStackView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SPTPartnerNavigationBannerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewModelDidEndDismissTimer:(id)arg1;
- (void)viewModelDidStartDismissTimer:(id)arg1;
- (void)backgroundViewTapped;
- (void)moreOptionsButtonTapped;
- (void)dismissButtonTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (void)setupBottomStackViewWithGlueTheme:(id)arg1 theme:(id)arg2;
- (void)setupTopStackViewWithTheme:(id)arg1;
- (void)setupTextStackViewWithGlueTheme:(id)arg1 theme:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

