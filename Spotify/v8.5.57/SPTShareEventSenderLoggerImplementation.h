//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShareEventSenderLogger-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTShareEventSenderLoggerImplementation : NSObject <SPTShareEventSenderLogger>
{
    id <SPTEventSender> _eventSender;
}

@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (void).cxx_destruct;
- (void)logPlaybackFromDeepLinkWithEntityURI:(id)arg1 contextURI:(id)arg2 playbackId:(id)arg3 deeplinkSessionIdentifier:(id)arg4;
- (void)logDeeplinkOpenEventWithEntityURI:(id)arg1 sourceAppIdentifier:(id)arg2 externalLink:(id)arg3 deeplinkSessionIdentifier:(id)arg4;
- (void)logShareWithEntityURI:(id)arg1 destinationId:(id)arg2 shareId:(id)arg3 sourcePageUri:(id)arg4 sourcePage:(id)arg5 systemDestination:(id)arg6;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

