//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTApplicationScopeFeatureFlagSignalFactoryImplementation.h"

#import "SPTFeatureFlagFactory-Protocol.h"

@class NSString, SPTProductStateExposureLogger;
@protocol SPTAbbaFeatureFlags, SPTFeatureSettingsItemFactory, SPTLocalSettings, SPTProductState;

@interface SPTSessionScopeFeatureFlagFactoryImplementation : SPTApplicationScopeFeatureFlagSignalFactoryImplementation <SPTFeatureFlagFactory>
{
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTProductState> _productState;
    SPTProductStateExposureLogger *_productStateExposureLogger;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
}

@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTProductStateExposureLogger *productStateExposureLogger; // @synthesize productStateExposureLogger=_productStateExposureLogger;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
- (void).cxx_destruct;
- (id)productStateSignalWithKey:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (id)productStateSignalWithKey:(id)arg1;
- (id)abbaSignalWithKey:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (id)abbaSignalWithKey:(id)arg1;
- (id)localSettingsSignalWithKey:(id)arg1 mapper:(CDUnknownBlockType)arg2;
- (id)localSettingsSignalWithKey:(id)arg1;
- (id)createMultipleChoiceFeatureFlagBuilder;
- (id)createFeatureFlagBuilder;
@property(readonly, copy) NSString *description;
- (id)initWithUserDefaults:(id)arg1 abbaFeatureFlags:(id)arg2 productState:(id)arg3 localSettings:(id)arg4 logCenter:(id)arg5 featureSettingsItemFactory:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

