//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPSubscribedMessage-Protocol.h"

@class NSArray, NSString;

@interface SPTAppProtocolSubscribedMessage : SPTAppProtocolWAMPMessage <SPTWAMPSubscribedMessage>
{
    unsigned long long _triggeringRequestID;
    unsigned long long _subscriptionID;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) unsigned long long subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(readonly, nonatomic) unsigned long long triggeringRequestID; // @synthesize triggeringRequestID=_triggeringRequestID;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
- (id)initWithTriggeringRequestID:(unsigned long long)arg1 subscriptionID:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

