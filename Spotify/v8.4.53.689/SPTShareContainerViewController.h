//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBSDKSharingDelegate.h"
#import "SPTShareHandlerAncillaryViewControllerDelegate.h"
#import "SPTShareViewControllerDelegate.h"

@class NSString, SPTExternalDeeplinksFetcher, SPTLayoutConstraintBuilder, SPTProgressView, SPTShareData, SPTShareHandlerFactory, SPTShareLocalSettingsManager, SPTShareLogger, SPTShareViewController, SPTShareViewModel, UIView;

@interface SPTShareContainerViewController : UIViewController <FBSDKSharingDelegate, SPTShareViewControllerDelegate, SPTShareHandlerAncillaryViewControllerDelegate>
{
    UIView *_contextMenuPopOverOriginView;
    CDUnknownBlockType _completion;
    UIView *_containerView;
    SPTProgressView *_progressView;
    SPTShareViewController *_shareViewController;
    SPTLayoutConstraintBuilder *_layout;
    SPTExternalDeeplinksFetcher *_externalDeeplinksFetcher;
    id <SPTShareDeeplinkHandler> _deeplinkHandler;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTShareLogger *_shareLogger;
    SPTShareLocalSettingsManager *_localSettingsManager;
    SPTShareData *_shareData;
    SPTShareViewModel *_shareViewModel;
    CDUnknownBlockType _shareDataProvider;
    SPTShareHandlerFactory *_shareHandlerFactory;
    id <SPTShareTestManager> _testManager;
    struct CGRect _contextMenuPopOverOriginRect;
}

@property(retain, nonatomic) id <SPTShareTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTShareHandlerFactory *shareHandlerFactory; // @synthesize shareHandlerFactory=_shareHandlerFactory;
@property(copy, nonatomic) CDUnknownBlockType shareDataProvider; // @synthesize shareDataProvider=_shareDataProvider;
@property(retain, nonatomic) SPTShareViewModel *shareViewModel; // @synthesize shareViewModel=_shareViewModel;
@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) SPTShareLocalSettingsManager *localSettingsManager; // @synthesize localSettingsManager=_localSettingsManager;
@property(retain, nonatomic) SPTShareLogger *shareLogger; // @synthesize shareLogger=_shareLogger;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTShareDeeplinkHandler> deeplinkHandler; // @synthesize deeplinkHandler=_deeplinkHandler;
@property(retain, nonatomic) SPTExternalDeeplinksFetcher *externalDeeplinksFetcher; // @synthesize externalDeeplinksFetcher=_externalDeeplinksFetcher;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) SPTShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) struct CGRect contextMenuPopOverOriginRect; // @synthesize contextMenuPopOverOriginRect=_contextMenuPopOverOriginRect;
@property(retain, nonatomic) UIView *contextMenuPopOverOriginView; // @synthesize contextMenuPopOverOriginView=_contextMenuPopOverOriginView;
- (void).cxx_destruct;
- (void)sharerDidCancel:(id)arg1;
- (void)sharer:(id)arg1 didFailWithError:(id)arg2;
- (void)sharer:(id)arg1 didCompleteWithResults:(id)arg2;
- (void)handleMoreMenuDestination:(id)arg1 shareViewController:(id)arg2 fromFrame:(struct CGRect)arg3;
- (void)handleTwitterDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleFacebookStoriesDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleFacebookDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleLineDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleMessengerDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleMessagesDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleSnapchatDestination:(id)arg1 shareViewController:(id)arg2;
- (void)handleInvalidPhotoAuthorizationStatus:(long long)arg1;
- (void)handleIGStoriesDestionation:(id)arg1 shareViewController:(id)arg2;
- (void)didDismissAncillaryViewController:(id)arg1 withShareDestinationId:(long long)arg2;
- (void)shareViewController:(id)arg1 didSelectShareDestination:(id)arg2 fromFrame:(struct CGRect)arg3;
- (void)presentProgressView:(id)arg1 delay:(double)arg2;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 actions:(id)arg3;
- (void)dismiss;
- (void)updateViewConstraints;
- (void)addViewConstraints;
- (void)showSnapchatDisclaimer;
- (void)discardChildViewController:(id)arg1;
- (void)setupShareViewController;
- (void)setupBarButtonItemAppearance;
- (void)setupContainerView;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithShareData:(id)arg1 shareViewModel:(id)arg2 shareDataProvider:(CDUnknownBlockType)arg3 itemURI:(id)arg4 shareLogger:(id)arg5 externalDeeplinksFetcher:(id)arg6 localSettingsManager:(id)arg7 deeplinkHandler:(id)arg8 imageLoaderFactory:(id)arg9 shareHandlerFactory:(id)arg10 testManager:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

