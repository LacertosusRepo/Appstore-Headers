//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJActivityHandler.h"

@class ADJActivityState, ADJAttribution, ADJConfig, ADJDeviceInfo, ADJInternalState, ADJSessionParameters, ADJTimerCycle, ADJTimerOnce, NSData, NSObject<AdjustDelegate>, NSObject<OS_dispatch_queue>, NSString;

@interface ADJActivityHandler : NSObject <ADJActivityHandler>
{
    ADJAttribution *_attribution;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <ADJPackageHandler> _packageHandler;
    id <ADJAttributionHandler> _attributionHandler;
    id <ADJSdkClickHandler> _sdkClickHandler;
    ADJActivityState *_activityState;
    ADJTimerCycle *_foregroundTimer;
    ADJTimerOnce *_backgroundTimer;
    ADJInternalState *_internalState;
    ADJDeviceInfo *_deviceInfo;
    ADJTimerOnce *_delayStartTimer;
    ADJSessionParameters *_sessionParameters;
    id <ADJLogger> _logger;
    NSObject<AdjustDelegate> *_adjustDelegate;
    ADJConfig *_adjustConfig;
    NSData *_deviceTokenData;
}

+ (id)handlerWithConfig:(id)arg1 savedPreLaunch:(id)arg2;
@property(copy, nonatomic) NSData *deviceTokenData; // @synthesize deviceTokenData=_deviceTokenData;
@property(copy, nonatomic) ADJConfig *adjustConfig; // @synthesize adjustConfig=_adjustConfig;
@property(nonatomic) __weak NSObject<AdjustDelegate> *adjustDelegate; // @synthesize adjustDelegate=_adjustDelegate;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) ADJSessionParameters *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(retain, nonatomic) ADJTimerOnce *delayStartTimer; // @synthesize delayStartTimer=_delayStartTimer;
@property(retain, nonatomic) ADJDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) ADJInternalState *internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) ADJTimerOnce *backgroundTimer; // @synthesize backgroundTimer=_backgroundTimer;
@property(retain, nonatomic) ADJTimerCycle *foregroundTimer; // @synthesize foregroundTimer=_foregroundTimer;
@property(retain, nonatomic) ADJActivityState *activityState; // @synthesize activityState=_activityState;
@property(retain, nonatomic) id <ADJSdkClickHandler> sdkClickHandler; // @synthesize sdkClickHandler=_sdkClickHandler;
@property(retain, nonatomic) id <ADJAttributionHandler> attributionHandler; // @synthesize attributionHandler=_attributionHandler;
@property(retain, nonatomic) id <ADJPackageHandler> packageHandler; // @synthesize packageHandler=_packageHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(copy, nonatomic) ADJAttribution *attribution; // @synthesize attribution=_attribution;
- (void).cxx_destruct;
- (_Bool)checkActivityStateI:(id)arg1;
- (_Bool)checkEventI:(id)arg1 event:(id)arg2;
- (_Bool)checkTransactionIdI:(id)arg1 transactionId:(id)arg2;
- (void)removeNotificationObserver;
- (void)addNotificationObserver;
- (void)preLaunchActionsI:(id)arg1 preLaunchActionsArray:(id)arg2;
- (void)resetSessionPartnerParametersI:(id)arg1;
- (void)resetSessionCallbackParametersI:(id)arg1;
- (void)removeSessionPartnerParameterI:(id)arg1 key:(id)arg2;
- (void)removeSessionCallbackParameterI:(id)arg1 key:(id)arg2;
- (void)addSessionPartnerParameterI:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)addSessionCallbackParameterI:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)updatePackagesI:(id)arg1;
- (void)sendFirstPackagesI:(id)arg1;
- (void)delayStartI:(id)arg1;
- (void)backgroundTimerFiredI:(id)arg1;
- (void)stopBackgroundTimerI:(id)arg1;
- (void)startBackgroundTimerI:(id)arg1;
- (void)foregroundTimerFiredI:(id)arg1;
- (void)stopForegroundTimerI:(id)arg1;
- (void)startForegroundTimerI:(id)arg1;
- (void)setAskingAttributionI:(id)arg1 askingAttribution:(_Bool)arg2;
- (_Bool)toSendI:(id)arg1 sdkClickHandlerOnly:(_Bool)arg2;
- (_Bool)toSendI:(id)arg1;
- (_Bool)pausedI:(id)arg1 sdkClickHandlerOnly:(_Bool)arg2;
- (_Bool)pausedI:(id)arg1;
- (void)resumeSendingI:(id)arg1;
- (void)pauseSendingI:(id)arg1;
- (void)updateHandlersStatusAndSendI:(id)arg1;
- (void)readSessionPartnerParametersI:(id)arg1;
- (void)readSessionCallbackParametersI:(id)arg1;
- (void)teardownAllSessionParametersS:(_Bool)arg1;
- (void)writeSessionPartnerParametersI:(id)arg1;
- (void)writeSessionCallbackParametersI:(id)arg1;
- (void)readAttribution;
- (void)readActivityState;
- (void)teardownAttributionS:(_Bool)arg1;
- (void)writeAttributionI:(id)arg1;
- (void)teardownActivityStateS:(_Bool)arg1;
- (void)writeActivityStateI:(id)arg1;
- (_Bool)updateActivityStateI:(id)arg1 now:(double)arg2;
- (_Bool)itHasToUpdatePackagesI:(id)arg1;
- (_Bool)isEnabledI:(id)arg1;
- (void)setDeviceTokenI:(id)arg1 deviceToken:(id)arg2;
- (_Bool)trySetAttributionDeeplink:(id)arg1 withKey:(id)arg2 withValue:(id)arg3;
- (_Bool)readDeeplinkQueryStringI:(id)arg1 queryString:(id)arg2 adjustDeepLinks:(id)arg3 attribution:(id)arg4;
- (void)appWillOpenUrlI:(id)arg1 url:(id)arg2;
- (void)checkStatusI:(id)arg1 pausingState:(_Bool)arg2 pausingMessage:(id)arg3 remainsPausedMessage:(id)arg4 unPausingMessage:(id)arg5;
- (_Bool)hasChangedStateI:(id)arg1 previousState:(_Bool)arg2 nextState:(_Bool)arg3 trueMessage:(id)arg4 falseMessage:(id)arg5;
- (void)setOfflineModeI:(id)arg1 offline:(_Bool)arg2;
- (void)setEnabledI:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)updateAttributionI:(id)arg1 attribution:(id)arg2;
- (void)updateAdidI:(id)arg1 adid:(id)arg2;
- (void)prepareDeeplinkI:(id)arg1 responseData:(id)arg2;
- (void)launchAttributionResponseTasksI:(id)arg1 attributionResponseData:(id)arg2;
- (void)launchSdkClickResponseTasksI:(id)arg1 sdkClickResponseData:(id)arg2;
- (void)launchSessionResponseTasksI:(id)arg1 sessionResponseData:(id)arg2;
- (void)launchEventResponseTasksI:(id)arg1 eventResponseData:(id)arg2;
- (void)eventI:(id)arg1 event:(id)arg2;
- (void)endI:(id)arg1;
- (void)checkAttributionStateI:(id)arg1;
- (void)transferSessionPackageI:(id)arg1 now:(double)arg2;
- (void)trackNewSessionI:(double)arg1 withActivityHandler:(id)arg2;
- (void)processSessionI:(id)arg1;
- (void)startI:(id)arg1;
- (void)initI:(id)arg1 preLaunchActionsArray:(id)arg2;
- (void)teardown:(_Bool)arg1;
- (void)resetSessionPartnerParameters;
- (void)resetSessionCallbackParameters;
- (void)removeSessionPartnerParameter:(id)arg1;
- (void)removeSessionCallbackParameter:(id)arg1;
- (void)addSessionPartnerParameter:(id)arg1 value:(id)arg2;
- (void)addSessionCallbackParameter:(id)arg1 value:(id)arg2;
- (void)sendFirstPackages;
- (void)backgroundTimerFired;
- (void)foregroundTimerFired;
- (void)setAskingAttribution:(_Bool)arg1;
- (void)saveAttributionDetailsI:(id)arg1 attributionDetails:(id)arg2;
- (void)sendIad3ClickPackage:(id)arg1 attributionDetails:(id)arg2;
- (void)setAttributionDetails:(id)arg1 error:(id)arg2 retriesLeft:(int)arg3;
- (void)setDeviceToken:(id)arg1;
- (void)appWillOpenUrl:(id)arg1;
- (id)adid;
- (_Bool)isEnabled;
- (void)setOfflineMode:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)launchAttributionResponseTasks:(id)arg1;
- (void)launchSdkClickResponseTasks:(id)arg1;
- (void)launchSessionResponseTasks:(id)arg1;
- (void)launchEventResponseTasks:(id)arg1;
- (void)finishedTracking:(id)arg1;
- (void)trackEvent:(id)arg1;
- (void)applicationWillResignActive;
- (void)applicationDidBecomeActive;
- (id)initWithConfig:(id)arg1 savedPreLaunch:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

