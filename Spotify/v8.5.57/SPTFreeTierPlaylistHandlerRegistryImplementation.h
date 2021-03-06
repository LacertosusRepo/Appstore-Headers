//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHandlerRegistry-Protocol.h"

@class NSMutableArray, NSString;

@interface SPTFreeTierPlaylistHandlerRegistryImplementation : NSObject <SPTFreeTierPlaylistHandlerRegistry>
{
    NSMutableArray *_entries;
    CDUnknownBlockType _fallbackHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
- (void).cxx_destruct;
- (CDUnknownBlockType)configurationBlockForContext:(id)arg1;
- (void)unregisterPlaylistHandlerWithToken:(id)arg1;
- (id)registerPlaylistHandlerWithPriority:(unsigned long long)arg1 forPredicate:(CDUnknownBlockType)arg2 configurationBlock:(CDUnknownBlockType)arg3;
- (id)initWithFallbackHandlerBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

