//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSPersistentStore-Protocol.h"

@class INSPersistentStoreStack, NSString;
@protocol INSLogger;

@interface INSPersistentStoreImplementation : NSObject <INSPersistentStore>
{
    INSPersistentStoreStack *_stack;
    id <INSLogger> _logger;
}

@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSPersistentStoreStack *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (unsigned long long)countInContext:(id)arg1 predicate:(id)arg2;
- (id)installIdWithContext:(id)arg1 predicate:(id)arg2;
- (id)sequenceNumbersMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 context:(id)arg3;
- (id)messagesMatchingPredicate:(id)arg1 sortDescriptor:(id)arg2 limit:(unsigned long long)arg3 context:(id)arg4;
- (id)fetchInstallIdEntityWithContext:(id)arg1;
- (id)fetchSequenceNumberEntitiesWithSequenceIds:(id)arg1;
- (id)fetchFirstMessageEntitiesWithSequenceNumbers:(id)arg1;
- (void)eventSenderStatsNodesWithSequenceIds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installIdWithCompletion:(CDUnknownBlockType)arg1;
- (void)persistEventEnvelope:(id)arg1 owner:(id)arg2 authenticated:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)fetchMessagesWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistNonAuthenticatedEventEnvelope:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)persistAuthenticatedEventEnvelope:(id)arg1 owner:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)nonAuthenticatedMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)authenticatedMessagesWithOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)messagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)containMessageForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMessageForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)countWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)incrementSequenceNumberWithEventName:(id)arg1 sequenceId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPersistentStoreStack:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

