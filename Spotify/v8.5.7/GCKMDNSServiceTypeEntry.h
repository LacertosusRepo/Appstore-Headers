//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface GCKMDNSServiceTypeEntry : NSObject
{
    NSMutableArray *_listenerEntries;
    NSMutableSet *_instanceNames;
    NSMutableSet *_subtypesToQuery;
}

@property(readonly, nonatomic) NSMutableSet *subtypesToQuery; // @synthesize subtypesToQuery=_subtypesToQuery;
@property(readonly, nonatomic) NSMutableSet *instanceNames; // @synthesize instanceNames=_instanceNames;
@property(readonly, nonatomic) NSMutableArray *listenerEntries; // @synthesize listenerEntries=_listenerEntries;
- (void).cxx_destruct;
- (void)recalculateSubtypes;
- (_Bool)removeListener:(id)arg1 options:(id *)arg2;
- (void)addListener:(id)arg1 forSubtypes:(id)arg2 options:(id)arg3;
- (id)init;

@end

