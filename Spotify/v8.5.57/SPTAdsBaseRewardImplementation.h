//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseReward-Protocol.h"

@class NSNumber, NSString;

@interface SPTAdsBaseRewardImplementation : NSObject <SPTAdsBaseReward>
{
    unsigned long long _type;
    NSNumber *_value;
    NSString *_sponsorID;
}

@property(readonly, copy, nonatomic) NSString *sponsorID; // @synthesize sponsorID=_sponsorID;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)parseType:(id)arg1;
- (id)initWithType:(id)arg1 value:(id)arg2 sponsorID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

