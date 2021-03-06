//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueuePlaybackDelegateRegistry-Protocol.h"

@class NSMapTable, NSString;

@interface SPTQueuePlaybackDelegateRegistryImplementation : NSObject <SPTQueuePlaybackDelegateRegistry>
{
    NSMapTable *_predicateToDelegate;
}

@property(retain, nonatomic) NSMapTable *predicateToDelegate; // @synthesize predicateToDelegate=_predicateToDelegate;
- (void).cxx_destruct;
- (id)delegateForURI:(id)arg1;
- (void)registerDelegate:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

