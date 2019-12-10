//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKOCEnvironmentScan, NSData, NSString;

@interface GCKOCCreateSessionRequest : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *devicePin; // @dynamic devicePin;
@property(nonatomic) int devicePinType; // @dynamic devicePinType;
@property(retain, nonatomic) NSString *droidguardData; // @dynamic droidguardData;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(nonatomic) _Bool hasDevicePin; // @dynamic hasDevicePin;
@property(nonatomic) _Bool hasDevicePinType; // @dynamic hasDevicePinType;
@property(nonatomic) _Bool hasDroidguardData; // @dynamic hasDroidguardData;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;
@property(nonatomic) _Bool hasTlsClientPkHash; // @dynamic hasTlsClientPkHash;
@property(retain, nonatomic) NSData *tlsClientPkHash; // @dynamic tlsClientPkHash;

@end

