//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;

@interface SPTDataLoaderResolver : NSObject
{
    NSMutableDictionary *_resolverHost;
    NSHashTable *_addresses;
}

@property(retain, nonatomic) NSHashTable *addresses; // @synthesize addresses=_addresses;
@property(retain, nonatomic) NSMutableDictionary *resolverHost; // @synthesize resolverHost=_resolverHost;
- (void).cxx_destruct;
- (id)init;
- (id)resolverAddressForAddress:(id)arg1;
- (void)markAddressAsUnreachable:(id)arg1;
- (void)setAddresses:(id)arg1 forHost:(id)arg2;
- (id)addressForHost:(id)arg1;

@end
