//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionPrivateEntityPageRegistry-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol SPTFreeTierCollectionPrivateEntityPageRegistryDelegate;

@interface SPTFreeTierCollectionEntityPageRegistryImplementation : NSObject <SPTFreeTierCollectionPrivateEntityPageRegistry>
{
    id <SPTFreeTierCollectionPrivateEntityPageRegistryDelegate> delegate;
    NSMutableArray *_entityPageRegistry;
    NSArray *_entityPageProviders;
}

@property(retain, nonatomic) NSArray *entityPageProviders; // @synthesize entityPageProviders=_entityPageProviders;
@property(retain, nonatomic) NSMutableArray *entityPageRegistry; // @synthesize entityPageRegistry=_entityPageRegistry;
@property(nonatomic) __weak id <SPTFreeTierCollectionPrivateEntityPageRegistryDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)updateProviders;
- (id)entityPageDictionaryForIdentifier:(id)arg1;
- (void)unregisterEntityPageProviderForIdentifier:(id)arg1;
- (void)registerEntityPageProvider:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

