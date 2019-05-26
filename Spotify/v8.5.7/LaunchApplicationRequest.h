//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@interface LaunchApplicationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int applicationId; // @dynamic applicationId;
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(nonatomic) _Bool hasApplicationId; // @dynamic hasApplicationId;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasHasSessionId; // @dynamic hasHasSessionId;
@property(nonatomic) _Bool hasLaunchType; // @dynamic hasLaunchType;
@property(nonatomic) _Bool hasRelaunchIfRunning; // @dynamic hasRelaunchIfRunning;
@property(nonatomic) _Bool hasRequestId; // @dynamic hasRequestId;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) int launchType; // @dynamic launchType;
@property(nonatomic) _Bool relaunchIfRunning; // @dynamic relaunchIfRunning;
@property(nonatomic) unsigned int requestId; // @dynamic requestId;

@end
