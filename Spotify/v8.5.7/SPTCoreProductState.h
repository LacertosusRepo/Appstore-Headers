//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProductState-Protocol.h"

@class NSDictionary, NSMapTable, NSString;

@interface SPTCoreProductState : NSObject <SPTProductState>
{
    shared_ptr_2175cb8d _productState;
    struct scoped_connection _productStateConnection;
    NSMapTable *_observers;
    NSString *_previousStreamingRules;
}

@property(copy, nonatomic) NSString *previousStreamingRules; // @synthesize previousStreamingRules=_previousStreamingRules;
@property(readonly, copy, nonatomic) NSMapTable *observers; // @synthesize observers=_observers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (shared_ptr_2175cb8d)cppProductState;
@property(nonatomic) __weak NSDictionary *overrides;
@property(nonatomic) __weak NSDictionary *originalValues;
@property(readonly, nonatomic) __weak NSDictionary *values;
- (void)writeStringToBackend:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 on:(id)arg2;
- (id)initWithCoreProductState:(shared_ptr_2175cb8d)arg1;
- (map_0edfe763)mapFromValuesDict:(id)arg1;
- (id)valuesDictFromMap:(const map_0edfe763 *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

