//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SPTRemoteConfiguration_GranularConfiguration;

@protocol SPTRemoteConfigurationPersistence <NSObject>
- (void)clearLocalOverride;
- (NSDictionary *)restoreLocalOverride;
- (void)storeLocalOverride:(NSDictionary *)arg1;
- (void)clearAll;
- (SPTRemoteConfiguration_GranularConfiguration *)restoreConfigurationWithType:(unsigned long long)arg1;
- (void)storeConfiguration:(SPTRemoteConfiguration_GranularConfiguration *)arg1 type:(unsigned long long)arg2;
@end
