//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventMessageNode-Protocol.h"

@class NSString;

@interface INSEventMessageNodeWrapper : NSObject <INSEventMessageNode>
{
    NSString *_name;
    long long _sequenceNumber;
}

+ (id)wrapperWithEnvelope:(id)arg1;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithEnvelope:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

