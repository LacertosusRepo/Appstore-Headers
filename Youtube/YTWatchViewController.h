//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTMultiSizeViewController.h"

#import "MDXDiscoveryInterruptDelegate.h"
#import "YTConnectionBarControllerObserver.h"
#import "YTConnectionStatusControllerObserver.h"
#import "YTFullscreenVideoViewControllerPresenter.h"
#import "YTGraftingViewController.h"
#import "YTResponder.h"
#import "YTSystemNotificationsObserver.h"
#import "YTVideoFullscreenDirectionResponderProvider.h"
#import "YTWatchControllerDelegate.h"
#import "YTWatchViewControllerProtocol.h"
#import "YTWatchViewPageStyleDelegate.h"

@class GIMMe, NSString, UIViewController, UIViewController<YTWatchPlayerViewControllerDelegate>, YTFullscreenVideoViewController, YTICommand, YTInteractionLoggingProxyButton, YTPageStyleController, YTStickyVarispeedController, YTWatchNextResultsViewController, YTWatchTransition, YTWatchView;

@interface YTWatchViewController : YTMultiSizeViewController <MDXDiscoveryInterruptDelegate, YTConnectionBarControllerObserver, YTConnectionStatusControllerObserver, YTWatchViewPageStyleDelegate, YTWatchControllerDelegate, YTFullscreenVideoViewControllerPresenter, YTSystemNotificationsObserver, YTVideoFullscreenDirectionResponderProvider, YTGraftingViewController, YTResponder, YTWatchViewControllerProtocol>
{
    id <YTWatchNextResultsControllerProtocol> _watchNextResultsController;
    long long _watchViewLayout;
    double _expansionCoefficient;
    UIViewController *_watchNextViewController;
    YTFullscreenVideoViewController *_fullscreenVideoVC;
    _Bool _isKeyboardVisible;
    id <YTPlaylistPanelControllerUIDelegate> _playlistPanelControllerUIDelegate;
    YTWatchNextResultsViewController *_descriptionDetailsViewController;
    id <YTWatchControllerProtocol> _watchController;
    id <YTVideoPlayerOverlayConfig> _videoPlayerOverlayConfig;
    YTICommand *_watchTransitionNavigationEndpoint;
    YTInteractionLoggingProxyButton *_miniPlayerDismissLoggingButton;
    _Bool _pauseAfterOfflineAutoRefresh;
    long long _lastPageStyle;
    YTPageStyleController *_pageStyleController;
    _Bool _transitioningWatchViewLayout;
    _Bool _shouldShowStatusBar;
    id <YTResponder> _parentResponder;
    YTWatchTransition *_watchTransition;
    YTWatchView *_watchView;
    GIMMe *_gimme;
    id <MDXServices> _MDXServices;
    UIViewController<YTWatchPlayerViewControllerDelegate> *_playerViewController;
}

@property(nonatomic) _Bool shouldShowStatusBar; // @synthesize shouldShowStatusBar=_shouldShowStatusBar;
@property(nonatomic) __weak UIViewController<YTWatchPlayerViewControllerDelegate> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) __weak id <MDXServices> MDXServices; // @synthesize MDXServices=_MDXServices;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic, getter=isTransitioningWatchViewLayout) _Bool transitioningWatchViewLayout; // @synthesize transitioningWatchViewLayout=_transitioningWatchViewLayout;
@property(retain, nonatomic) YTWatchTransition *watchTransition; // @synthesize watchTransition=_watchTransition;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)showOfflineDisabledActionIfNeeded;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidChangeDeviceOrientation;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (struct CGRect)playerRenderingViewCustomFrameForFullscreenSize:(struct CGSize)arg1;
- (void)fullScreenVideoViewControllerDidDismiss;
- (struct CGRect)frameForDismissedPlayerView;
- (_Bool)shouldPersistFullscreenEnterButton;
- (void)handleNavigationEndpointResponderEvent:(id)arg1;
- (_Bool)isMDXActive;
- (void)voiceSearchDialogDidPresent:(id)arg1;
- (double)expansionCoefficientForLayout:(long long)arg1;
- (void)setWatchViewLayout:(long long)arg1;
- (void)didCreateWatchNextViewController:(id)arg1;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (id)navEndpoint;
- (int)playerViewLayoutFromWatchViewLayout:(long long)arg1;
- (unsigned long long)allowedFullScreenOrientations;
- (_Bool)hasNoOverlaysPresent;
- (void)hideFullScreenWithExpandWatchView:(_Bool)arg1;
- (void)hideFullScreen;
- (void)presentFullScreen;
- (void)layoutViewForOrientation:(long long)arg1;
- (_Bool)shouldRotateForLayout:(long long)arg1;
- (void)updatePlayerViewLayout;
- (id)fullscreenVideoVC;
- (void)connectionStatusDidChange:(_Bool)arg1;
- (void)connectionBarDisplayStatusDidChange;
- (void)resetPlayerViewController;
- (void)setPlaylistPanel:(id)arg1 playlistUIDelegate:(id)arg2 watchNextResults:(id)arg3 descriptionDetails:(id)arg4;
- (_Bool)isFullScreen;
- (_Bool)shouldShowFullScreenForCurrentOrientation;
- (void)dismissFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)hideWatch;
- (void)loadCompanionAd:(id)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerStateDidChange;
- (_Bool)isWatchFullScreen;
- (_Bool)isWatchExpanded;
- (_Bool)isWatchHidden;
- (_Bool)isCollapsed;
- (id)focusedViewController;
- (_Bool)shouldReloadVideoForWatchTransition:(id)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)reload;
- (void)prepareForWatchTransition:(id)arg1 expectedLayout:(id)arg2;
- (void)clearNavEndpoint;
- (_Bool)MDXShouldInterruptDiscovery;
@property(readonly, nonatomic) long long pageStyle;
- (_Bool)isFullScreenEnabledForPlaybackControllerState:(int)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)didStartAnimatingFromLayout:(long long)arg1 toLayout:(long long)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldControlStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) YTWatchView *watchView; // @synthesize watchView=_watchView;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) YTStickyVarispeedController *stickyVarispeedController;
@property(readonly) Class superclass;

@end

