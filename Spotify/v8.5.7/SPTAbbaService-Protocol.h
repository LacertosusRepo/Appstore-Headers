//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags, SPTLegacyFeatureFlag, SPTLocalSettings;

@protocol SPTAbbaService <SPTService>
- (id <SPTLegacyFeatureFlag>)provideFeatureFlagWithName:(NSString *)arg1 enabledGroup:(NSString *)arg2 localSettings:(id <SPTLocalSettings>)arg3;
- (id <SPTAbbaFeatureFlags>)provideFeatureFlags;
@end
