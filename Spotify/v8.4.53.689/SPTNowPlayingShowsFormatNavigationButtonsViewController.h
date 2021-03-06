//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingAnimationViewProvider.h"
#import "SPTNowPlayingContainerIdleMonitorObserver.h"
#import "SPTNowPlayingModelObserver.h"

@class NSNotificationCenter, NSString, SPTNowPlayingLogger, SPTNowPlayingModel, SPTNowPlayingShowsFormatNavigationButtonsView, SPTNowPlayingTestManager, SPTTheme, UIView;

@interface SPTNowPlayingShowsFormatNavigationButtonsViewController : UIViewController <SPTNowPlayingAnimationViewProvider, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingModelObserver>
{
    SPTTheme *_theme;
    id <SPTNowPlayingManager> _nowPlayingManager;
    NSNotificationCenter *_notificationCentre;
    SPTNowPlayingTestManager *_testManager;
    id <SPContextMenuFeature> _contextMenuFeature;
    SPTNowPlayingModel *_nowPlayingModel;
    SPTNowPlayingLogger *_logger;
}

@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)updateLeftBarButton;
- (void)themeSettingsDidChange;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarButtonsView;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)nowPlayingModel:(id)arg1 toggleModeDidChange:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)queueButtonTapped;
- (void)shareButtonTapped;
- (void)closeButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithModel:(id)arg1 nowPlayingManager:(id)arg2 theme:(id)arg3 notificationCentre:(id)arg4 contextMenuFeature:(id)arg5 testManager:(id)arg6 logger:(id)arg7;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *spt_nowPlayingCoverArtView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarLeftButton;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarView;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingShowsFormatNavigationButtonsView *view; // @dynamic view;

@end

