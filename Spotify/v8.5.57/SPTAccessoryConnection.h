//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory;

@interface SPTAccessoryConnection : NSObject
{
    EAAccessory *_accessory;
    double _timestamp;
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1 timestamp:(double)arg2;

@end

