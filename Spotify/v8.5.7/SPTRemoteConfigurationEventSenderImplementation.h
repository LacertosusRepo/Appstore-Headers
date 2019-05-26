//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationEventLogger-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTRemoteConfigurationEventSenderImplementation : NSObject <SPTRemoteConfigurationEventLogger>
{
    id <SPTEventSender> _eventSender;
}

@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

