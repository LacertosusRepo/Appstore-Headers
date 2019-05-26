//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableDictionary, NSString;

@interface FBSDKLoginManagerLogger : NSObject
{
    NSString *_identifier;
    NSMutableDictionary *_extras;
    NSString *_lastResult;
    NSError *_lastError;
    NSString *_authMethod;
    NSString *_loggingToken;
}

+ (id)loggerFromParameters:(id)arg1;
- (void).cxx_destruct;
- (void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)logEvent:(id)arg1 params:(id)arg2;
- (id)_parametersForNewEvent;
- (id)clientStateForAuthMethod:(id)arg1 andExistingState:(id)arg2;
- (void)logNativeAppDialogResult:(_Bool)arg1 dialogDuration:(double)arg2;
- (void)systemAuthDidShowDialog:(_Bool)arg1 isUnTOSedDevice:(_Bool)arg2;
- (void)willAttemptAppSwitchingBehavior;
- (id)parametersWithTimeStampAndClientState:(id)arg1 forAuthMethod:(id)arg2;
- (void)endLoginWithResult:(id)arg1 error:(id)arg2;
- (void)startAuthMethod:(id)arg1;
- (void)endSession;
- (void)startSessionForLoginManager:(id)arg1;
- (id)initWithLoggingToken:(id)arg1;

@end

