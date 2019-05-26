//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme;
@protocol SPContextMenuFeature, SPTAdsManager, SPTCollectionPlatformTestManager, SPTCrashReporter, SPTLinkDispatcher, SPTNowPlayingManager, SPTNowPlayingTestManager, SPTPSXTestManager, SPTPodcastFeature, SPTShowsFormatService, SPTUIPresentationService;

@interface SPTNowPlayingInformationUnitProvider : SPTNowPlayingBaseUnitProvider
{
    id <SPTPSXTestManager> _psxTestManager;
    SPTNowPlayingModel *_model;
    SPTTheme *_theme;
    id <SPContextMenuFeature> _contextMenuFeature;
    SPTNowPlayingLogger *_logger;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTShowsFormatService> _showsFormatService;
    id <SPTAdsManager> _adsManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTUIPresentationService> _presentationService;
    id <SPTNowPlayingManager> _nowPlayingManager;
    id <SPTCrashReporter> _crashReporter;
}

@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(nonatomic) __weak id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTAdsManager> adsManager; // @synthesize adsManager=_adsManager;
@property(nonatomic) __weak id <SPTShowsFormatService> showsFormatService; // @synthesize showsFormatService=_showsFormatService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
- (void).cxx_destruct;
- (_Bool)shouldCreateHeartsEveryWhereInfoUnitForPlayerState:(id)arg1;
- (void)createInterruptionInformationUnit;
- (void)createFreeTierInformationUnit:(_Bool)arg1;
- (void)createShowsFormatInformationUnit;
- (void)createFreeTierAdInformationUnit;
- (void)createAdInformationUnit;
- (void)createPodcastInformationUnit;
- (void)createVideoInformationUnit;
- (void)createHeartsEverywhereUnit;
- (void)createMusicInformationUnit;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (id)initWithPlayer:(id)arg1 model:(id)arg2 testManager:(id)arg3 theme:(id)arg4 contextMenuFeature:(id)arg5 podcastFeature:(id)arg6 showsFormatService:(id)arg7 logger:(id)arg8 adsManager:(id)arg9 nowPlayingManager:(id)arg10 linkDispatcher:(id)arg11 collectionTestManager:(id)arg12 psxTestManager:(id)arg13 presentationService:(id)arg14 crashReporter:(id)arg15;

@end
