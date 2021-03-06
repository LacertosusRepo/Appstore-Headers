//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSchedulerDataDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol INSPersistentStore;

@interface INSPersistentStoreDataDelegate : NSObject <INSSchedulerDataDelegate>
{
    id <INSPersistentStore> _store;
    NSMutableArray *_envelopesToSchedule;
}

@property(retain, nonatomic) NSMutableArray *envelopesToSchedule; // @synthesize envelopesToSchedule=_envelopesToSchedule;
@property(retain, nonatomic) id <INSPersistentStore> store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)didFailEnvelopes:(id)arg1;
- (void)didDeliverEnvelopes:(id)arg1;
- (void)scheduleEnvelope:(id)arg1;
- (id)initWithPersistentStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

