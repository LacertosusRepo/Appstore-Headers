//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CASDeviceSelectorItem-Protocol.h"

@class NSString;

@interface CASDeviceOSVersionItem : NSObject <CASDeviceSelectorItem>
{
    NSString *_version;
    long long _relation;
}

@property(nonatomic) long long relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)stringValue;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

