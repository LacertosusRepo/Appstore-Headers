//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "YTGraftingViewController.h"
#import "YTReelWatchInteractionObserver.h"
#import "YTReelWatchQueueObserver.h"
#import "YTRendererController.h"
#import "YTSubscribeSwitchControllerDelegate.h"

@class MPVolumeView, NSDate, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, YTCSIReelWatchAction, YTICommand, YTIMenuRenderer, YTIReelPlayerHeaderRenderer, YTIReelVodLinkRenderer, YTIVideoReportingSupportedRenderers, YTImageService, YTInteractionLoggingProxyButton, YTReelWatchCollectionViewController, YTReelWatchProgressViewController, YTReelWatchQueue, YTSubscribeSwitchController, YTThumbnailController;

@interface YTReelContentViewController : YTStyledViewController <YTGraftingViewController, YTReelWatchInteractionObserver, YTReelWatchQueueObserver, YTSubscribeSwitchControllerDelegate, UIGestureRecognizerDelegate, YTRendererController>
{
    YTICommand *_navigationEndpoint;
    UITapGestureRecognizer *_tapRecognizer;
    UITapGestureRecognizer *_headerTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    YTImageService *_imageService;
    MPVolumeView *_hiddenVolumeView;
    YTThumbnailController *_vodThumbnailController;
    YTReelWatchCollectionViewController *_watchCollectionViewController;
    YTReelWatchProgressViewController *_watchProgressViewController;
    YTReelWatchQueue *_watchQueue;
    YTSubscribeSwitchController *_subscribeSwitchController;
    _Bool _pendingPlayerOverlayUpdate;
    unsigned long long _lastWatchControllerIndex;
    _Bool _modalVisible;
    YTICommand *_activeNavEndpoint;
    YTIMenuRenderer *_menuRenderer;
    YTIVideoReportingSupportedRenderers *_videoReportingRenderer;
    YTIReelVodLinkRenderer *_vodLinkRenderer;
    YTIReelPlayerHeaderRenderer *_headerRenderer;
    YTInteractionLoggingProxyButton *_autoplayItemButton;
    YTInteractionLoggingProxyButton *_autoDismissButton;
    YTInteractionLoggingProxyButton *_nextItemButton;
    YTInteractionLoggingProxyButton *_prevItemButton;
    YTCSIReelWatchAction *_reelWatchActionLatency;
    int _latencyOperationType;
    NSDate *_loadingBaseline;
    NSString *_lastCPN;
    _Bool _userDismissed;
    _Bool _active;
    id <YTReelContentViewControllerDelegate> _delegate;
    NSDate *_loadDate;
    YTInteractionLoggingProxyButton *_parentButton;
}

@property(retain, nonatomic) YTInteractionLoggingProxyButton *parentButton; // @synthesize parentButton=_parentButton;
@property(retain, nonatomic) NSDate *loadDate; // @synthesize loadDate=_loadDate;
@property(nonatomic) __weak id <YTReelContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)tappedVodLink:(id)arg1;
- (void)clearPlaybackView;
- (id)wrappedMenuResponderEventWithResume:(id)arg1;
- (void)handleKeyWindowChangeNotification:(id)arg1;
- (void)didTapOverflowButton:(id)arg1;
- (void)didTapCloseButton;
- (void)didLongPress:(id)arg1;
- (id)contentView;
- (void)prefetchAvatarWithThumbnailDetails:(id)arg1;
- (void)updateHeaderWithRenderer:(id)arg1;
- (void)updateMenuWithMenu:(id)arg1;
- (void)updateWatchViewCountWithRenderer:(id)arg1;
- (void)updateSubscribeButtonWithRenderer:(id)arg1;
- (void)updateVodLinkViewWithRenderer:(id)arg1;
- (_Bool)handleNavigationEndpointResponderEvent:(id)arg1;
- (id)activeReelWatchController;
- (void)setUpResponderEventHandlers;
- (void)setUpNotifications;
- (void)setUpInteractionLoggingForWatchController:(id)arg1 parentButton:(id)arg2;
- (void)setUpInteractionLoggingForResponse:(id)arg1;
- (void)setUpCommonInteractionLogging;
- (void)didTapStatsButton;
- (void)didTapHeader:(id)arg1;
- (void)didTapNext;
- (void)didTapPrevious;
- (void)didTap:(id)arg1;
- (void)announceCurrentReelProgress;
- (_Bool)accessibilityPerformEscape;
- (id)model;
- (void)loadWithModel:(id)arg1;
- (void)unsubscribeDialogDidDisappear;
- (void)unsubscribeDialogDidAppear;
- (void)watchController:(id)arg1 playerStateDidChange:(long long)arg2 forIndex:(unsigned long long)arg3;
- (void)watchController:(id)arg1 didSetReelItemWatchResponse:(id)arg2 forIndex:(unsigned long long)arg3;
- (void)updateOverlayRenderer:(id)arg1;
- (void)currentIndexDidChangeFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)reelDidLoadAtIndex:(unsigned long long)arg1;
- (void)reelDidSkipFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)reelDidAutoPlayIndex:(unsigned long long)arg1;
- (void)reelDidFinish;
- (id)navEndpoint;
- (void)setInitialLatencyOperationType:(int)arg1;
- (void)didAutoDismiss;
- (id)didSwipeToPreviousReel;
- (id)didSwipeToNextReel;
- (void)didDismissWithSwipeDown;
@property(readonly, nonatomic) YTInteractionLoggingProxyButton *nextItemButton;
@property(readonly, nonatomic) YTInteractionLoggingProxyButton *prevItemButton;
@property(readonly, nonatomic) YTInteractionLoggingProxyButton *autoplayItemButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)hidePlayer;
- (void)startPlayback;
- (void)restartPlayback;
- (void)suspendPlayback;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

