//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTScannablesCameraOnboardingSlateViewControllerDelegate.h"
#import "SPTSlateDataSource.h"
#import "SPTSlateDelegate.h"

@class NSString, SPTScannablesDependencies;

@interface SPTScannablesSlateFactory : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTScannablesCameraOnboardingSlateViewControllerDelegate>
{
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTScannablesDependencies *_dependencies;
    id <SPTSlate> _slate;
    id <SPTScannablesSlateFactoryDelegate> _delegate;
}

@property(nonatomic) __weak id <SPTScannablesSlateFactoryDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SPTSlate> slate; // @synthesize slate=_slate;
@property(retain, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void).cxx_destruct;
- (void)dismissSlateWithResult:(_Bool)arg1;
- (void)didTapCancelButton;
- (void)didTapScanButton;
- (void)slateSwiped:(id)arg1;
- (id)titleForSlate:(id)arg1;
- (id)contentUnitForSlateViewController:(id)arg1;
- (id)provideSlate;
- (id)provideScannerOnboardingSlateWithDelegate:(id)arg1;
- (id)initWithSlateManager:(id)arg1 slateBuilderProvider:(id)arg2 dependencies:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
