//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSMessageEntityProtocol-Protocol.h"

@class NSData, NSDate, NSString;

@interface INSMessageEntityProxy : NSObject <INSMessageEntityProtocol>
{
    _Bool _delivered;
    _Bool _authenticated;
    int _retryCount;
    NSDate *_createdDate;
    NSData *_fragments;
    NSString *_messageId;
    NSString *_name;
    NSDate *_retryDate;
    NSData *_sequenceId;
    long long _sequenceNumber;
    NSString *_owner;
}

@property(copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(nonatomic) _Bool authenticated; // @synthesize authenticated=_authenticated;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSData *sequenceId; // @synthesize sequenceId=_sequenceId;
@property(copy, nonatomic) NSDate *retryDate; // @synthesize retryDate=_retryDate;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(retain, nonatomic) NSData *fragments; // @synthesize fragments=_fragments;
@property(nonatomic) _Bool delivered; // @synthesize delivered=_delivered;
@property(copy, nonatomic) NSDate *createdDate; // @synthesize createdDate=_createdDate;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

