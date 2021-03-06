//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_SPTHubViewController.h"

#import "EXP_HUBImageLoaderDelegate-Protocol.h"
#import "EXP_HUBViewContentOffsetObserver-Protocol.h"
#import "SPTHomeColorInterpolatorDelegate-Protocol.h"
#import "SPTHomeFeatureViewModelProviderDelegate-Protocol.h"

@class EXP_SPTHubViewModelProvider, NSString, SPTHomeBarButtonManager, SPTHomeColorInterpolator, SPTHomeUIGradientView, SPTProgressView, SPTTheme, UIView;
@protocol EXP_HUBImageLoader, EXP_SPTHubLoadingLogger, SPTFeedFeatureFlagExposureLogger, SPTFeedHeartBeatManager;

@interface SPTHomeHubsRendererViewController : EXP_SPTHubViewController <EXP_HUBViewContentOffsetObserver, SPTHomeColorInterpolatorDelegate, EXP_HUBImageLoaderDelegate, SPTHomeFeatureViewModelProviderDelegate>
{
    UIView *_statusBarBackgroundView;
    EXP_SPTHubViewModelProvider *_viewModelProvider;
    id <SPTFeedHeartBeatManager> _feedHeartbeatManager;
    id <SPTFeedFeatureFlagExposureLogger> _feedFeatureFlagExposureLogger;
    SPTHomeUIGradientView *_gradientView;
    SPTHomeColorInterpolator *_colorInterpolator;
    id <EXP_HUBImageLoader> _imageLoader;
    SPTTheme *_theme;
    SPTHomeBarButtonManager *_barButtonManager;
    id <EXP_SPTHubLoadingLogger> _loadingLogger;
    SPTProgressView *_loadingIndicator;
}

@property(retain, nonatomic) SPTProgressView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(readonly, nonatomic) id <EXP_SPTHubLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(retain, nonatomic) SPTHomeBarButtonManager *barButtonManager; // @synthesize barButtonManager=_barButtonManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <EXP_HUBImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) SPTHomeColorInterpolator *colorInterpolator; // @synthesize colorInterpolator=_colorInterpolator;
@property(retain, nonatomic) SPTHomeUIGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) id <SPTFeedFeatureFlagExposureLogger> feedFeatureFlagExposureLogger; // @synthesize feedFeatureFlagExposureLogger=_feedFeatureFlagExposureLogger;
@property(retain, nonatomic) id <SPTFeedHeartBeatManager> feedHeartbeatManager; // @synthesize feedHeartbeatManager=_feedHeartbeatManager;
@property(readonly, nonatomic) EXP_SPTHubViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void).cxx_destruct;
- (id)colorFromSwatch:(id)arg1 minPopulation:(unsigned long long)arg2;
- (id)extractColorFromImage:(id)arg1;
- (id)gradientImageURIFromViewModel:(id)arg1;
- (void)updateGradientViewAlpha;
- (void)updateGradientWithColor:(id)arg1;
- (void)loadGradientView;
- (void)updateStatusBarBackgroundViewState;
- (void)updateNavigationBarState;
- (void)updateNavigationItemTitle;
- (struct CGRect)statusBarFrame;
- (void)updateFeedIcon:(_Bool)arg1;
- (void)fetchFeedUpdates;
- (void)imageLoader:(id)arg1 didFailLoadingImageForURL:(id)arg2 error:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3;
- (void)colorInterpolatorDidChangeColor:(id)arg1;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)sp_updateContentInsets;
- (void)viewModelProviderDidLoadRemoteViewModel:(id)arg1 withError:(id)arg2;
- (void)viewModelProviderWillLoadRemoteViewModel:(id)arg1;
- (void)viewModelProviderDidLoadCachedViewModel:(id)arg1 withError:(id)arg2;
- (void)viewModelProviderWillLoadCachedViewModel:(id)arg1;
- (void)viewModelDidLoad:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setPreferredNavigationBarState:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *statusBarBackgroundView; // @synthesize statusBarBackgroundView=_statusBarBackgroundView;
- (id)initWithTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 feedHeartbeatManager:(id)arg11 feedFeatureFlagExposureLogger:(id)arg12 barButtonManager:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

