//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTCastReceiverAppIDManager, SPTFeatureSettingsItem, SPTGaiaConnectQAManager, SPTGaiaFeatureFlagsManager, SPTGaiaHomeDeviceManager;
@protocol SPTFeatureSettingsItemFactory, SPTGaiaConnectManager;

@interface SPTGaiaFeatureSettingsManager : NSObject
{
    SPTGaiaFeatureFlagsManager *_featureFlagsManager;
    SPTGaiaHomeDeviceManager *_savedDeviceManager;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    SPTFeatureSettingsItem *_customAppIDItem;
    SPTCastReceiverAppIDManager *_receiverAppManager;
    id <SPTGaiaConnectManager> _connectManager;
    SPTGaiaConnectQAManager *_connectQAManager;
}

@property(retain, nonatomic) SPTGaiaConnectQAManager *connectQAManager; // @synthesize connectQAManager=_connectQAManager;
@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTCastReceiverAppIDManager *receiverAppManager; // @synthesize receiverAppManager=_receiverAppManager;
@property(retain, nonatomic) SPTFeatureSettingsItem *customAppIDItem; // @synthesize customAppIDItem=_customAppIDItem;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(retain, nonatomic) SPTGaiaHomeDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
@property(retain, nonatomic) SPTGaiaFeatureFlagsManager *featureFlagsManager; // @synthesize featureFlagsManager=_featureFlagsManager;
- (void).cxx_destruct;
- (id)customAppIdItem;
- (void)showClearNewlyDiscoveredErrorAlert:(id)arg1;
- (void)showCustomReceiverAlert;
- (id)customReceiverAppIdSelectionItem;
- (id)castMultipleChoiceItem;
- (id)resetDiscoveredDevicesItem;
- (id)homeDeviceMenuItem;
- (id)pickerContextMenuItem;
- (id)localDevicesInSettings;
- (id)resetHomeDeviceItem;
- (id)resetOnboardingItem;
- (void)updateCustomReceiverAppId:(id)arg1;
- (id)castReceiverAppIDs;
- (void)createCastSettingsPage;
- (void)createGaiaFeatureSettingsPage;
- (id)initWithFeatureFlagsManager:(id)arg1 savedDeviceManager:(id)arg2 featureSettingsItemFactory:(id)arg3 receiverAppManager:(id)arg4 connectManager:(id)arg5 connectQAManager:(id)arg6;

@end

