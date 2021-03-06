//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
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

+ (_Bool)automaticallyNotifiesObserversOfCount;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSPersistentStoreStack *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (unsigned long long)countInContext:(id)arg1 predicate:(id)arg2;
- (id)messagesWithContext:(id)arg1 predicate:(id)arg2;
- (id)fetchMessageEntityWithContext:(id)arg1 messageId:(id)arg2;
- (void)allMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)containMessageForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteMessageForId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)countWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)messageEntityWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPersistentStoreStack:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

