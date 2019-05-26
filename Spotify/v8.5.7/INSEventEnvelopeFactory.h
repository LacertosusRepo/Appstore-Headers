//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventEnvelopeFactoryProtocol-Protocol.h"

@class INSContextRegistry, NSString;
@protocol INSSequenceNumberGeneratorProtocol;

@interface INSEventEnvelopeFactory : NSObject <INSEventEnvelopeFactoryProtocol>
{
    INSContextRegistry *_contextRegistry;
    id <INSSequenceNumberGeneratorProtocol> _sequenceNumberGenerator;
}

@property(retain, nonatomic) id <INSSequenceNumberGeneratorProtocol> sequenceNumberGenerator; // @synthesize sequenceNumberGenerator=_sequenceNumberGenerator;
@property(retain, nonatomic) INSContextRegistry *contextRegistry; // @synthesize contextRegistry=_contextRegistry;
- (void).cxx_destruct;
- (id)envelopeForMessage:(id)arg1 name:(id)arg2;
- (id)envelopeForMessage:(id)arg1;
- (id)initWithContextRegistry:(id)arg1 sequenceNumberGenerator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

