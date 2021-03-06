//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, SPTLocalSettings, SPTLogCenter, SPTNetworkConnectivityController;

@interface SPTAbbaLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTLocalSettings> _localSettings;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (_Bool)isCacheAvailable;
- (void)logAccessForFlagName:(id)arg1 variant:(id)arg2;
- (void)logRequestTime:(double)arg1 payloadSize:(long long)arg2;
- (id)initWithLogCenter:(id)arg1 localSettings:(id)arg2 networkConnectivityController:(id)arg3;

@end

