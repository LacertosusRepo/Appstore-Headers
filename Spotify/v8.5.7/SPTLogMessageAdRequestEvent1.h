//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageAdRequestEvent1 : SPTLogMessage
{
    NSString *_featureIdentifierValue;
    NSString *_requestedAdTypeValue;
}

+ (id)messageWithFeatureIdentifier:(id)arg1 requestedAdType:(id)arg2;
@property(copy, nonatomic) NSString *requestedAdTypeValue; // @synthesize requestedAdTypeValue=_requestedAdTypeValue;
@property(copy, nonatomic) NSString *featureIdentifierValue; // @synthesize featureIdentifierValue=_featureIdentifierValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
