//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTGaiaConnectDeviceIncarnation : NSObject
{
    _Bool _isPreferred;
    NSString *_deviceId;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isPreferred; // @synthesize isPreferred=_isPreferred;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

