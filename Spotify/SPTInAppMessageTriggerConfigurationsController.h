//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTInAppMessageFeatureFlagChecksObserver.h"
#import "SPTInAppMessageTriggerConfigurationsPrerequistesObserver.h"
#import "SPTInAppMessageTriggerEngineDelegate.h"

@class NSArray, NSString, NSTimer, SPTDataLoader, SPTInAppMessageFeatureFlagChecks, SPTInAppMessageServiceLogger, SPTInAppMessageTriggerConfigurationsPrerequistes, SPTObserverManager;

@interface SPTInAppMessageTriggerConfigurationsController : NSObject <SPTInAppMessageTriggerConfigurationsPrerequistesObserver, SPTDataLoaderDelegate, SPTInAppMessageFeatureFlagChecksObserver, SPTInAppMessageTriggerEngineDelegate>
{
    _Bool _refreshing;
    _Bool _useDevEndpoint;
    _Bool _bannerEnabled;
    _Bool _cardEnabled;
    id <SPTInAppMessageTriggerConfigurationsControllerDelegate> _delegate;
    SPTDataLoader *_configurationsDataLoader;
    SPTInAppMessageTriggerConfigurationsPrerequistes *_triggerConfigurationsPrerequistes;
    id <SPTDataLoaderCancellationToken> _refreshCancellationToken;
    SPTObserverManager *_observerManager;
    NSArray *_triggerList;
    NSTimer *_triggerListRefreshTimer;
    SPTInAppMessageServiceLogger *_serviceLogger;
    double _requestStartTime;
    SPTInAppMessageFeatureFlagChecks *_featureFlagChecker;
}

@property(retain, nonatomic) SPTInAppMessageFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(nonatomic) _Bool cardEnabled; // @synthesize cardEnabled=_cardEnabled;
@property(nonatomic) _Bool bannerEnabled; // @synthesize bannerEnabled=_bannerEnabled;
@property(nonatomic) _Bool useDevEndpoint; // @synthesize useDevEndpoint=_useDevEndpoint;
@property(nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(retain, nonatomic) NSTimer *triggerListRefreshTimer; // @synthesize triggerListRefreshTimer=_triggerListRefreshTimer;
@property(retain, nonatomic) NSArray *triggerList; // @synthesize triggerList=_triggerList;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> refreshCancellationToken; // @synthesize refreshCancellationToken=_refreshCancellationToken;
@property(retain, nonatomic) SPTInAppMessageTriggerConfigurationsPrerequistes *triggerConfigurationsPrerequistes; // @synthesize triggerConfigurationsPrerequistes=_triggerConfigurationsPrerequistes;
@property(retain, nonatomic) SPTDataLoader *configurationsDataLoader; // @synthesize configurationsDataLoader=_configurationsDataLoader;
@property(nonatomic) __weak id <SPTInAppMessageTriggerConfigurationsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isRefreshing) _Bool refreshing; // @synthesize refreshing=_refreshing;
- (void).cxx_destruct;
- (void)inAppMessageFeatureFlagsDidChange:(id)arg1 forFlagSignal:(id)arg2;
- (void)inAppMessageLocalSettingsDidChange:(id)arg1;
- (void)logBackendRequestPerformanceWithRequestUri:(id)arg1;
- (void)performRequestForUrl:(id)arg1;
- (void)fetchMessagesForTriggers:(id)arg1 withTriggerURI:(id)arg2 andTriggerType:(id)arg3;
- (void)triggerEngine:(id)arg1 didMatchPatternForTriggers:(id)arg2 withTriggerURI:(id)arg3 andTriggerType:(id)arg4;
- (void)invalidateTimer;
- (void)setupRefreshingTimer;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchTriggerList;
- (void)fetchActiveTriggerList;
- (void)prerequistesSatisfiedForConfigurationsPrerequisites:(id)arg1;
@property(readonly, nonatomic) id <SPTInAppMessageTriggerConfigurationsControllerObserver> observerNotifierProxy;
- (void)removeConfigurationsControllerObserver:(id)arg1;
- (void)addConfigurationsControllerObserver:(id)arg1;
- (void)dealloc;
- (id)initWithPrerequistes:(id)arg1 configurationsDataLoader:(id)arg2 serviceLogger:(id)arg3 featureFlagChecker:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

