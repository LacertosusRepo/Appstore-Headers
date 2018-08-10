//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierAllSongsRegistry.h"

@class NSMutableArray, NSString;

@interface SPTFreeTierAllSongsRegistryImplementation : NSObject <SPTFreeTierAllSongsRegistry>
{
    NSMutableArray *_registrations;
    id <SPTFreeTierAllSongsRegistration> _fallbackHandler;
    id <SPTFormatListPlatformResolver> _formatListResolver;
}

@property(retain, nonatomic) id <SPTFormatListPlatformResolver> formatListResolver; // @synthesize formatListResolver=_formatListResolver;
@property(retain, nonatomic) id <SPTFreeTierAllSongsRegistration> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(readonly, nonatomic) NSMutableArray *registrations; // @synthesize registrations=_registrations;
- (void).cxx_destruct;
- (id)initWithFormatListResolver:(id)arg1;
- (void)unregisterFallbackHandler:(id)arg1;
- (void)unregisterHandler:(id)arg1;
- (void)fetchDataSourceForURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)registerFallbackHandler:(CDUnknownBlockType)arg1;
- (id)registerHandler:(CDUnknownBlockType)arg1 predicate:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

