//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber, NSString;

@protocol INSEventMessageNode <NSObject>
@property(readonly, nonatomic) NSNumber *authenticated;
@property(readonly, nonatomic) long long sequenceNumber;
@property(readonly, copy, nonatomic) NSData *sequenceId;
@property(readonly, copy, nonatomic) NSString *name;
@end

