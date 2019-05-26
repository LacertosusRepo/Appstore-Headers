//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DesktopClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *applicationBuild; // @dynamic applicationBuild;
@property(nonatomic) int applicationBuildCl; // @dynamic applicationBuildCl;
@property(nonatomic) int clearcutVersion; // @dynamic clearcutVersion;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(nonatomic) _Bool hasApplicationBuild; // @dynamic hasApplicationBuild;
@property(nonatomic) _Bool hasApplicationBuildCl; // @dynamic hasApplicationBuildCl;
@property(nonatomic) _Bool hasClearcutVersion; // @dynamic hasClearcutVersion;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasLoggingId; // @dynamic hasLoggingId;
@property(nonatomic) _Bool hasOs; // @dynamic hasOs;
@property(nonatomic) _Bool hasOsFullVersion; // @dynamic hasOsFullVersion;
@property(nonatomic) _Bool hasOsMajorVersion; // @dynamic hasOsMajorVersion;
@property(copy, nonatomic) NSString *loggingId; // @dynamic loggingId;
@property(copy, nonatomic) NSString *os; // @dynamic os;
@property(copy, nonatomic) NSString *osFullVersion; // @dynamic osFullVersion;
@property(copy, nonatomic) NSString *osMajorVersion; // @dynamic osMajorVersion;

@end

