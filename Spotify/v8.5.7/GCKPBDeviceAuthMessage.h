//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GCKPBAuthChallenge, GCKPBAuthError, GCKPBAuthResponse;

@interface GCKPBDeviceAuthMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPBAuthChallenge *challenge; // @dynamic challenge;
@property(retain, nonatomic) GCKPBAuthError *error; // @dynamic error;
@property(nonatomic) _Bool hasChallenge; // @dynamic hasChallenge;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasResponse; // @dynamic hasResponse;
@property(retain, nonatomic) GCKPBAuthResponse *response; // @dynamic response;

@end

