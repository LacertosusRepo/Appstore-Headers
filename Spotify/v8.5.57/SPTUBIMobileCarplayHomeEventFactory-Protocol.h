//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileCarplayHome_HomeRowEventFactory;

@protocol SPTUBIMobileCarplayHomeEventFactory <NSObject>
- (id <SPTUBIMobileCarplayHome_HomeRowEventFactory>)homeRowFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2 reason:(NSString *)arg3;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

