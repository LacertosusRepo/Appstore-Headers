//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import "INSSequenceNumberEntityProtocol-Protocol.h"

@class NSData, NSString;

@interface INSSequenceNumberEntity : NSManagedObject <INSSequenceNumberEntityProtocol>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *eventName; // @dynamic eventName;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *sequenceId; // @dynamic sequenceId;
@property(nonatomic) long long sequenceNumberNext; // @dynamic sequenceNumberNext;
@property(readonly) Class superclass;
@end

