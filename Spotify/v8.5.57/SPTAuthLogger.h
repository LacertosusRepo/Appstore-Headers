//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTAuthLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logAuthEventStartWithClientId:(id)arg1 responseType:(id)arg2 redirectUri:(id)arg3 scopes:(id)arg4 isOffline:(_Bool)arg5 appId:(id)arg6 integrationInitiated:(_Bool)arg7 authId:(id)arg8;
- (void)logAuthEventFailureWithErrorReason:(id)arg1 errorCode:(long long)arg2 authId:(id)arg3;
- (void)logAuthEventSuccessWithAuthId:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

