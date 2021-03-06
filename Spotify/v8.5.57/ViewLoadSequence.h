//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSMutableDictionary, NSString;

@interface ViewLoadSequence : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int deviceYearClass; // @dynamic deviceYearClass;
@property(nonatomic) _Bool hasDeviceYearClass; // @dynamic hasDeviceYearClass;
@property(nonatomic) _Bool hasInitialConnectionType; // @dynamic hasInitialConnectionType;
@property(nonatomic) _Bool hasPageId; // @dynamic hasPageId;
@property(nonatomic) _Bool hasSequenceId; // @dynamic hasSequenceId;
@property(nonatomic) _Bool hasTerminalConnectionType; // @dynamic hasTerminalConnectionType;
@property(nonatomic) _Bool hasTerminalState; // @dynamic hasTerminalState;
@property(nonatomic) _Bool hasUri; // @dynamic hasUri;
@property(copy, nonatomic) NSString *initialConnectionType; // @dynamic initialConnectionType;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @dynamic metadata;
@property(readonly, nonatomic) unsigned long long metadata_Count; // @dynamic metadata_Count;
@property(copy, nonatomic) NSString *pageId; // @dynamic pageId;
@property(copy, nonatomic) NSString *sequenceId; // @dynamic sequenceId;
@property(retain, nonatomic) GPBStringInt64Dictionary *steps; // @dynamic steps;
@property(readonly, nonatomic) unsigned long long steps_Count; // @dynamic steps_Count;
@property(copy, nonatomic) NSString *terminalConnectionType; // @dynamic terminalConnectionType;
@property(copy, nonatomic) NSString *terminalState; // @dynamic terminalState;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;

@end

