//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

#import "SPTNowPlayingAnimationViewProvider-Protocol.h"

@class NSNotificationCenter, NSString, SPTNowPlayingEntityDecorationController, SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIView;
@protocol SPTLinkDispatcher, SPTNowPlayingNavigationBarModel, SPTNowPlayingTestManager, SPTNowPlayingTitleViewPresenter, SPTNowPlayingTitleViewPresenterRegistry, SPTQueueLogger, SPTSleepTimerController;

@interface SPTNowPlayingNavigationBarUnitProvider : SPTNowPlayingBaseUnitProvider <SPTNowPlayingAnimationViewProvider>
{
    id <SPTNowPlayingNavigationBarModel> _navBarModel;
    SPTTheme *_theme;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTNowPlayingTitleViewPresenterRegistry> _titleViewPresenterRegistry;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    NSNotificationCenter *_notificationCentre;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingModel *_nowPlayingModel;
    id <SPTNowPlayingTitleViewPresenter> _podcastTitleViewPresenter;
    id <SPTSleepTimerController> _sleepTimerController;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(readonly, nonatomic) id <SPTNowPlayingTitleViewPresenter> podcastTitleViewPresenter; // @synthesize podcastTitleViewPresenter=_podcastTitleViewPresenter;
@property(readonly, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSNotificationCenter *notificationCentre; // @synthesize notificationCentre=_notificationCentre;
@property(readonly, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(readonly, nonatomic) id <SPTNowPlayingTitleViewPresenterRegistry> titleViewPresenterRegistry; // @synthesize titleViewPresenterRegistry=_titleViewPresenterRegistry;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingNavigationBarModel> navBarModel; // @synthesize navBarModel=_navBarModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarView;
- (void)createInterruptionsUnit;
- (void)createShowsFormatUnit;
- (void)createMusicNavigationBarUnit;
- (void)createFreeTierAdNavigationBarUnit;
- (id)initWithPlayer:(id)arg1 navigationBarModel:(id)arg2 theme:(id)arg3 logger:(id)arg4 queueLogger:(id)arg5 titleViewPresenterRegistry:(id)arg6 entityDecorationController:(id)arg7 notificationCentre:(id)arg8 testManager:(id)arg9 nowPlayingManager:(id)arg10 nowPlayingModel:(id)arg11 podcastTitleViewPresenter:(id)arg12 sleepTimerController:(id)arg13 linkDispatcher:(id)arg14;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *spt_nowPlayingCoverArtView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarButtonsView;
@property(readonly, nonatomic) UIView *spt_nowPlayingNavigationBarLeftButton;
@property(readonly) Class superclass;

@end

