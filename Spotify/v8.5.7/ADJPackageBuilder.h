//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADJActivityState, ADJAttribution, ADJConfig, ADJDeviceInfo, ADJSessionParameters, NSDate, NSDictionary, NSString;

@interface ADJPackageBuilder : NSObject
{
    NSDate *_clickTime;
    NSDate *_purchaseTime;
    NSString *_deeplink;
    NSDictionary *_attributionDetails;
    NSDictionary *_deeplinkParameters;
    ADJAttribution *_attribution;
    double _createdAt;
    ADJConfig *_adjustConfig;
    ADJDeviceInfo *_deviceInfo;
    ADJActivityState *_activityState;
    ADJSessionParameters *_sessionParameters;
}

+ (void)parameters:(id)arg1 setNumberInt:(id)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setNumber:(id)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setBool:(_Bool)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setDictionary:(id)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setDictionaryJson:(id)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setDuration:(double)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setDate:(id)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setDate1970:(double)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setInt:(int)arg2 forKey:(id)arg3;
+ (void)parameters:(id)arg1 setString:(id)arg2 forKey:(id)arg3;
@property(nonatomic) __weak ADJSessionParameters *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(copy, nonatomic) ADJActivityState *activityState; // @synthesize activityState=_activityState;
@property(nonatomic) __weak ADJDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(nonatomic) __weak ADJConfig *adjustConfig; // @synthesize adjustConfig=_adjustConfig;
@property(nonatomic) double createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) ADJAttribution *attribution; // @synthesize attribution=_attribution;
@property(retain, nonatomic) NSDictionary *deeplinkParameters; // @synthesize deeplinkParameters=_deeplinkParameters;
@property(retain, nonatomic) NSDictionary *attributionDetails; // @synthesize attributionDetails=_attributionDetails;
@property(copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property(copy, nonatomic) NSDate *purchaseTime; // @synthesize purchaseTime=_purchaseTime;
@property(copy, nonatomic) NSDate *clickTime; // @synthesize clickTime=_clickTime;
- (void).cxx_destruct;
- (id)eventSuffix:(id)arg1;
- (void)injectPushToken:(id)arg1 intoParamters:(id)arg2;
- (void)injectIosUuid:(id)arg1 intoParamters:(id)arg2;
- (void)injectActivityState:(id)arg1 intoParamters:(id)arg2;
- (void)injectConfig:(id)arg1 intoParameters:(id)arg2;
- (void)injectDeviceInfo:(id)arg1 intoParameters:(id)arg2;
- (void)injectDeviceInfoIds:(id)arg1 intoParameters:(id)arg2;
- (void)injectCommonParameters:(id)arg1;
- (id)defaultParameters;
- (id)attributableParameters:(_Bool)arg1;
- (id)idsParameters;
- (id)defaultActivityPackage;
- (id)buildAttributionPackage;
- (id)buildInfoPackage:(id)arg1;
- (id)buildClickPackage:(id)arg1;
- (id)buildEventPackage:(id)arg1 isInDelay:(_Bool)arg2;
- (id)buildSessionPackage:(_Bool)arg1;
- (id)initWithDeviceInfo:(id)arg1 activityState:(id)arg2 config:(id)arg3 sessionParameters:(id)arg4 createdAt:(double)arg5;

@end

