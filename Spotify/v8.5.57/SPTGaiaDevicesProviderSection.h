//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTGaiaDevicesProviderSection : NSObject
{
    long long _type;
    NSArray *_devices;
}

@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithDevices:(id)arg1 type:(long long)arg2;

@end

