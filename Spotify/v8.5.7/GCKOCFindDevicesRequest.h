//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GCKOCEnvironmentScan, NSString;

@interface GCKOCFindDevicesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationId; // @dynamic applicationId;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;

@end

