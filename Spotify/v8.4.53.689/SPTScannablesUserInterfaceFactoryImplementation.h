//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTScannablesUserInterfaceFactory.h"

@class NSString, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesScanViewController, SPTScannablesScanViewModelFactory;

@interface SPTScannablesUserInterfaceFactoryImplementation : NSObject <SPTScannablesUserInterfaceFactory>
{
    SPTScannablesScanViewModelFactory *_scannablesScanViewModelFactory;
    id <SPTScannablesDataSource> _scannableDataSource;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesDependencies *_dependencies;
    SPTScannablesScanViewController *_scanViewController;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTScannablesScanViewController *scanViewController; // @synthesize scanViewController=_scanViewController;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) id <SPTScannablesDataSource> scannableDataSource; // @synthesize scannableDataSource=_scannableDataSource;
@property(readonly, nonatomic) SPTScannablesScanViewModelFactory *scannablesScanViewModelFactory; // @synthesize scannablesScanViewModelFactory=_scannablesScanViewModelFactory;
- (void).cxx_destruct;
- (id)provideImagePickerController;
- (id)provideScanViewContoller;
- (id)createContextMenuViewHeaderWithTitle:(id)arg1 subtitle:(id)arg2 entityURL:(id)arg3 fallbackHeader:(id)arg4;
- (id)initWithScanViewModelFactory:(id)arg1 dataSource:(id)arg2 authorizationRequester:(id)arg3 onboardingPresenter:(id)arg4 dependencies:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

