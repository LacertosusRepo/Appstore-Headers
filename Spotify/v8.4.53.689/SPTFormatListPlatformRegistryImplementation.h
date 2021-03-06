//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFormatListPlatformRegistry.h"

@class NSMutableArray, NSString;

@interface SPTFormatListPlatformRegistryImplementation : NSObject <SPTFormatListPlatformRegistry>
{
    NSMutableArray *_registrations;
    id <SPTFormatListPlatformRegistration> _fallbackHandler;
}

@property(retain, nonatomic) id <SPTFormatListPlatformRegistration> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void).cxx_destruct;
- (id)viewControllerForURL:(id)arg1 formatListType:(id)arg2 formatListAttributes:(id)arg3 context:(id)arg4;
- (void)unregisterFallbackHandler;
- (void)unregisterHandlers;
- (void)unregisterFallbackHandler:(id)arg1;
- (void)unregisterHandler:(id)arg1;
- (id)registerFallbackHandler:(CDUnknownBlockType)arg1;
- (id)registerHandler:(CDUnknownBlockType)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

