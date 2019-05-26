//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPWelcomeMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolWelcomeMessage : SPTAppProtocolWAMPMessage <SPTWAMPWelcomeMessage>
{
    unsigned long long _sessionID;
    NSDictionary *_details;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, nonatomic) unsigned long long sessionID; // @synthesize sessionID=_sessionID;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
@property(readonly, nonatomic) NSString *appVersion;
@property(readonly, nonatomic) NSDictionary *roles;
- (id)initWithSessionID:(unsigned long long)arg1 details:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end
