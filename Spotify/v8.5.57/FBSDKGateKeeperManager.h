//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKGateKeeperManager : NSObject
{
}

+ (_Bool)_gateKeeperIsValid;
+ (_Bool)_gateKeeperTimestampIsValid:(id)arg1;
+ (void)_didProcessGKFromNetwork:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2;
+ (id)requestToLoadGateKeepers;
+ (void)loadGateKeepers:(CDUnknownBlockType)arg1;
+ (_Bool)boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (void)initialize;

@end

