//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SPTUpsellExperiments : NSObject
{
    double _showcaseMaxUIReadyWaitTime;
    NSString *_upsellEndpointConfiguration;
    NSString *_showcaseEndpointConfiguration;
    id <SPTAbbaFeatureFlags> _ABBAFeatureFlags;
    id <SPTAccountProductInformationController> _productInformationController;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTAccountProductInformationController> productInformationController; // @synthesize productInformationController=_productInformationController;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> ABBAFeatureFlags; // @synthesize ABBAFeatureFlags=_ABBAFeatureFlags;
@property(retain, nonatomic) NSString *showcaseEndpointConfiguration; // @synthesize showcaseEndpointConfiguration=_showcaseEndpointConfiguration;
@property(retain, nonatomic) NSString *upsellEndpointConfiguration; // @synthesize upsellEndpointConfiguration=_upsellEndpointConfiguration;
@property(nonatomic) double showcaseMaxUIReadyWaitTime; // @synthesize showcaseMaxUIReadyWaitTime=_showcaseMaxUIReadyWaitTime;
- (void).cxx_destruct;
- (void)loadABBAFlags;
- (long long)upsoldProductForReason:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldPresentUpsellWithIAP;
- (id)initWithABBAFeatureFlags:(id)arg1 productInformationController:(id)arg2 localSettings:(id)arg3;

@end

