//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPHelloMessage.h"

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
- (id)initWithRealm:(id)arg1 details:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

