//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SPTGaiaDeviceProtocol <NSObject>
@property(nonatomic, readonly) _Bool isAvailableOnLocalNetwork;
@property(nonatomic, readonly) NSArray *incarnations;
@property(nonatomic, readonly) NSArray *capabilities;
- (_Bool)isSocialConnect;
@property(nonatomic, readonly) long long volumeSteps;
@property(nonatomic, readonly) _Bool supportsLogout;
@property(nonatomic, readonly) _Bool supportsVolume;
@property(nonatomic, readonly) float volume;
- (_Bool)isShuffleDevice;
@property(nonatomic, readonly) _Bool isDisabled;
@property(nonatomic, readonly) _Bool isAttached;
@property(nonatomic, readonly) unsigned long long deviceState;
@property(nonatomic, readonly) unsigned long long deviceType;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *loggingIdentifier;
@property(nonatomic, readonly) NSString *physicalDeviceId;
@property(nonatomic, readonly) NSString *cosmosDeviceId;

// Remaining properties
@property(nonatomic, readonly) _Bool shuffleDevice;
@property(nonatomic, readonly) _Bool socialConnect;
@end

