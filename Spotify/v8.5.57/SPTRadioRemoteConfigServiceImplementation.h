//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioRemoteConfigService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTRadioRemoteConfigProperties, SPTRemoteConfigurationService;

@interface SPTRadioRemoteConfigServiceImplementation : NSObject <SPTRadioRemoteConfigService>
{
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTRadioRemoteConfigProperties> _propertiesWrapper;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTRadioRemoteConfigProperties> propertiesWrapper; // @synthesize propertiesWrapper=_propertiesWrapper;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
- (void).cxx_destruct;
- (id)provideProperties;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

