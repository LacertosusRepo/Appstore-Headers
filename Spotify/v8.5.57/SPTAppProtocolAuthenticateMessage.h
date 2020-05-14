//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPAuthenticateMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolAuthenticateMessage : SPTAppProtocolWAMPMessage <SPTWAMPAuthenticateMessage>
{
    NSString *_signature;
    NSDictionary *_extra;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, nonatomic) NSDictionary *extra; // @synthesize extra=_extra;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

