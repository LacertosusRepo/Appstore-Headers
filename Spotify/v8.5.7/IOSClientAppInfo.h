//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface IOSClientAppInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *appBundleId; // @dynamic appBundleId;
@property(copy, nonatomic) NSString *appVersion; // @dynamic appVersion;
@property(nonatomic) _Bool hasAppBundleId; // @dynamic hasAppBundleId;
@property(nonatomic) _Bool hasAppVersion; // @dynamic hasAppVersion;

@end

