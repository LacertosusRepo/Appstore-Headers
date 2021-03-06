//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCORClientConfigurationBuilder.h"

@class NSString;

@interface SCORPartnerConfigurationBuilder : SCORClientConfigurationBuilder
{
    struct Builder {
        struct CriticalSection;
        struct ClientConfigurationParams;
        struct String;
        struct String;
    } *_cppBuilder;
}

- (_Bool)vceEnabled;
- (void)setVceEnabled:(_Bool)arg1;
- (_Bool)httpRedirectCachingEnabled;
- (void)setHttpRedirectCachingEnabled:(_Bool)arg1;
- (_Bool)secureTransmissionEnabled;
- (void)setSecureTransmissionEnabled:(_Bool)arg1;
- (_Bool)keepAliveMeasurementEnabled;
- (void)setKeepAliveMeasurementEnabled:(_Bool)arg1;
- (id)startLabels;
- (void)setStartLabels:(id)arg1;
- (id)persistentLabels;
- (void)setPersistentLabels:(id)arg1;
@property(copy) NSString *externalClientId;
@property(copy) NSString *partnerId;
- (id)build;
- (void)dealloc;
- (id)init;

@end

