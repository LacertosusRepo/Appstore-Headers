//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt64Array;

@interface LocalNetworkId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLnid; // @dynamic hasLnid;
@property(nonatomic) unsigned long long lnid; // @dynamic lnid;
@property(retain, nonatomic) GPBUInt64Array *lnidWArray; // @dynamic lnidWArray;
@property(readonly, nonatomic) unsigned long long lnidWArray_Count; // @dynamic lnidWArray_Count;

@end

