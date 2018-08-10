//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDLConfigurationService.h"
#import "SRLService.h"

@class NSArray, NSString, SRLRegistryContext;

@interface PDLConfigurationServiceImpl : NSObject <SRLService, PDLConfigurationService>
{
    SRLRegistryContext *_registryContext;
    id <PDLExperimentsService> _experimentsService;
    NSArray *_configurationProviders;
}

@property(retain, nonatomic) NSArray *configurationProviders; // @synthesize configurationProviders=_configurationProviders;
@property(retain, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) SRLRegistryContext *registryContext; // @synthesize registryContext=_registryContext;
- (void).cxx_destruct;
- (id)configWithClientId:(long long)arg1;
- (id)lookupConfigWithClientID:(long long)arg1 IDTypes:(id)arg2 options:(id)arg3;
- (id)lookupConfigWithClientID:(long long)arg1 IDTypes:(id)arg2 enableIantCategory:(_Bool)arg3 options:(id)arg4;
- (id)lookupConfigWithClientId:(long long)arg1 personID:(id)arg2 options:(id)arg3;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

