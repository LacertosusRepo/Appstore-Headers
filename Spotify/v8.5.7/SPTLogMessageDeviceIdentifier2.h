//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageDeviceIdentifier2 : SPTLogMessage
{
    NSString *_idfaValue;
    NSString *_deviceidValue;
    NSString *_googleaidValue;
}

+ (id)messageWithIdfa:(id)arg1 deviceid:(id)arg2 googleaid:(id)arg3;
@property(copy, nonatomic) NSString *googleaidValue; // @synthesize googleaidValue=_googleaidValue;
@property(copy, nonatomic) NSString *deviceidValue; // @synthesize deviceidValue=_deviceidValue;
@property(copy, nonatomic) NSString *idfaValue; // @synthesize idfaValue=_idfaValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
