//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class RemoteDisplayPluginConfig;

@interface RemoteDisplayPluginMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int castAppId; // @dynamic castAppId;
@property(nonatomic) int errorType; // @dynamic errorType;
@property(nonatomic) _Bool hasCastAppId; // @dynamic hasCastAppId;
@property(nonatomic) _Bool hasErrorType; // @dynamic hasErrorType;
@property(nonatomic) _Bool hasPluginType; // @dynamic hasPluginType;
@property(nonatomic) _Bool hasPluginVersion; // @dynamic hasPluginVersion;
@property(nonatomic) _Bool hasRemoteDisplayConfig; // @dynamic hasRemoteDisplayConfig;
@property(nonatomic) _Bool hasSessionDuration; // @dynamic hasSessionDuration;
@property(nonatomic) int pluginType; // @dynamic pluginType;
@property(nonatomic) int pluginVersion; // @dynamic pluginVersion;
@property(retain, nonatomic) RemoteDisplayPluginConfig *remoteDisplayConfig; // @dynamic remoteDisplayConfig;
@property(nonatomic) int sessionDuration; // @dynamic sessionDuration;

@end

