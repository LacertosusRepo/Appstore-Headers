//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADJDeviceInfo : NSObject
{
    _Bool _trackingEnabled;
    NSString *_idForAdvertisers;
    NSString *_fbAttributionId;
    NSString *_vendorId;
    NSString *_clientSdk;
    NSString *_bundeIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_deviceType;
    NSString *_deviceName;
    NSString *_osName;
    NSString *_systemVersion;
    NSString *_languageCode;
    NSString *_countryCode;
    NSString *_machineModel;
    NSString *_cpuSubtype;
    NSString *_installReceiptBase64;
    NSString *_osBuild;
}

+ (id)deviceInfoWithSdkPrefix:(id)arg1;
@property(copy, nonatomic) NSString *osBuild; // @synthesize osBuild=_osBuild;
@property(copy, nonatomic) NSString *installReceiptBase64; // @synthesize installReceiptBase64=_installReceiptBase64;
@property(copy, nonatomic) NSString *cpuSubtype; // @synthesize cpuSubtype=_cpuSubtype;
@property(copy, nonatomic) NSString *machineModel; // @synthesize machineModel=_machineModel;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *osName; // @synthesize osName=_osName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundeIdentifier; // @synthesize bundeIdentifier=_bundeIdentifier;
@property(copy, nonatomic) NSString *clientSdk; // @synthesize clientSdk=_clientSdk;
@property(copy, nonatomic) NSString *vendorId; // @synthesize vendorId=_vendorId;
@property(nonatomic) _Bool trackingEnabled; // @synthesize trackingEnabled=_trackingEnabled;
@property(copy, nonatomic) NSString *fbAttributionId; // @synthesize fbAttributionId=_fbAttributionId;
@property(copy, nonatomic) NSString *idForAdvertisers; // @synthesize idForAdvertisers=_idForAdvertisers;
- (void).cxx_destruct;
- (void)injectInstallReceipt:(id)arg1;
- (id)initWithSdkPrefix:(id)arg1;

@end

