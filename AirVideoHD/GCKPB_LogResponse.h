//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_ExperimentIdList, GCKPB_QosTiersOverride;

@interface GCKPB_LogResponse : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_ExperimentIdList *experiments; // @dynamic experiments;
@property(nonatomic) _Bool hasExperiments; // @dynamic hasExperiments;
@property(nonatomic) _Bool hasNextRequestWaitMillis; // @dynamic hasNextRequestWaitMillis;
@property(nonatomic) _Bool hasQosTier; // @dynamic hasQosTier;
@property(nonatomic) long long nextRequestWaitMillis; // @dynamic nextRequestWaitMillis;
@property(retain, nonatomic) GCKPB_QosTiersOverride *qosTier; // @dynamic qosTier;

@end
