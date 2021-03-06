//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueueHeadUnitRegistry-Protocol.h"

@class NSMutableDictionary, NSString;

@interface SPTQueueHeadUnitRegistryImplementation : NSObject <SPTQueueHeadUnitRegistry>
{
    NSMutableDictionary *_predicateToHeadUnitBlock;
    NSMutableDictionary *_predicateToTableHeaderBlock;
}

@property(retain, nonatomic) NSMutableDictionary *predicateToTableHeaderBlock; // @synthesize predicateToTableHeaderBlock=_predicateToTableHeaderBlock;
@property(retain, nonatomic) NSMutableDictionary *predicateToHeadUnitBlock; // @synthesize predicateToHeadUnitBlock=_predicateToHeadUnitBlock;
- (void).cxx_destruct;
- (CDUnknownBlockType)tableHeaderBlockForURI:(id)arg1;
- (void)registerTableHeaderBlock:(CDUnknownBlockType)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)headUnitBlockForURI:(id)arg1;
- (void)registerHeadUnitBlock:(CDUnknownBlockType)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

