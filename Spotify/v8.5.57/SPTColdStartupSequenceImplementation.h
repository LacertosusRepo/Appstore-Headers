//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTColdStartupSequence-Protocol.h"

@class NSDictionary, NSString;

@interface SPTColdStartupSequenceImplementation : NSObject <SPTColdStartupSequence>
{
    NSString *_viewLoadSequenceID;
    NSString *_terminalState;
    NSString *_connectionType;
    unsigned long long _initialApplicationState;
    unsigned long long _terminalApplicationState;
    NSDictionary *_steps;
    NSDictionary *_metadata;
}

@property(readonly, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) unsigned long long terminalApplicationState; // @synthesize terminalApplicationState=_terminalApplicationState;
@property(readonly, nonatomic) unsigned long long initialApplicationState; // @synthesize initialApplicationState=_initialApplicationState;
@property(readonly, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
@property(readonly, nonatomic) NSString *terminalState; // @synthesize terminalState=_terminalState;
@property(readonly, nonatomic) NSString *viewLoadSequenceID; // @synthesize viewLoadSequenceID=_viewLoadSequenceID;
- (void).cxx_destruct;
- (id)initWithViewLoadSequenceID:(id)arg1 terminalState:(id)arg2 connectionType:(id)arg3 initialApplicationState:(unsigned long long)arg4 terminalApplicationState:(unsigned long long)arg5 steps:(id)arg6 metadata:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

