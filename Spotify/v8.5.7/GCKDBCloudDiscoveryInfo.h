//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GCKDBDeviceInfo, GCKDBNetworkAddress, GCKDBNetworkInfo;

@interface GCKDBCloudDiscoveryInfo : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) GCKDBDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(nonatomic) _Bool hasBeenProbed; // @dynamic hasBeenProbed;
@property(retain, nonatomic) GCKDBNetworkAddress *networkAddress; // @dynamic networkAddress;
@property(retain, nonatomic) GCKDBNetworkInfo *networkInfo; // @dynamic networkInfo;

@end
