//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

#import "SPTNowPlayingAnimationViewProvider-Protocol.h"

@class NSNotificationCenter, NSString, SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIView;
@protocol SPContextMenuFeature, SPTNowPlayingManager, SPTNowPlayingNavigationBarModel, SPTNowPlayingTestManager, SPTPermissionsOnDemandState, SPTPodcastContextMenuProvider, SPTQueueLogger;

@interface SPTNowPlayingNavigationBarButtonsUnitProvider : SPTNowPlayingBaseUnitProvider <SPTNowPlayingAnimationViewProvider>
{
    SPTNowPlayingModel *_model;
    id <SPTNowPlayingNavigationBarModel> _navBarModel;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTTheme *_theme;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTNowPlayingTestManager> _testManager;
    NSNotificationCenter *_notificationCentre;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTPermissionsOnDemandState> _onDemandPermissionState;
}

@property(retain, nonatomic) id <SPTPermissionsOnDemandState> onDemandPermissionState; // @synthesize onDemandPermissionState=_onDemandPermissionState;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) id <SPTNowPlayingNavigationBarModel> navBarModel; // @synthesize navBarModel=_navBarModel;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarButtonsView;
- (void)createFreeTierAdUnit;
- (void)createFreeTierUnit:(_Bool)arg1;
- (void)createShowsFormatUnit;
- (void)createMusicUnit;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (id)initWithModel:(id)arg1 navigationBarModel:(id)arg2 nowPlayingManager:(id)arg3 theme:(id)arg4 logger:(id)arg5 queueLogger:(id)arg6 testManager:(id)arg7 player:(id)arg8 notificationCentre:(id)arg9 contextMenuFeature:(id)arg10 podcastContextMenuProvider:(id)arg11 onDemandPermissionState:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *spt_nowPlayingCoverArtView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarLeftButton;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarView;
@property(readonly) Class superclass;

@end

