//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_AuthChallenge, GCKPB_AuthError, GCKPB_AuthResponse;

@interface GCKPB_DeviceAuthMessage : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_AuthChallenge *challenge; // @dynamic challenge;
@property(retain, nonatomic) GCKPB_AuthError *error; // @dynamic error;
@property(nonatomic) _Bool hasChallenge; // @dynamic hasChallenge;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) GCKPB_AuthResponse *response; // @dynamic response;

@end

