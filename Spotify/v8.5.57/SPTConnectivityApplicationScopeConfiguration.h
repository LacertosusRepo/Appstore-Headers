//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTConnectivityApplicationScopeConfiguration : NSObject
{
    _Bool _enableIPv6;
    _Bool _enableOldNetworkImplementation;
    _Bool _enablePerformanceTracing;
    unsigned int _clientRevision;
    NSString *_clientId;
    NSString *_cachePath;
    NSString *_deviceId;
    NSString *_deviceHardwareModel;
    NSString *_clientVersionLong;
    NSString *_accesspointLanguage;
    long long _streamingRulesSupported;
    long long _reconnectPolicy;
    NSString *_defaultHTTPUserAgent;
}

@property(nonatomic) _Bool enablePerformanceTracing; // @synthesize enablePerformanceTracing=_enablePerformanceTracing;
@property(copy, nonatomic) NSString *defaultHTTPUserAgent; // @synthesize defaultHTTPUserAgent=_defaultHTTPUserAgent;
@property(nonatomic) long long reconnectPolicy; // @synthesize reconnectPolicy=_reconnectPolicy;
@property(nonatomic) _Bool enableOldNetworkImplementation; // @synthesize enableOldNetworkImplementation=_enableOldNetworkImplementation;
@property(nonatomic) _Bool enableIPv6; // @synthesize enableIPv6=_enableIPv6;
@property(nonatomic) long long streamingRulesSupported; // @synthesize streamingRulesSupported=_streamingRulesSupported;
@property(copy, nonatomic) NSString *accesspointLanguage; // @synthesize accesspointLanguage=_accesspointLanguage;
@property(copy, nonatomic) NSString *clientVersionLong; // @synthesize clientVersionLong=_clientVersionLong;
@property(nonatomic) unsigned int clientRevision; // @synthesize clientRevision=_clientRevision;
@property(copy, nonatomic) NSString *deviceHardwareModel; // @synthesize deviceHardwareModel=_deviceHardwareModel;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Configuration cpp;
- (id)initWithConfiguration:(struct Configuration)arg1;
- (id)init;

@end

