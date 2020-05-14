//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventSenderStatsProviderProtocol-Protocol.h"

@class NSString;
@protocol INSLogger, INSPersistentStore;

@interface INSEventSenderStatsProvider : NSObject <INSEventSenderStatsProviderProtocol>
{
    id <INSPersistentStore> _persistentStore;
    id <INSLogger> _logger;
}

@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <INSPersistentStore> persistentStore; // @synthesize persistentStore=_persistentStore;
- (void).cxx_destruct;
- (void)provideStatsWithSequenceIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPersistentStore:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

