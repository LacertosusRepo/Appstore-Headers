//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTNowPlayingBaseUnitProvider.h"

@class SPTNowPlayingLogger, SPTNowPlayingModel, SPTTheme, UIViewController;
@protocol SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingFeedbackObservable, SPTNowPlayingManager, SPTNowPlayingTestManager;

@interface SPTNowPlayingBarLeftAccessoryUnitProvider : SPTNowPlayingBaseUnitProvider
{
    id <SPTNowPlayingManager> _nowPlayingManager;
    SPTTheme *_theme;
    UIViewController *_leftAccessoryViewController;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingModel *_nowPlayingModel;
    id <SPTNowPlayingFeedbackObservable> _feedbackObservable;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTNowPlayingLogger *_logger;
}

@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) id <SPTNowPlayingFeedbackObservable> feedbackObservable; // @synthesize feedbackObservable=_feedbackObservable;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) UIViewController *leftAccessoryViewController; // @synthesize leftAccessoryViewController=_leftAccessoryViewController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
- (void).cxx_destruct;
- (void)processPlayerStateChange:(id)arg1 toggleMode:(unsigned long long)arg2;
- (void)createHeartUnit;
- (void)createOpenUnit;
- (void)createEmptyUnit;
- (id)initWithPlayer:(id)arg1 nowPlayingManager:(id)arg2 theme:(id)arg3 testManager:(id)arg4 nowPlayingModel:(id)arg5 feedbackObservable:(id)arg6 auxiliaryActionsHandler:(id)arg7 logger:(id)arg8;

@end

