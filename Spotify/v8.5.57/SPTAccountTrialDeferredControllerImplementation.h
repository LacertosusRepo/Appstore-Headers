//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccountEligibilityRequestDelegate-Protocol.h"
#import "SPTAccountTrialDeferredController-Protocol.h"
#import "SPTAccountTrialRequestDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSError, NSString, SPTAccountTrialController, SPTAccountTrialRequest, SPTDataLoader, SPTHermesController;
@protocol SPTAccountEligibilityRequest, SPTAccountTrialDeferredControllerDelegate, SPTOfflineModeState, SPTProductState;

@interface SPTAccountTrialDeferredControllerImplementation : NSObject <SPTAccountTrialRequestDelegate, SPTAccountEligibilityRequestDelegate, SPTOfflineModeStateObserver, SPTAccountTrialDeferredController>
{
    _Bool _startTrialInProgress;
    unsigned long long _trialEligibilityState;
    NSError *_startTrialError;
    id <SPTAccountTrialDeferredControllerDelegate> delegate;
    SPTAccountTrialRequest *_trialRequest;
    id <SPTAccountEligibilityRequest> _eligibilityRequest;
    id <SPTOfflineModeState> _offlineState;
    id <SPTProductState> _productState;
    NSString *_username;
    SPTAccountTrialController *_trialController;
    SPTHermesController *_hermes;
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTHermesController *hermes; // @synthesize hermes=_hermes;
@property(retain, nonatomic) SPTAccountTrialController *trialController; // @synthesize trialController=_trialController;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineState; // @synthesize offlineState=_offlineState;
@property(retain, nonatomic) id <SPTAccountEligibilityRequest> eligibilityRequest; // @synthesize eligibilityRequest=_eligibilityRequest;
@property(retain, nonatomic) SPTAccountTrialRequest *trialRequest; // @synthesize trialRequest=_trialRequest;
@property(nonatomic) __weak id <SPTAccountTrialDeferredControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool startTrialInProgress; // @synthesize startTrialInProgress=_startTrialInProgress;
@property(retain, nonatomic) NSError *startTrialError; // @synthesize startTrialError=_startTrialError;
@property(nonatomic) unsigned long long trialEligibilityState; // @synthesize trialEligibilityState=_trialEligibilityState;
- (void).cxx_destruct;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (unsigned long long)loadStoredTrialEligibilityState;
- (void)storeTrialEligibility;
- (void)trialStateChanged;
- (void)eligibleForTrialRequest:(id)arg1 didFailWithError:(id)arg2;
- (void)eligibleForTrialRequestDelegateDidFinish:(id)arg1 withEligibilityState:(unsigned long long)arg2;
- (void)checkEligibleForTrial;
- (void)trialRequestDelegate:(id)arg1 didFailWithError:(id)arg2;
- (void)trialRequestDelegateDidStartTrial:(id)arg1;
- (void)startTrial;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 offlineState:(id)arg2 productState:(id)arg3 trialController:(id)arg4 hermes:(id)arg5 dataLoader:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
