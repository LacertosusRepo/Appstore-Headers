//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKDBDiscoveryInfo.h"

@class GCKDBLocalConnectionInfo, NSDate;

@interface GCKDBTCPDiscoveryInfo : GCKDBDiscoveryInfo
{
}

- (_Bool)allowsProbingAtTime:(id)arg1;

// Remaining properties
@property(nonatomic) long long connectionAttemptCount; // @dynamic connectionAttemptCount;
@property(copy, nonatomic) NSDate *lastConnectionAttempt; // @dynamic lastConnectionAttempt;
@property(retain, nonatomic) GCKDBLocalConnectionInfo *localConnectionInfo; // @dynamic localConnectionInfo;

@end

