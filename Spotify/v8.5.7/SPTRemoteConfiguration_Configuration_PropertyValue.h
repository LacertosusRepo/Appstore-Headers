//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SPTRemoteConfiguration_Configuration_PropertyValue_BoolValue, SPTRemoteConfiguration_Configuration_PropertyValue_EnumValue, SPTRemoteConfiguration_Configuration_PropertyValue_IntValue;

@interface SPTRemoteConfiguration_Configuration_PropertyValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_BoolValue *boolValue; // @dynamic boolValue;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *componentId; // @dynamic componentId;
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_EnumValue *enumValue; // @dynamic enumValue;
@property(retain, nonatomic) SPTRemoteConfiguration_Configuration_PropertyValue_IntValue *intValue; // @dynamic intValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) int structuredValueOneOfCase; // @dynamic structuredValueOneOfCase;

@end

