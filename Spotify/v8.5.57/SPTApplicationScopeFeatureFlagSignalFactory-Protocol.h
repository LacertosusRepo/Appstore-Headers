//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTFeatureFlagSignal, SPTWriteableFeatureFlagSignal;

@protocol SPTApplicationScopeFeatureFlagSignalFactory <NSObject>
+ (long long (^)(id))defaultFeatureFlagSignalMapper;
- (id <SPTFeatureFlagSignal>)signal:(id <SPTFeatureFlagSignal>)arg1 withDefaultState:(long long)arg2;
- (id <SPTFeatureFlagSignal>)signal:(id <SPTFeatureFlagSignal>)arg1 withOverride:(id <SPTFeatureFlagSignal>)arg2;
- (id <SPTFeatureFlagSignal>)signalWithInverse:(id <SPTFeatureFlagSignal>)arg1;
- (id <SPTFeatureFlagSignal>)signalWithAny:(NSArray *)arg1;
- (id <SPTFeatureFlagSignal>)signalWithAll:(NSArray *)arg1;
- (id <SPTFeatureFlagSignal>)userDefaultsSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)userDefaultsSignalWithKey:(NSString *)arg1;
- (id <SPTWriteableFeatureFlagSignal>)writeableSignal;
- (id <SPTFeatureFlagSignal>)constantSignalWithState:(long long)arg1;
@end

