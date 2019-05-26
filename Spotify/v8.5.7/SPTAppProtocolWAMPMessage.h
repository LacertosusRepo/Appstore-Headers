//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWAMPMessage-Protocol.h"

@class NSArray, NSString;

@interface SPTAppProtocolWAMPMessage : NSObject <SPTWAMPMessage>
{
}

+ (id)messageFromRawMessage:(id)arg1 error:(id *)arg2;
+ (_Bool)rawMessageFormatIsValid:(id)arg1;
- (_Bool)populateWithRawMessage:(id)arg1 error:(id *)arg2;
- (id)initWithRawMessage:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *rawMessage;
@property(readonly, copy, nonatomic) NSString *jsonRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long messageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

