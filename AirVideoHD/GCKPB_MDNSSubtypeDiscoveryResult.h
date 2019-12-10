//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

@interface GCKPB_MDNSSubtypeDiscoveryResult : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int deviceCapabilities; // @dynamic deviceCapabilities;
@property(retain, nonatomic) NSString *deviceModelName; // @dynamic deviceModelName;
@property(nonatomic) _Bool hasDeviceCapabilities; // @dynamic hasDeviceCapabilities;
@property(nonatomic) _Bool hasDeviceModelName; // @dynamic hasDeviceModelName;
@property(nonatomic) _Bool hasIsPositiveFilteringResult; // @dynamic hasIsPositiveFilteringResult;
@property(nonatomic) _Bool hasLatencyMs; // @dynamic hasLatencyMs;
@property(nonatomic) _Bool hasSubtypeAppId; // @dynamic hasSubtypeAppId;
@property(nonatomic) _Bool hasSubtypeNamespace; // @dynamic hasSubtypeNamespace;
@property(nonatomic) _Bool hasWasSubtypePreviouslyDiscovered; // @dynamic hasWasSubtypePreviouslyDiscovered;
@property(nonatomic) _Bool isPositiveFilteringResult; // @dynamic isPositiveFilteringResult;
@property(nonatomic) int latencyMs; // @dynamic latencyMs;
@property(nonatomic) int subtypeAppId; // @dynamic subtypeAppId;
@property(retain, nonatomic) NSString *subtypeNamespace; // @dynamic subtypeNamespace;
@property(nonatomic) _Bool wasSubtypePreviouslyDiscovered; // @dynamic wasSubtypePreviouslyDiscovered;

@end
