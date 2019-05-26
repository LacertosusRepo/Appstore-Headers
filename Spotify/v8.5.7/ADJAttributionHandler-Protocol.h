//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADJActivityPackage, ADJAttributionResponseData, ADJSdkClickResponseData, ADJSessionResponseData;
@protocol ADJActivityHandler;

@protocol ADJAttributionHandler
- (void)teardown;
- (void)resumeSending;
- (void)pauseSending;
- (void)getAttribution;
- (void)checkAttributionResponse:(ADJAttributionResponseData *)arg1;
- (void)checkSdkClickResponse:(ADJSdkClickResponseData *)arg1;
- (void)checkSessionResponse:(ADJSessionResponseData *)arg1;
- (id)initWithActivityHandler:(id <ADJActivityHandler>)arg1 withAttributionPackage:(ADJActivityPackage *)arg2 startsSending:(_Bool)arg3;
@end
