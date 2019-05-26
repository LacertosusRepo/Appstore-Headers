//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeatureFlagSignalObserver.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTFreeTierMigrationService : NSObject <SPTFeatureFlagSignalObserver, SPTService>
{
    id <SPTContainerService> _containerService;
    id <SPTSessionService> _sessionService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _presentEducationScreenSignal;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTUICompletionNotifier> _UICompletionNotifier;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTUICompletionNotifier> UICompletionNotifier; // @synthesize UICompletionNotifier=_UICompletionNotifier;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> presentEducationScreenSignal; // @synthesize presentEducationScreenSignal=_presentEducationScreenSignal;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)presentEducationScreenIfNeverSeen;
@property(readonly, nonatomic, getter=isFirstTimeToSeeEducationScreen) _Bool firstTimeToSeeEducationScreen;
- (void)setupAdditionalFeatureSettingsItems;
- (void)setupFeatureFlags;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
