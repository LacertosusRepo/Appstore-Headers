//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTViewLoadSequenceTransport-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTPerformanceMetricsViewLoadSequenceEventSenderTransport : NSObject <SPTViewLoadSequenceTransport>
{
    id <SPTEventSender> _eventSender;
}

@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)handleViewLoadSequence:(id)arg1;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

