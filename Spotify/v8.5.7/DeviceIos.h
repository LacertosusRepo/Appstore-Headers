//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface DeviceIos : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *deviceType; // @dynamic deviceType;
@property(nonatomic) _Bool hasDeviceType; // @dynamic hasDeviceType;
@property(nonatomic) _Bool hasIdentifierForVendor; // @dynamic hasIdentifierForVendor;
@property(nonatomic) _Bool hasOsVersion; // @dynamic hasOsVersion;
@property(copy, nonatomic) NSData *identifierForVendor; // @dynamic identifierForVendor;
@property(copy, nonatomic) NSString *osVersion; // @dynamic osVersion;

@end

