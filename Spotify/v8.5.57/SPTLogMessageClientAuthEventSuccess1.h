//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageClientAuthEventSuccess1 : SPTLogMessage
{
    NSString *_authIdValue;
}

+ (id)messageWithAuthId:(id)arg1;
@property(copy, nonatomic) NSString *authIdValue; // @synthesize authIdValue=_authIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

