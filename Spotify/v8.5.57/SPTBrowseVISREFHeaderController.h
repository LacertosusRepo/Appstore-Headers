//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VISREFBaseHeaderController.h"

#import "VISREFHubHeaderController-Protocol.h"

@class NSString, VISREFGradientBackgroundView, VISREFHeaderView, VISREFTitleContentView;
@protocol GLUETheme, HUBComponentModel;

@interface SPTBrowseVISREFHeaderController : VISREFBaseHeaderController <VISREFHubHeaderController>
{
    double _headerHeight;
    double _navigationBarHeight;
    VISREFGradientBackgroundView *_backgroundView;
    VISREFTitleContentView *_contentView;
    id <GLUETheme> _theme;
    id <HUBComponentModel> _model;
    CDUnknownBlockType _backButtonTappedBlock;
}

+ (struct CGSize)preferredHeaderSizeForContainerViewSize:(struct CGSize)arg1;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) VISREFTitleContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) VISREFGradientBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
- (void).cxx_destruct;
- (void)setBackButton:(id)arg1;
- (void)navigationBarHeightDidChange:(double)arg1 forceUpdate:(_Bool)arg2;
- (void)configureWithModel:(id)arg1 eventHandler:(id)arg2;
- (double)minimumContentHeight;
- (void)headerView:(id)arg1 headerViewVisibleAreaChanged:(double)arg2;
@property(readonly, nonatomic) double minimumHeight;
- (void)backButtonTapped:(id)arg1;
- (double)totalHeaderHeight;
- (id)accentColorFromModel:(id)arg1;
- (id)extractNavigationBarGradientFromBackgroundGradient;
- (void)updateAssociatedColor:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 imageLoader:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) VISREFHeaderView *view;

@end

