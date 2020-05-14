//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTBrowseFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _shouldEnableFindPromo;
    _Bool _shouldStopRegisteringCreatorUris;
    _Bool _shouldRegisterMarketingFormatComponents;
    _Bool _shouldReplaceRadioButton;
}

@property(readonly, nonatomic) _Bool shouldReplaceRadioButton; // @synthesize shouldReplaceRadioButton=_shouldReplaceRadioButton;
@property(readonly, nonatomic) _Bool shouldRegisterMarketingFormatComponents; // @synthesize shouldRegisterMarketingFormatComponents=_shouldRegisterMarketingFormatComponents;
@property(readonly, nonatomic) _Bool shouldStopRegisteringCreatorUris; // @synthesize shouldStopRegisteringCreatorUris=_shouldStopRegisteringCreatorUris;
@property(readonly, nonatomic) _Bool shouldEnableFindPromo; // @synthesize shouldEnableFindPromo=_shouldEnableFindPromo;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
