//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningActiveSocialDeviceModelEntity-Protocol.h"

@class NSString;

@interface SPTSocialListeningActiveSocialDeviceModel : NSObject <SPTSocialListeningActiveSocialDeviceModelEntity>
{
    _Bool _featureEnabled;
    _Bool _featureAvailable;
    NSString *_deviceID;
}

@property(readonly, nonatomic) _Bool featureAvailable; // @synthesize featureAvailable=_featureAvailable;
@property(readonly, nonatomic) _Bool featureEnabled; // @synthesize featureEnabled=_featureEnabled;
@property(readonly, copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void).cxx_destruct;
- (id)initWithDeviceId:(id)arg1 featureAvailable:(_Bool)arg2 featureEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

