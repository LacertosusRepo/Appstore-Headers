//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface WrapKeyResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(retain, nonatomic) NSMutableArray *keysArray; // @dynamic keysArray;
@property(readonly, nonatomic) unsigned long long keysArray_Count; // @dynamic keysArray_Count;

@end

