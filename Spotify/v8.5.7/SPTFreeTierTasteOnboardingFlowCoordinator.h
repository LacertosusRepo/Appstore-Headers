//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate-Protocol.h"
#import "SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate-Protocol.h"
#import "SPTMetaViewControllerRootViewPresenter-Protocol.h"
#import "SPTOnboardingFlowCoordinator-Protocol.h"

@class NSString, SPTFreeTierTasteOnboardingFlowConfiguration, UINavigationController;
@protocol SPTOnboardingServiceFlowStateReporter;

@interface SPTFreeTierTasteOnboardingFlowCoordinator : NSObject <SPTFreeTierTasteOnboardingArtistPickerViewControllerDelegate, SPTFreeTierTasteOnboardingUpdateTasteViewControllerDelegate, SPTMetaViewControllerRootViewPresenter, SPTOnboardingFlowCoordinator>
{
    _Bool _repeatVisit;
    id <SPTOnboardingServiceFlowStateReporter> delegate;
    SPTFreeTierTasteOnboardingFlowConfiguration *_configuration;
    UINavigationController *_navigationController;
    unsigned long long _presentationMode;
    unsigned long long _presentationState;
}

@property(nonatomic) unsigned long long presentationState; // @synthesize presentationState=_presentationState;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic, getter=isRepeatVisit) _Bool repeatVisit; // @synthesize repeatVisit=_repeatVisit;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingFlowConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <SPTOnboardingServiceFlowStateReporter> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)presentBridgeViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateTasteViewControllerDidComplete:(id)arg1;
- (void)artistPickerViewController:(id)arg1 didComplete:(_Bool)arg2 withSelectedArtistURIs:(id)arg3;
- (void)startOnboardingFlow;
- (id)viewControllerForState:(unsigned long long)arg1 withSeedURIs:(id)arg2;
- (void)confirmDismiss;
- (void)confirmDismissCancelTapped;
- (void)confirmDismissContinueTapped;
- (id)provideUpdateTasteViewControllerWithSelectedArtistsURIs:(id)arg1;
- (id)provideArtistPickerViewController;
- (id)provideNavigationControllerWithRootViewController:(id)arg1;
@property(readonly, nonatomic) _Bool showsTasteOnboardingFirstTimeFlowAsBridgeView;
- (_Bool)showsTasteOnboardingFirstTimeFlow;
- (void)dismiss;
- (void)presentAsPresentationMode:(unsigned long long)arg1 inState:(unsigned long long)arg2 withSeedURIs:(id)arg3;
- (void)presentAsPresentationMode:(unsigned long long)arg1 inState:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
