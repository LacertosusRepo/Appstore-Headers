//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderCore-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTEventSenderCoreImplementation : NSObject <SPTEventSenderCore>
{
    id <SPTEventSender> _eventSender;
}

@property(nonatomic) __weak id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (_Bool)sendEventWithName:(id)arg1 data:(id)arg2;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
