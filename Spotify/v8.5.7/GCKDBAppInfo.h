//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class GCKDBDeviceInfo, NSDate, NSString;

@interface GCKDBAppInfo : NSManagedObject
{
}

- (_Bool)isExpired;

// Remaining properties
@property(copy, nonatomic) NSString *appID; // @dynamic appID;
@property(nonatomic) double cachedAppIDTTL; // @dynamic cachedAppIDTTL;
@property(retain, nonatomic) GCKDBDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSDate *lastUpdatedTime; // @dynamic lastUpdatedTime;
@property(nonatomic) _Bool supported; // @dynamic supported;

@end

