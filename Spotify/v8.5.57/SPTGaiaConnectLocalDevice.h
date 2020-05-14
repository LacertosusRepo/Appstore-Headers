//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaLocalDeviceProtocol-Protocol.h"

@class NSString;

@interface SPTGaiaConnectLocalDevice : NSObject <SPTGaiaLocalDeviceProtocol>
{
    _Bool _isActive;
    NSString *_physicalDeviceId;
    NSString *_name;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *physicalDeviceId; // @synthesize physicalDeviceId=_physicalDeviceId;
- (void).cxx_destruct;
- (id)deviceId;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
