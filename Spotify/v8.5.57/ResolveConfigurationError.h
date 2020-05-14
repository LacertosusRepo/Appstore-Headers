//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ResolveConfigurationError : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *clientVersion; // @dynamic clientVersion;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasClientVersion; // @dynamic hasClientVersion;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(nonatomic) long long statusCode; // @dynamic statusCode;

@end

