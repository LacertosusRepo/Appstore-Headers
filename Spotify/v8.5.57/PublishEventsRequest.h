//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface PublishEventsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *eventArray; // @dynamic eventArray;
@property(readonly, nonatomic) unsigned long long eventArray_Count; // @dynamic eventArray_Count;
@property(nonatomic) _Bool suppressPersist; // @dynamic suppressPersist;

@end

