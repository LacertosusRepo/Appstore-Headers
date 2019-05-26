//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationInteractionLogger-Protocol.h"

@class NSString;
@protocol SPTInstrumentationTransport;

@interface SPTInstrumentationInteractionLoggerImplementation : NSObject <SPTInstrumentationInteractionLogger>
{
    id <SPTInstrumentationTransport> _transport;
}

@property(retain, nonatomic) id <SPTInstrumentationTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)logInteractionWithItemID:(id)arg1 interactionID:(id)arg2 interactionType:(id)arg3 interactionIntent:(id)arg4 pageIdentifier:(id)arg5 pageURI:(id)arg6;
- (id)initWithTransport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

