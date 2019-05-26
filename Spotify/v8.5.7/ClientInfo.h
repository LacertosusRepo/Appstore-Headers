//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class DesktopClientInfo, IosClientInfo, NSString;

@interface ClientInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientType; // @dynamic clientType;
@property(retain, nonatomic) DesktopClientInfo *desktopClientInfo; // @dynamic desktopClientInfo;
@property(nonatomic) _Bool hasClientType; // @dynamic hasClientType;
@property(nonatomic) _Bool hasDesktopClientInfo; // @dynamic hasDesktopClientInfo;
@property(nonatomic) _Bool hasHeterodyneConfigVersion; // @dynamic hasHeterodyneConfigVersion;
@property(nonatomic) _Bool hasIosClientInfo; // @dynamic hasIosClientInfo;
@property(nonatomic) _Bool hasRemoteHost; // @dynamic hasRemoteHost;
@property(nonatomic) _Bool hasRemoteHost6; // @dynamic hasRemoteHost6;
@property(nonatomic) long long heterodyneConfigVersion; // @dynamic heterodyneConfigVersion;
@property(retain, nonatomic) IosClientInfo *iosClientInfo; // @dynamic iosClientInfo;
@property(copy, nonatomic) NSString *remoteHost; // @dynamic remoteHost;
@property(copy, nonatomic) NSString *remoteHost6; // @dynamic remoteHost6;

@end
