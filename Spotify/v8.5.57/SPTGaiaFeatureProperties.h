//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTGaiaFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _connectLockscreenControlsEnabled;
}

@property(readonly, nonatomic) _Bool connectLockscreenControlsEnabled; // @synthesize connectLockscreenControlsEnabled=_connectLockscreenControlsEnabled;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

