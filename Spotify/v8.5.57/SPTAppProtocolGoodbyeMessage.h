//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolWAMPMessage.h"

#import "SPTWAMPGoodbyeMessage-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTAppProtocolGoodbyeMessage : SPTAppProtocolWAMPMessage <SPTWAMPGoodbyeMessage>
{
    NSDictionary *_details;
    NSString *_reason;
}

+ (_Bool)rawMessageFormatIsValid:(id)arg1;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDictionary *details; // @synthesize details=_details;
- (void).cxx_destruct;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, nonatomic) long long messageType;
- (id)initWithDetails:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly) Class superclass;

@end

