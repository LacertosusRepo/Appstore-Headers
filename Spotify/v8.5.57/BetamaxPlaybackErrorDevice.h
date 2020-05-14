//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface BetamaxPlaybackErrorDevice : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSString *errorDomain; // @dynamic errorDomain;
@property(copy, nonatomic) NSString *errorExtra1; // @dynamic errorExtra1;
@property(copy, nonatomic) NSString *errorExtra2; // @dynamic errorExtra2;
@property(copy, nonatomic) NSString *featureIdentifier; // @dynamic featureIdentifier;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasErrorDomain; // @dynamic hasErrorDomain;
@property(nonatomic) _Bool hasErrorExtra1; // @dynamic hasErrorExtra1;
@property(nonatomic) _Bool hasErrorExtra2; // @dynamic hasErrorExtra2;
@property(nonatomic) _Bool hasFeatureIdentifier; // @dynamic hasFeatureIdentifier;
@property(nonatomic) _Bool hasMediaURL; // @dynamic hasMediaURL;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

