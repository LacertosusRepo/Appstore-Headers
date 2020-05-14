//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTExternalIntegrationFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _externalIntegrationCallbacksOnBackgroundThread;
    unsigned long long _externalIntegrationShowingEntityPages;
    NSString *_externalIntegrationShowingEntityPagesString;
}

@property(retain, nonatomic) NSString *externalIntegrationShowingEntityPagesString; // @synthesize externalIntegrationShowingEntityPagesString=_externalIntegrationShowingEntityPagesString;
@property(readonly, nonatomic) unsigned long long externalIntegrationShowingEntityPages; // @synthesize externalIntegrationShowingEntityPages=_externalIntegrationShowingEntityPages;
@property(readonly, nonatomic) _Bool externalIntegrationCallbacksOnBackgroundThread; // @synthesize externalIntegrationCallbacksOnBackgroundThread=_externalIntegrationCallbacksOnBackgroundThread;
- (void).cxx_destruct;
- (unsigned long long)mapExternalIntegrationShowingEntityPagesToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
