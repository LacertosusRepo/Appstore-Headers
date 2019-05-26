//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSArray, NSData, NSString;

@interface SPTLogMessageUSBAccessory1 : SPTLogMessage
{
    _Bool _connectedValue;
    NSData *_playbackIdValue;
    long long _connectionIdValue;
    NSString *_nameValue;
    NSString *_manufacturerValue;
    NSString *_modelNumberValue;
    NSString *_serialNumberValue;
    NSString *_firmwareRevisionValue;
    NSString *_hardwareRevisionValue;
    NSArray *_protocolStringsValue;
}

+ (id)messageWithPlaybackId:(id)arg1 connected:(_Bool)arg2 connectionId:(long long)arg3 name:(id)arg4 manufacturer:(id)arg5 modelNumber:(id)arg6 serialNumber:(id)arg7 firmwareRevision:(id)arg8 hardwareRevision:(id)arg9 protocolStrings:(id)arg10;
@property(copy, nonatomic) NSArray *protocolStringsValue; // @synthesize protocolStringsValue=_protocolStringsValue;
@property(copy, nonatomic) NSString *hardwareRevisionValue; // @synthesize hardwareRevisionValue=_hardwareRevisionValue;
@property(copy, nonatomic) NSString *firmwareRevisionValue; // @synthesize firmwareRevisionValue=_firmwareRevisionValue;
@property(copy, nonatomic) NSString *serialNumberValue; // @synthesize serialNumberValue=_serialNumberValue;
@property(copy, nonatomic) NSString *modelNumberValue; // @synthesize modelNumberValue=_modelNumberValue;
@property(copy, nonatomic) NSString *manufacturerValue; // @synthesize manufacturerValue=_manufacturerValue;
@property(copy, nonatomic) NSString *nameValue; // @synthesize nameValue=_nameValue;
@property(nonatomic) long long connectionIdValue; // @synthesize connectionIdValue=_connectionIdValue;
@property(nonatomic) _Bool connectedValue; // @synthesize connectedValue=_connectedValue;
@property(copy, nonatomic) NSData *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
