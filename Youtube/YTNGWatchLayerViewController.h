//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTMultiSizeViewController.h"

#import "MDXScreenManagerObserver.h"
#import "MDXScreenSessionObserver.h"
#import "YTGraftingViewController.h"
#import "YTHintControllerObserver.h"
#import "YTLayoutObserver.h"
#import "YTNGWatchFlowViewControllerDelegate.h"
#import "YTNGWatchLayerViewAnimationDelegate.h"
#import "YTNGWatchMiniBarViewControllerDelegate.h"
#import "YTNGWatchQueueObserver.h"
#import "YTNGWatchQueueResponderProvider.h"
#import "YTNGWatchUIStateResponderProvider.h"
#import "YTPageStyleProvider.h"
#import "YTResponder.h"
#import "YTSystemNotificationsObserver.h"
#import "YTWatchViewControllerProtocol.h"

@class GIMMe, MDXScreenSession, NSString, UIViewController<YTWatchPlayerViewControllerDelegate>, YTDownwardPanInteractionController, YTFullscreenDismissAnimator, YTFullscreenPresentAnimator, YTICommand, YTIWatchNextResponse, YTInteractionLoggingProxyButton, YTNGWatchCollectionViewController, YTNGWatchFlowViewController, YTNGWatchFullscreenViewController, YTNGWatchLayerView, YTNGWatchMiniBarViewController, YTNGWatchQueue, YTPageStyleController, YTTransitionManager, YTUpwardPanInteractionController, YTWatchTransition;

@interface YTNGWatchLayerViewController : YTMultiSizeViewController <YTHintControllerObserver, YTLayoutObserver, YTNGWatchFlowViewControllerDelegate, YTNGWatchLayerViewAnimationDelegate, YTNGWatchQueueResponderProvider, YTPageStyleProvider, YTSystemNotificationsObserver, MDXScreenManagerObserver, MDXScreenSessionObserver, YTGraftingViewController, YTNGWatchMiniBarViewControllerDelegate, YTNGWatchQueueObserver, YTNGWatchUIStateResponderProvider, YTResponder, YTWatchViewControllerProtocol>
{
    YTPageStyleController *_pageStyleController;
    YTNGWatchMiniBarViewController *_miniBarViewController;
    YTNGWatchFullscreenViewController *_fullscreenViewController;
    YTNGWatchCollectionViewController *_watchCollectionViewController;
    _Bool _swipingEnabled;
    YTIWatchNextResponse *_lastWatchNextResponse;
    id <YTLayoutStyle> _layoutStyle;
    id <YTVideoPlayerOverlayConfig> _videoPlayerOverlayConfig;
    id <YTNGWatchQueueProtocol> _watchQueueManager;
    YTTransitionManager *_fullscreenTransitionManager;
    long long _playerViewControllerIndex;
    _Bool _shouldShowStatusBar;
    YTICommand *_watchTransitionNavigationEndpoint;
    _Bool _applicationIsInactive;
    YTFullscreenDismissAnimator *_fullscreenDismissAnimator;
    YTFullscreenPresentAnimator *_fullscreenPresentAnimator;
    YTDownwardPanInteractionController *_presentFullscreenInteraction;
    YTUpwardPanInteractionController *_dismissFullscreenInteraction;
    YTInteractionLoggingProxyButton *_miniPlayerDismissLoggingButton;
    YTInteractionLoggingProxyButton *_miniPlayerExpandLoggingButton;
    YTInteractionLoggingProxyButton *_fullscreenOpenByRotateButton;
    YTInteractionLoggingProxyButton *_watchMinimizeLoggingButton;
    int _miniPlayerDismissLoggingButtonGestureType;
    int _miniPlayerExpandLoggingButtonGestureType;
    int _watchMinimizeLoggingButtonGestureType;
    double _lastWatchMediaTime;
    MDXScreenSession *_screenSession;
    _Bool currentlySwiping;
    _Bool swipingAtBoundary;
    _Bool currentlyPresentingFullscreen;
    _Bool shouldShowPlaceholderOfflineButton;
    _Bool shouldDimPlaceholderOfflineButton;
    _Bool shouldUpdateWatchNextResponseLayoutOnAppearance;
    _Bool playlistPanelExpanded;
    _Bool _hideWatchOnCollapse;
    _Bool _mdxEnabled;
    id <YTResponder> _parentResponder;
    YTWatchTransition *_watchTransition;
    GIMMe *_gimme;
    long long _watchViewLayout;
    UIViewController<YTWatchPlayerViewControllerDelegate> *_playerViewController;
    YTNGWatchQueue *_watchQueue;
    YTNGWatchFlowViewController *_watchFlowViewController;
}

