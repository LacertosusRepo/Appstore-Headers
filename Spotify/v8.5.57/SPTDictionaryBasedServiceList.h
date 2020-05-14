//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTServiceList-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTDictionaryBasedServiceList : NSObject <SPTServiceList>
{
    NSArray *_scopes;
    NSDictionary *_serviceClassesByScope;
    NSDictionary *_parents;
}

@property(readonly, copy, nonatomic) NSDictionary *parents; // @synthesize parents=_parents;
@property(copy, nonatomic) NSDictionary *serviceClassesByScope; // @synthesize serviceClassesByScope=_serviceClassesByScope;
@property(readonly, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
- (void).cxx_destruct;
- (id)readConfiguration:(id)arg1;
- (id)serviceClassesForScope:(id)arg1;
- (id)parentScopeForScope:(id)arg1;
- (id)initWithClassNamesByScope:(id)arg1 scopeParents:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
