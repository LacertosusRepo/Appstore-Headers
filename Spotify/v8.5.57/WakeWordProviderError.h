//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WakeWordProviderError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasErrorDomain; // @dynamic hasErrorDomain;
@property(nonatomic) _Bool hasProviderId; // @dynamic hasProviderId;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(copy, nonatomic) NSString *providerId; // @dynamic providerId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