@property(retain, nonatomic) YTNGWatchFlowViewController *watchFlowViewController; // @synthesize watchFlowViewController=_watchFlowViewController;
@property(readonly, nonatomic) YTNGWatchQueue *watchQueue; // @synthesize watchQueue=_watchQueue;
@property(nonatomic) _Bool mdxEnabled; // @synthesize mdxEnabled=_mdxEnabled;
@property(nonatomic) _Bool hideWatchOnCollapse; // @synthesize hideWatchOnCollapse=_hideWatchOnCollapse;
@property(readonly, nonatomic) __weak UIViewController<YTWatchPlayerViewControllerDelegate> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(readonly, nonatomic) long long watchViewLayout; // @synthesize watchViewLayout=_watchViewLayout;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTWatchTransition *watchTransition; // @synthesize watchTransition=_watchTransition;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic, getter=isPlaylistPanelExpanded) _Bool playlistPanelExpanded; // @synthesize playlistPanelExpanded;
@property(nonatomic) _Bool shouldUpdateWatchNextResponseLayoutOnAppearance; // @synthesize shouldUpdateWatchNextResponseLayoutOnAppearance;
@property(nonatomic) _Bool shouldDimPlaceholderOfflineButton; // @synthesize shouldDimPlaceholderOfflineButton;
@property(nonatomic) _Bool shouldShowPlaceholderOfflineButton; // @synthesize shouldShowPlaceholderOfflineButton;
@property(nonatomic, getter=isCurrentlyPresentingFullscreen) _Bool currentlyPresentingFullscreen; // @synthesize currentlyPresentingFullscreen;
@property(nonatomic, getter=isSwipingAtBoundary) _Bool swipingAtBoundary; // @synthesize swipingAtBoundary;
@property(nonatomic, getter=isCurrentlySwiping) _Bool currentlySwiping; // @synthesize currentlySwiping;
- (void).cxx_destruct;
- (_Bool)shouldPreActivateExpandedWatchPageForTransition:(id)arg1;
- (void)NGWatchMiniBarAppBottomOffsetDidChange:(double)arg1;
@property(readonly, nonatomic) long long pageStyle;
- (void)screenSession:(id)arg1 didReceiveWatchNextResponse:(id)arg2;
- (void)screenSession:(id)arg1 videoDidChangeToVideoID:(id)arg2 listID:(id)arg3 videoIndex:(unsigned long long)arg4;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (id)navEndpoint;
- (void)hideWatchAndClearQueue:(_Bool)arg1;
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
- (double)flexiblePlayerHeight;
- (id)watchCollectionViewController;
- (long long)currentWatchViewLayout;
- (void)didAddWatchFlowCollapseRecognizer:(id)arg1;
- (void)didCollapseWatchFlowWithGestureType:(int)arg1;
- (void)didExpandWatchFlowWithGestureType:(int)arg1;
- (void)willCollapseWatchFlow;
- (void)willExpandWatchFlow;
- (void)didHandleGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)watchFlowDismissalPreAnimationBlock;
- (void)watchFlowPresentationPreAnimationBlock;
- (double)headerHeight;
- (id)playerSnapshotView;
- (_Bool)isSpringyEnabled;
- (_Bool)isIPadVideoFlowEnabled;
- (void)reattachLoggingButtonsIfNecessary;
- (void)updateLoggingForLayout:(long long)arg1;
- (void)didTransitionToMiniPlayer;
- (void)clearQueue;
- (void)initializeFullScreenTransition;
- (void)setupWatchPageTransitions;
- (_Bool)canCollapseWatchFlow;
- (_Bool)canExpandWatchFlow;
- (_Bool)canDismissFullScreen;
- (_Bool)canPresentFullScreen;
- (_Bool)shouldDismissFullScreen;
- (_Bool)shouldPresentFullScreen;
- (void)collapseWatchFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)expandWatchFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissFullScreenAnimated:(_Bool)arg1 miniBarTransition:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentFullScreenAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handlePossibleInAppReviewPrompt;
- (void)voiceSearchDialogDidPresent:(id)arg1;
- (void)showMiniBarSwipeDownHint;
- (void)setSwipingEnabled:(_Bool)arg1;
- (double)watchFlowStatusBarHeight;
- (void)minimizeWatchPage;
- (_Bool)shouldLeadAlignToasts;
- (void)setStatusBarBackgroundVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (double)statusBarHeight;
- (void)collapseWatchWithCompletion:(CDUnknownBlockType)arg1;
- (void)expandWatchFromPlayerReferenceContainer:(id)arg1;
- (void)moveMiniBarToSelf;
- (_Bool)isSwipingEnabled;
- (long long)navigationListCurrentIndex;
- (id)upNextEntries;
- (id)navigationListEntries;
- (_Bool)isPlayerAlignmentNonStandard;
- (void)didChangeMiniPlayerLayout:(long long)arg1;
- (void)setWatchMiniBarGradientAlpha:(double)arg1;
- (void)expandWatch;
- (void)didDismissMiniBar;
- (void)willDismissMiniBarWithGestureType:(int)arg1;
- (id)watchTransitionNavigationEndpoint;
- (void)appWillResignActive:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidChangeDeviceOrientation;
- (void)newScreenLoggingStarted;
- (void)updateCurrentWatchTransitionNavigationEndpoint:(id)arg1;
- (_Bool)isFullScreen;
- (void)showSmallScreen;
- (void)showFullScreen;
- (void)didClearWatchQueue;
- (void)didSetPlayerViewController:(id)arg1 forIndex:(long long)arg2;
- (void)didSetCurrentIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 withInPlaceUpdate:(_Bool)arg3;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)didReceiveWatchNextResponse:(id)arg1 forIndex:(long long)arg2;
- (void)didDismissHintWithID:(id)arg1;
- (void)willAnimateTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldControlStatusBarStyle;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)currentWatchViewController;
@property(readonly, nonatomic) YTNGWatchLayerView *watchView;
- (void)setWatchViewLayout:(long long)arg1;
- (void)setPageColorTheme:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

