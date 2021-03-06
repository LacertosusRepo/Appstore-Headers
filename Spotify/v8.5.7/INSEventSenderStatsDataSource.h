//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSchedulerDataSource-Protocol.h"

@class NSDate, NSString;
@protocol INSEventEnvelopeFactoryProtocol, INSEventSenderStatsProviderProtocol;

@interface INSEventSenderStatsDataSource : NSObject <INSSchedulerDataSource>
{
    NSDate *_lastDate;
    double _interval;
    id <INSEventSenderStatsProviderProtocol> _eventSenderStatsProvider;
    id <INSEventEnvelopeFactoryProtocol> _envelopeFactory;
}

@property(retain, nonatomic) id <INSEventEnvelopeFactoryProtocol> envelopeFactory; // @synthesize envelopeFactory=_envelopeFactory;
@property(retain, nonatomic) id <INSEventSenderStatsProviderProtocol> eventSenderStatsProvider; // @synthesize eventSenderStatsProvider=_eventSenderStatsProvider;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
- (void).cxx_destruct;
- (_Bool)shouldSendStatsEvent;
- (void)eventEnvelopesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithInterval:(double)arg1 eventSenderStatsProvider:(id)arg2 envelopeFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

