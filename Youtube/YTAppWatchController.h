//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MDXScreenManagerObserver.h"
#import "MDXWatchViewObserver.h"
#import "YTAppViewWatchDelegate.h"
#import "YTCowatchSliceParent.h"
#import "YTMDXScreenContentControllerDelegate.h"
#import "YTRemoteCommandHandlerDelegate.h"
#import "YTResponder.h"
#import "YTWatchUIStateResponderProvider.h"

@class GIMMe, MDXWatchViewController, NSHashTable, NSString, UIView<YTAppWatchContainer>, UIViewController<YTAppRootSlice>, UIViewController<YTWatchViewControllerProtocol>, YTMDXScreenContentController, YTNGWatchLayerViewController, YTRemoteCommandHandler, YTWatchQueueController, YTWatchViewController;

@interface YTAppWatchController : NSObject <MDXScreenManagerObserver, MDXWatchViewObserver, YTCowatchSliceParent, YTMDXScreenContentControllerDelegate, YTRemoteCommandHandlerDelegate, YTWatchUIStateResponderProvider, YTAppViewWatchDelegate, YTResponder>
{
    id <YTServices> _services;
    id <MDXServices> _MDXServices;
    id <YTLayoutStyle> _layoutStyle;
    UIView<YTAppWatchContainer> *_appView;
    UIViewController<YTAppRootSlice> *_containerViewController;
    NSHashTable *_appWatchControllerObservers;
    _Bool _isAnimatingWatchViewLayout;
    long long _watchViewLayout;
    YTRemoteCommandHandler *_remoteCommandHandler;
    YTWatchViewController *_classicWatchViewController;
    YTWatchQueueController *_watchQueueController;
    id <YTWatchSlice> _cowatchSlice;
    YTMDXScreenContentController *_MDXScreenContentController;
    int _MDXWatchViewLayout;
    _Bool shouldDimPlaceholderOfflineButton;
    _Bool shouldShowPlaceholderOfflineButton;
    _Bool _hasActiveMDXSession;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTNGWatchLayerViewController *_ngWatchLayerViewController;
    MDXWatchViewController *_MDXWatchViewController;
}

@property(readonly, nonatomic) MDXWatchViewController *MDXWatchViewController; // @synthesize MDXWatchViewController=_MDXWatchViewController;
@property(readonly, nonatomic) YTNGWatchLayerViewController *ngWatchLayerViewController; // @synthesize ngWatchLayerViewController=_ngWatchLayerViewController;
@property(readonly, nonatomic) _Bool hasActiveMDXSession; // @synthesize hasActiveMDXSession=_hasActiveMDXSession;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool shouldShowPlaceholderOfflineButton; // @synthesize shouldShowPlaceholderOfflineButton;
@property(nonatomic) _Bool shouldDimPlaceholderOfflineButton; // @synthesize shouldDimPlaceholderOfflineButton;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)setMDXScreenContentController:(id)arg1;
- (id)expectedPlayerLayoutForExpandedLayout;
- (_Bool)sliceShouldControlStatusBarStyle:(id)arg1;
- (_Bool)isWatchCollapsed;
- (void)setWatchTransition:(id)arg1;
- (void)prepareForWatchTransition:(id)arg1 expectedLayout:(id)arg2;
- (_Bool)shouldUseNextGenerationWatch;
- (_Bool)isAtLeastHalfExpanded;
- (_Bool)isFullyExpanded;
- (void)expandWatchFromPlayerReferenceContainer:(id)arg1;
- (void)ngWatchScreenDidLoadWithTransition:(id)arg1 expansionState:(long long)arg2;
- (void)classicWatchScreenDidLoadWithTransition:(id)arg1 expansionState:(long long)arg2;
- (void)updateAppBottomOffset;
- (void)updateScrollsToTop;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)notifyDidStartAnimatingMDXWatchLayoutToVisible;
- (void)notifyDidStartAnimatingMDXWatchLayoutToHidden;
- (void)notifyWillTransitionToWatchPageWithTransition:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addCowatchViewController:(id)arg1;
- (void)hideCurrentWatchController;
- (_Bool)isSwipingEnabled;
- (void)handleRemoteControlEvent:(long long)arg1;
- (_Bool)canShowScrollBubble;
- (void)screenDidLoadWithTransition:(id)arg1 expansionState:(long long)arg2;
- (void)didAnimateMDXWatchViewToLayout:(int)arg1;
- (void)didStartAnimatingMDXWatchViewFromLayout:(int)arg1 toLayout:(int)arg2;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (double)bottomBarOffset;
- (void)bottomOffsetDidChange:(double)arg1;
- (void)didEndPanning;
- (void)didStartPanning;
- (void)watchViewDidPanWithOrigin:(struct CGPoint)arg1 expansionCoefficient:(double)arg2;
- (void)didAnimateFromLayout:(long long)arg1 toLayout:(long long)arg2;
- (void)didStartAnimatingFromLayout:(long long)arg1 toLayout:(long long)arg2;
- (void)startCountdownIfEndscreenActive;
- (_Bool)shouldLeadAlignToasts;
- (_Bool)shouldControlStatusBarStyle;
- (void)collapseWatchWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController<YTWatchViewControllerProtocol> *watchViewController;
- (void)pausePlayback;
- (_Bool)isWatchFullscreen;
- (_Bool)isWatchHidden;
- (id)scrollsToTopFocusedViewController;
- (void)showWatchWithTransition:(id)arg1;
- (void)hideWatchAndClearNGWQueue:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)watchContainerViewDidLoad:(id)arg1 containerViewController:(id)arg2;
- (void)setPageColorTheme:(unsigned long long)arg1;
- (void)shutdown;
- (id)init;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

