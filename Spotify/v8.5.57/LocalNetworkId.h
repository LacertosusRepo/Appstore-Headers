//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
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
@property(retain, nonatomic) GPBUInt64Array *shreddedIpAddressArray; // @dynamic shreddedIpAddressArray;
@property(readonly, nonatomic) unsigned long long shreddedIpAddressArray_Count; // @dynamic shreddedIpAddressArray_Count;

@end

