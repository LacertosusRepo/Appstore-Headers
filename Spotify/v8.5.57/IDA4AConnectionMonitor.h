//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSTimer;
@protocol IDA4AConnectionMonitorDelegate;

@interface IDA4AConnectionMonitor : NSObject
{
    _Bool _packetProcessedBeforeTimeoutExpired;
    id <IDA4AConnectionMonitorDelegate> _delegate;
    double _communicationTimeout;
    NSConditionLock *_monitoringStateCondition;
    NSTimer *_communicationTimeoutTimer;
    NSTimer *_keepAliveTimer;
}

+ (id)new;
@property(retain) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
@property _Bool packetProcessedBeforeTimeoutExpired; // @synthesize packetProcessedBeforeTimeoutExpired=_packetProcessedBeforeTimeoutExpired;
@property(retain) NSTimer *communicationTimeoutTimer; // @synthesize communicationTimeoutTimer=_communicationTimeoutTimer;
@property(retain) NSConditionLock *monitoringStateCondition; // @synthesize monitoringStateCondition=_monitoringStateCondition;
@property(readonly) double communicationTimeout; // @synthesize communicationTimeout=_communicationTimeout;
@property(readonly) __weak id <IDA4AConnectionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)handleKeepAliveTimer:(id)arg1;
- (void)handleCommunicationTimeoutTimer:(id)arg1;
- (void)processPacket:(id)arg1;
- (void)stopMonitoringWithError:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoringWithKeepalive:(_Bool)arg1;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 communicationTimeout:(double)arg2;
- (id)initWithDelegate:(id)arg1;

@end

