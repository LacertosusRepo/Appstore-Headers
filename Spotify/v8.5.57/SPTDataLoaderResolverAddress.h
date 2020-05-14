//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTDataLoaderResolverAddress : NSObject
{
    NSString *_address;
    double _stalePeriod;
    double _lastFailedTime;
}

+ (id)dataLoaderResolverAddressWithAddress:(id)arg1;
@property(nonatomic) double lastFailedTime; // @synthesize lastFailedTime=_lastFailedTime;
@property(readonly, nonatomic) double stalePeriod; // @synthesize stalePeriod=_stalePeriod;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)failedToReach;
- (id)initWithAddress:(id)arg1;
@property(readonly, nonatomic, getter=isReachable) _Bool reachable;

@end

