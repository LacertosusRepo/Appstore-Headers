//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSMessageProtocol-Protocol.h"

@class NSData, NSString;
@protocol SPTEventSenderMessage;

@interface SPTEventMessage : NSObject <INSMessageProtocol>
{
    id <SPTEventSenderMessage> _message;
}

@property(retain, nonatomic) id <SPTEventSenderMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *name;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

