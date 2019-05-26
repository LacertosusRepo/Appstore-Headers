//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKAnalyticsLoggingSession.h"

#import "NSSecureCoding-Protocol.h"

@class GCKDevice, NSString;

@interface GCKApplicationLoggingSession : GCKAnalyticsLoggingSession <NSSecureCoding>
{
    _Bool _isReconnect;
    GCKDevice *_device;
    NSString *_applicationID;
    NSString *_receiverSessionID;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *receiverSessionID; // @synthesize receiverSessionID=_receiverSessionID;
@property(readonly, nonatomic) _Bool isReconnect; // @synthesize isReconnect=_isReconnect;
@property(copy, nonatomic) NSString *applicationID; // @synthesize applicationID=_applicationID;
@property(copy, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWifiBSSID:(id)arg1 partialSenderIPAddresses:(id)arg2 sessionID:(long long)arg3 device:(id)arg4 applicationID:(id)arg5 isReconnect:(_Bool)arg6;
- (id)initWithDevice:(id)arg1 applicationID:(id)arg2 isReconnect:(_Bool)arg3;

@end

