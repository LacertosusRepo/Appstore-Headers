//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class NSString;

@interface GCKPB_QosTierConfiguration : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLogSourceName; // @dynamic hasLogSourceName;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(retain, nonatomic) NSString *logSourceName; // @dynamic logSourceName;
@property(nonatomic) int qosTier; // @dynamic qosTier;

@end
