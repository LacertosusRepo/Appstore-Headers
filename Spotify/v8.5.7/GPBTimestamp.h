//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSDate;

@interface GPBTimestamp : GPBMessage
{
}

+ (id)descriptor;
@property(nonatomic) double timeIntervalSince1970;
@property(retain, nonatomic) NSDate *date;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithDate:(id)arg1;

// Remaining properties
@property(nonatomic) int nanos; // @dynamic nanos;
@property(nonatomic) long long seconds; // @dynamic seconds;

@end

