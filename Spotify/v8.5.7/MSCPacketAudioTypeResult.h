//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSCBasePacket.h"

@interface MSCPacketAudioTypeResult : MSCBasePacket
{
    unsigned char _status;
    unsigned char _resultCode;
    unsigned int _requestID;
}

@property unsigned char resultCode; // @synthesize resultCode=_resultCode;
@property unsigned char status; // @synthesize status=_status;
@property unsigned int requestID; // @synthesize requestID=_requestID;

@end

