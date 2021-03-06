//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTConnectivityWebgateUserAgentParameters;

@interface SPTConnectivityAuthenticatedScopeConfiguration : NSObject
{
    _Bool _includePayloads;
    NSString *_clientVersionLong;
    NSString *_cachePath;
    NSString *_clientId;
    NSString *_deviceId;
    NSString *_webgateLocale;
    SPTConnectivityWebgateUserAgentParameters *_webgateUserAgentParameters;
}

@property(retain, nonatomic) SPTConnectivityWebgateUserAgentParameters *webgateUserAgentParameters; // @synthesize webgateUserAgentParameters=_webgateUserAgentParameters;
@property(copy, nonatomic) NSString *webgateLocale; // @synthesize webgateLocale=_webgateLocale;
@property(nonatomic) _Bool includePayloads; // @synthesize includePayloads=_includePayloads;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(copy, nonatomic) NSString *clientVersionLong; // @synthesize clientVersionLong=_clientVersionLong;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Configuration cpp;
- (id)initWithConfiguration:(struct Configuration)arg1;
- (id)init;

@end

