//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MXMetricManagerSubscriber-Protocol.h"

@class MXMetricManager, NSString;

@interface SPTMetricCollector : NSObject <MXMetricManagerSubscriber>
{
    MXMetricManager *_metricManager;
    CDUnknownBlockType _callbackHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType callbackHandler; // @synthesize callbackHandler=_callbackHandler;
@property(readonly, nonatomic) MXMetricManager *metricManager; // @synthesize metricManager=_metricManager;
- (void).cxx_destruct;
- (void)didReceiveMetricPayloads:(id)arg1;
- (void)stopCollecting;
- (void)startCollecting;
- (id)initWithMetricManager:(id)arg1 callbackHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

