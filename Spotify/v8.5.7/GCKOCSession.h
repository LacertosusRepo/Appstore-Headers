//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface GCKOCSession : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasPeerPkHash; // @dynamic hasPeerPkHash;
@property(nonatomic) _Bool hasServerAddress; // @dynamic hasServerAddress;
@property(nonatomic) _Bool hasServerPort; // @dynamic hasServerPort;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSData *peerPkHash; // @dynamic peerPkHash;
@property(copy, nonatomic) NSString *serverAddress; // @dynamic serverAddress;
@property(nonatomic) int serverPort; // @dynamic serverPort;

@end
