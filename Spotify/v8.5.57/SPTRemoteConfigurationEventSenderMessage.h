//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderMessage-Protocol.h"

@class NSData, NSString;
@protocol SPTRemoteConfigurationEventLoggerMessage;

@interface SPTRemoteConfigurationEventSenderMessage : NSObject <SPTEventSenderMessage>
{
    id <SPTRemoteConfigurationEventLoggerMessage> _message;
}

@property(retain, nonatomic) id <SPTRemoteConfigurationEventLoggerMessage> message; // @synthesize message=_message;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

