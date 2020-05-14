//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, IOSClientAppInfo, NSMutableArray;

@interface APIUsageReport : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *featureUsageCountersArray; // @dynamic featureUsageCountersArray;
@property(readonly, nonatomic) unsigned long long featureUsageCountersArray_Count; // @dynamic featureUsageCountersArray_Count;
@property(nonatomic) _Bool hasIosClientAppInfo; // @dynamic hasIosClientAppInfo;
@property(retain, nonatomic) IOSClientAppInfo *iosClientAppInfo; // @dynamic iosClientAppInfo;
@property(retain, nonatomic) GPBEnumArray *uncountedFeaturesArray; // @dynamic uncountedFeaturesArray;
@property(readonly, nonatomic) unsigned long long uncountedFeaturesArray_Count; // @dynamic uncountedFeaturesArray_Count;

@end

