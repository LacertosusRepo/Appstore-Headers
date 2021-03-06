//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTApplicationScopeFeatureFlagSignalFactory-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagBuilder, SPTFeatureFlagSignal, SPTMultipleChoiceFeatureFlagBuilder;

@protocol SPTFeatureFlagFactory <SPTApplicationScopeFeatureFlagSignalFactory>
- (id <SPTFeatureFlagSignal>)productStateSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)productStateSignalWithKey:(NSString *)arg1;
- (id <SPTFeatureFlagSignal>)abbaSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)abbaSignalWithKey:(NSString *)arg1;
- (id <SPTFeatureFlagSignal>)localSettingsSignalWithKey:(NSString *)arg1 mapper:(long long (^)(id))arg2;
- (id <SPTFeatureFlagSignal>)localSettingsSignalWithKey:(NSString *)arg1;
- (id <SPTMultipleChoiceFeatureFlagBuilder>)createMultipleChoiceFeatureFlagBuilder;
- (id <SPTFeatureFlagBuilder>)createFeatureFlagBuilder;
@end

