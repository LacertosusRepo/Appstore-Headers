//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SPTAdReward : NSObject
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

@end
