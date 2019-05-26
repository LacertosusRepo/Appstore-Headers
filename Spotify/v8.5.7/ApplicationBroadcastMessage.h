//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface ApplicationBroadcastMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *appIdsArray; // @dynamic appIdsArray;
@property(readonly, nonatomic) unsigned long long appIdsArray_Count; // @dynamic appIdsArray_Count;
@property(nonatomic) _Bool hasMessageNamespace; // @dynamic hasMessageNamespace;
@property(copy, nonatomic) NSString *messageNamespace; // @dynamic messageNamespace;
@property(copy, nonatomic) NSData *payloadBinary; // @dynamic payloadBinary;
@property(readonly, nonatomic) int payloadOneOfCase; // @dynamic payloadOneOfCase;
@property(copy, nonatomic) NSString *payloadUtf8; // @dynamic payloadUtf8;

@end

