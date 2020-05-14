//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class Criterion, NSMutableArray;

@interface PrecacheActivity : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appIdsArray; // @dynamic appIdsArray;
@property(readonly, nonatomic) unsigned long long appIdsArray_Count; // @dynamic appIdsArray_Count;
@property(retain, nonatomic) Criterion *application; // @dynamic application;
@property(nonatomic) int broadcastError; // @dynamic broadcastError;
@property(nonatomic) int connectionError; // @dynamic connectionError;
@property(nonatomic) _Bool hasApplication; // @dynamic hasApplication;
@property(nonatomic) _Bool hasBroadcastError; // @dynamic hasBroadcastError;
@property(nonatomic) _Bool hasConnectionError; // @dynamic hasConnectionError;
@property(nonatomic) _Bool hasRequestTimestampMs; // @dynamic hasRequestTimestampMs;
@property(nonatomic) _Bool hasResult; // @dynamic hasResult;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) long long requestTimestampMs; // @dynamic requestTimestampMs;
@property(nonatomic) int result; // @dynamic result;
@property(nonatomic) int type; // @dynamic type;

@end
