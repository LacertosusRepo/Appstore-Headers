//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

@interface GCKPB_AppUsage1pLogEvent : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *androidPackageName; // @dynamic androidPackageName;
@property(nonatomic) int appType; // @dynamic appType;
@property(nonatomic) _Bool hasAndroidPackageName; // @dynamic hasAndroidPackageName;
@property(nonatomic) _Bool hasAppType; // @dynamic hasAppType;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(retain, nonatomic) NSString *version; // @dynamic version;

@end
