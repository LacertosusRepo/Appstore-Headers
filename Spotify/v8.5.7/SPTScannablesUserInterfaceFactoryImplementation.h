//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesUserInterfaceFactory-Protocol.h"

@class NSString, SPTScannablesAuthorizationRequester, SPTScannablesDependencies, SPTScannablesScanViewModelFactory;
@protocol SPTAlertController, SPTScannablesDataSource, SPTScannablesOnboardingPresenter;

@interface SPTScannablesUserInterfaceFactoryImplementation : NSObject <SPTScannablesUserInterfaceFactory>
{
    SPTScannablesScanViewModelFactory *_scannablesScanViewModelFactory;
    id <SPTScannablesDataSource> _scannableDataSource;
    SPTScannablesAuthorizationRequester *_authorizationRequester;
    id <SPTScannablesOnboardingPresenter> _onboardingPresenter;
    SPTScannablesDependencies *_dependencies;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) id <SPTScannablesOnboardingPresenter> onboardingPresenter; // @synthesize onboardingPresenter=_onboardingPresenter;
@property(readonly, nonatomic) SPTScannablesAuthorizationRequester *authorizationRequester; // @synthesize authorizationRequester=_authorizationRequester;
@property(readonly, nonatomic) id <SPTScannablesDataSource> scannableDataSource; // @synthesize scannableDataSource=_scannableDataSource;
@property(readonly, nonatomic) SPTScannablesScanViewModelFactory *scannablesScanViewModelFactory; // @synthesize scannablesScanViewModelFactory=_scannablesScanViewModelFactory;
- (void).cxx_destruct;
- (id)provideImagePickerController;
- (id)createScannableImageViewForEntityURL:(id)arg1;
- (id)provideScanViewControllerWithSourceIdentifier:(id)arg1;
- (id)createContextMenuViewHeaderWithTitle:(id)arg1 subtitle:(id)arg2 entityURL:(id)arg3 imageURL:(id)arg4 fallbackHeader:(id)arg5;
- (id)initWithScanViewModelFactory:(id)arg1 dataSource:(id)arg2 authorizationRequester:(id)arg3 onboardingPresenter:(id)arg4 dependencies:(id)arg5 alertController:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

