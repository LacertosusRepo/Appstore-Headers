//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp, NSString;

@interface SPTSearchProtoMainRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int entityVersion; // @dynamic entityVersion;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(nonatomic) int limit; // @dynamic limit;
@property(copy, nonatomic) NSString *locale; // @dynamic locale;
@property(copy, nonatomic) NSString *query; // @dynamic query;
@property(retain, nonatomic) GPBTimestamp *timestamp; // @dynamic timestamp;

@end

