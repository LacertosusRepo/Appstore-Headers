//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@interface GCKPB_MdnsResponseParseError : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResponseErrorCode; // @dynamic hasResponseErrorCode;
@property(nonatomic) _Bool hasSequenceNumber; // @dynamic hasSequenceNumber;
@property(nonatomic) int responseErrorCode; // @dynamic responseErrorCode;
@property(nonatomic) int sequenceNumber; // @dynamic sequenceNumber;

@end
