//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPHelloMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolHelloMessage : SPTAppProtocolWAMPMessage <SPTWAMPHelloMessage>
{
    NSString *_realm;
    NSDictionary *_details;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *realm; // @synthesize realm=_realm;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
- (_Bool)validateInfoAndReturnFailureReason:(id *)arg1;
- (_Bool)validateRolesAndReturnFailureReason:(id *)arg1;
- (_Bool)validateDetailsAndReturnFailureReason:(id *)arg1;
- (_Bool)validateRealmAndReturnFailureReason:(id *)arg1;
- (_Bool)validateHelloMessageAndReturnFailureReason:(id *)arg1;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
@property(readonly, copy, nonatomic) NSString *token;
@property(readonly, copy, nonatomic) NSString *authID;
@property(readonly, nonatomic) NSArray *authMethods;
@property(readonly, nonatomic) NSDictionary *info;
@property(readonly, nonatomic) NSDictionary *roles;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

