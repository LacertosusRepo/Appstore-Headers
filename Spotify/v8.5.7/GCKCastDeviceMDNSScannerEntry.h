//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface GCKCastDeviceMDNSScannerEntry : NSObject
{
    _Bool _hasLoggedGenericMDNSResponse;
    NSString *_endpointDeviceID;
    NSMutableSet *_loggedSubtypes;
}

@property(nonatomic) _Bool hasLoggedGenericMDNSResponse; // @synthesize hasLoggedGenericMDNSResponse=_hasLoggedGenericMDNSResponse;
@property(copy, nonatomic) NSMutableSet *loggedSubtypes; // @synthesize loggedSubtypes=_loggedSubtypes;
@property(readonly, nonatomic) NSString *endpointDeviceID; // @synthesize endpointDeviceID=_endpointDeviceID;
- (void).cxx_destruct;
- (id)initWithEndpointDeviceID:(id)arg1;

@end
