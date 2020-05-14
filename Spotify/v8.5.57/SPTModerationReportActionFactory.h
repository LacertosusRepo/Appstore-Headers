//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTModerationTestManager, SPTModerationWebViewControllerFactory, SPTModerationWebViewURLProviderFactory;
@protocol SPTModalPresentationController, SPTOfflineModeState;

@interface SPTModerationReportActionFactory : NSObject
{
    SPTModerationTestManager *_testManager;
    SPTModerationWebViewControllerFactory *_webViewFactory;
    SPTModerationWebViewURLProviderFactory *_urlProviderFactory;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) SPTModerationWebViewURLProviderFactory *urlProviderFactory; // @synthesize urlProviderFactory=_urlProviderFactory;
@property(readonly, nonatomic) SPTModerationWebViewControllerFactory *webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(readonly, nonatomic) SPTModerationTestManager *testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (id)actionForEntityURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3;
- (id)actionForEntityURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 forceEnabled:(_Bool)arg4;
- (id)initWithTestManager:(id)arg1 webviewFactory:(id)arg2 urlProviderFactory:(id)arg3 modalPresentationController:(id)arg4 offlineModeState:(id)arg5;

@end

