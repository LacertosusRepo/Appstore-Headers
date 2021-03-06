//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeRegistry-Protocol.h"

@class NSMapTable, NSString;

@interface SPTURISubtypeRegistryImplementation : NSObject <SPTURISubtypeRegistry>
{
    NSMapTable *_handlersAndAllocationContexts;
}

@property(retain, nonatomic) NSMapTable *handlersAndAllocationContexts; // @synthesize handlersAndAllocationContexts=_handlersAndAllocationContexts;
- (void).cxx_destruct;
- (void)removeSubtypeHandler:(id)arg1;
- (void)addSubtypeHandler:(id)arg1;
- (long long)handleURI:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

