//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BMVideoSurfaceDelegate-Protocol.h"
#import "SPTThemableView-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, SPTNowPlayingDurationViewV2, SPTNowPlayingHeadUnitView, SPTNowPlayingNavigationBarView, SPTNowPlayingNavigationButtonsView, SPTNowPlayingVideoFooterView, SPTNowPlayingVideoHeaderView, SPTTheme, UIActivityIndicatorView;
@protocol BMVideoSurface, SPTNowPlayingVideoViewV2Delegate, SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingVideoView : UIView <BMVideoSurfaceDelegate, UIGestureRecognizerDelegate, SPTThemableView>
{
    _Bool _controlsContainerHidden;
    _Bool _useAdvertisementControls;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <SPTNowPlayingVideoViewV2Delegate> _delegate;
    SPTNowPlayingNavigationBarView *_headerTitleView;
    SPTNowPlayingNavigationButtonsView *_headerButtonsView;
    SPTNowPlayingHeadUnitView *_headUnitView;
    UIView<BMVideoSurface> *_videoSurface;
    SPTNowPlayingDurationViewV2 *_durationView;
    UIActivityIndicatorView *_loadingActivityIndicatorView;
    SPTTheme *_theme;
    SPTNowPlayingVideoHeaderView *_headerView;
    SPTNowPlayingVideoFooterView *_footerView;
    UIView *_playbackControlsContainer;
    UIView *_controlsContainer;
    NSLayoutConstraint *_topBarHeightConstraint;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_playbackControlsHeightConstraint;
    NSLayoutConstraint *_headUnitHeightConstraint;
    NSLayoutConstraint *_headUnitWidthConstraint;
    NSLayoutConstraint *_durationViewHeightConstraint;
    NSLayoutConstraint *_durationViewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *durationViewWidthConstraint; // @synthesize durationViewWidthConstraint=_durationViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *durationViewHeightConstraint; // @synthesize durationViewHeightConstraint=_durationViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headUnitWidthConstraint; // @synthesize headUnitWidthConstraint=_headUnitWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headUnitHeightConstraint; // @synthesize headUnitHeightConstraint=_headUnitHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *playbackControlsHeightConstraint; // @synthesize playbackControlsHeightConstraint=_playbackControlsHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topBarHeightConstraint; // @synthesize topBarHeightConstraint=_topBarHeightConstraint;
@property(readonly, nonatomic) UIView *controlsContainer; // @synthesize controlsContainer=_controlsContainer;
@property(readonly, nonatomic) UIView *playbackControlsContainer; // @synthesize playbackControlsContainer=_playbackControlsContainer;
@property(readonly, nonatomic) SPTNowPlayingVideoFooterView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) SPTNowPlayingVideoHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool useAdvertisementControls; // @synthesize useAdvertisementControls=_useAdvertisementControls;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingActivityIndicatorView; // @synthesize loadingActivityIndicatorView=_loadingActivityIndicatorView;
@property(readonly, nonatomic) SPTNowPlayingDurationViewV2 *durationView; // @synthesize durationView=_durationView;
@property(readonly, nonatomic) UIView<BMVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(readonly, nonatomic) SPTNowPlayingHeadUnitView *headUnitView; // @synthesize headUnitView=_headUnitView;
@property(readonly, nonatomic) SPTNowPlayingNavigationButtonsView *headerButtonsView; // @synthesize headerButtonsView=_headerButtonsView;
@property(readonly, nonatomic) SPTNowPlayingNavigationBarView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(nonatomic) __weak id <SPTNowPlayingVideoViewV2Delegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)videoSurfaceDidDetachVideo:(id)arg1;
- (void)videoSurfaceDidAttachVideo:(id)arg1;
- (id)buttonWithIcon:(long long)arg1 iconSize:(struct CGSize)arg2;
- (void)visit:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)hideAllViews:(_Bool)arg1;
- (void)hideControls:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleControlsVisibility;
- (void)handleTapGesture:(id)arg1;
- (void)setupConstraints;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 videoSurface:(id)arg3 durationViewDataSource:(id)arg4 headUnitView:(id)arg5 animationView:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

