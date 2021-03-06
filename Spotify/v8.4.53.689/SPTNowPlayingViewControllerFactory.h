//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, SPTNowPlayingContentUnitProvider, SPTNowPlayingContentViewProvider, SPTNowPlayingDeviceOrientationManager, SPTNowPlayingDurationUnitProvider, SPTNowPlayingFooterUnitProvider, SPTNowPlayingHeadUnitProvider, SPTNowPlayingInformationUnitProvider, SPTNowPlayingLogger, SPTNowPlayingModeResolver, SPTNowPlayingModel, SPTNowPlayingNavigationBarButtonsUnitProvider, SPTNowPlayingNavigationBarModel, SPTNowPlayingOpenGLManager, SPTNowPlayingShowsFormatDecorationUnitProvider, SPTNowPlayingTestManager, SPTTheme;

@interface SPTNowPlayingViewControllerFactory : NSObject
{
    SPTNowPlayingHeadUnitProvider *_nowPlayingViewHeadUnitProvider;
    SPTNowPlayingContentUnitProvider *_nowPlayingViewContentUnitProvider;
    SPTNowPlayingInformationUnitProvider *_nowPlayingViewInformationUnitProvider;
    SPTNowPlayingDurationUnitProvider *_nowPlayingViewDurationUnitProvider;
    SPTNowPlayingFooterUnitProvider *_nowPlayingViewFooterUnitProvider;
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTNowPlayingModel *_nowPlayingModel;
    SPTNowPlayingNavigationBarModel *_navigationBarModel;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    SPTNowPlayingTestManager *_testManager;
    id <SPTNowPlayingTitleViewPresenterRegistry> _titleViewPresenterRegistry;
    SPTNowPlayingDeviceOrientationManager *_deviceOrientationManager;
    SPTNowPlayingShowsFormatDecorationUnitProvider *_showsFormatDecorationUnitProvider;
    SPTNowPlayingNavigationBarButtonsUnitProvider *_navigationBarButtonsUnitProvider;
    SPTNowPlayingOpenGLManager *_openGLManager;
    SPTNowPlayingModeResolver *_modeResolver;
    SPTNowPlayingContentViewProvider *_contentViewProvider;
    SPTNowPlayingHeadUnitProvider *_queueHeadUnitProvider;
    SPTNowPlayingNavigationBarButtonsUnitProvider *_queueNavigationBarButtonsUnitProvider;
    id <SPTQueueViewControllerDelegate> _queueViewControllerDelegate;
    id <SPTQueueService> _queueService;
    id <SPTPlayer> _player;
    NSNotificationCenter *_notificationCenter;
    SPTTheme *_theme;
    id <SPTShareFeature> _shareFeature;
    id <SPTQueueInteractor> _queueInteractor;
    id <SPTAdsManager> _adsManager;
}

@property(readonly, nonatomic) id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(readonly, nonatomic) id <SPTQueueInteractor> queueInteractor; // @synthesize queueInteractor=_queueInteractor;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) __weak id <SPTQueueService> queueService; // @synthesize queueService=_queueService;
@property(readonly, nonatomic) __weak id <SPTQueueViewControllerDelegate> queueViewControllerDelegate; // @synthesize queueViewControllerDelegate=_queueViewControllerDelegate;
@property(readonly, nonatomic) SPTNowPlayingNavigationBarButtonsUnitProvider *queueNavigationBarButtonsUnitProvider; // @synthesize queueNavigationBarButtonsUnitProvider=_queueNavigationBarButtonsUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingHeadUnitProvider *queueHeadUnitProvider; // @synthesize queueHeadUnitProvider=_queueHeadUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingContentViewProvider *contentViewProvider; // @synthesize contentViewProvider=_contentViewProvider;
@property(readonly, nonatomic) SPTNowPlayingModeResolver *modeResolver; // @synthesize modeResolver=_modeResolver;
@property(readonly, nonatomic) SPTNowPlayingOpenGLManager *openGLManager; // @synthesize openGLManager=_openGLManager;
@property(readonly, nonatomic) SPTNowPlayingNavigationBarButtonsUnitProvider *navigationBarButtonsUnitProvider; // @synthesize navigationBarButtonsUnitProvider=_navigationBarButtonsUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingShowsFormatDecorationUnitProvider *showsFormatDecorationUnitProvider; // @synthesize showsFormatDecorationUnitProvider=_showsFormatDecorationUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(readonly, nonatomic) id <SPTNowPlayingTitleViewPresenterRegistry> titleViewPresenterRegistry; // @synthesize titleViewPresenterRegistry=_titleViewPresenterRegistry;
@property(readonly, nonatomic) SPTNowPlayingTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNowPlayingNavigationBarModel *navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(readonly, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPTNowPlayingFooterUnitProvider *nowPlayingViewFooterUnitProvider; // @synthesize nowPlayingViewFooterUnitProvider=_nowPlayingViewFooterUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingDurationUnitProvider *nowPlayingViewDurationUnitProvider; // @synthesize nowPlayingViewDurationUnitProvider=_nowPlayingViewDurationUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingInformationUnitProvider *nowPlayingViewInformationUnitProvider; // @synthesize nowPlayingViewInformationUnitProvider=_nowPlayingViewInformationUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingContentUnitProvider *nowPlayingViewContentUnitProvider; // @synthesize nowPlayingViewContentUnitProvider=_nowPlayingViewContentUnitProvider;
@property(readonly, nonatomic) SPTNowPlayingHeadUnitProvider *nowPlayingViewHeadUnitProvider; // @synthesize nowPlayingViewHeadUnitProvider=_nowPlayingViewHeadUnitProvider;
- (void).cxx_destruct;
- (id)provideTitleViewPresenterRegistry;
- (id)provideNavigationBarUnitProvider;
- (id)createQueueViewController;
- (id)createNowPlayingViewControllerV2;
- (id)createNowPlayingViewControllerV1;
- (id)createNowPlayingViewController;
- (id)initWithNowPlayingModel:(id)arg1 navigationBarModel:(id)arg2 nowPlayingViewHeadUnitProvider:(id)arg3 nowPlayingViewContentUnitProvider:(id)arg4 nowPlayingViewInformationUnitProvider:(id)arg5 nowPlayingViewDurationUnitProvider:(id)arg6 nowPlayingViewFooterUnitProvider:(id)arg7 showsFormatDecorationUnitProvider:(id)arg8 navigationBarButtonsUnitProvider:(id)arg9 queueHeadUnitProvider:(id)arg10 queueNavigationBarButtonsUnitProvider:(id)arg11 queueViewControllerDelegate:(id)arg12 deviceOrientationManager:(id)arg13 openGLManager:(id)arg14 player:(id)arg15 notificationCenter:(id)arg16 testManager:(id)arg17 adsManager:(id)arg18 nowPlayingManager:(id)arg19 theme:(id)arg20 logger:(id)arg21 queueLogger:(id)arg22 shareFeature:(id)arg23 queueService:(id)arg24 queueInteractor:(id)arg25 modeResolver:(id)arg26 contentViewProvider:(id)arg27;

@end

