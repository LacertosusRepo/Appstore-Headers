//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MySpinVehicleDataManager : NSObject
{
    NSArray *_vehicleDataFilter;
}

+ (id)sharedInstance;
@property(readonly) NSArray *vehicleDataFilter; // @synthesize vehicleDataFilter=_vehicleDataFilter;
- (void).cxx_destruct;
- (void)dealloc;
- (void)connectionStateDidChange:(id)arg1;
- (void)removeObserver:(id)arg1 withSelector:(SEL)arg2 fromList:(id)arg3;
- (id)stringForKey:(unsigned int)arg1;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forVehicleDataKey:(unsigned int)arg2;
- (_Bool)addObserver:(id)arg1 withSelector:(SEL)arg2 forVehicleDataKey:(int)arg3;
- (_Bool)addObserver:(id)arg1;
- (id)vehicleDataWithKey:(unsigned int)arg1;
- (_Bool)canAccessVehicleDataWithKey:(unsigned int)arg1;
- (void)updateCachedValues:(id)arg1 keyString:(id)arg2;
- (void)updateVehicleDataForKey:(unsigned int)arg1 withJSONValue:(id)arg2;
- (void)updateVehicleDataFilter:(id)arg1;
- (id)init;

@end

