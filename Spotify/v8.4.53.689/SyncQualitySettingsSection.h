//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MultipleChoiceSettingsSection.h"

@interface SyncQualitySettingsSection : MultipleChoiceSettingsSection
{
    id <SPTSettingsUpsellDelegate> _upsellDelegate;
    id <SPTOfflineManager> _offlineManager;
    id <SPTProductState> _productState;
    id <SPTPreferences> _preferences;
    id <SPTAlertController> _alertController;
}

+ (id)productState;
+ (void)setProductState:(id)arg1;
+ (_Bool)shouldDisplayInSettingsViewController:(id)arg1;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) __weak id <SPTSettingsUpsellDelegate> upsellDelegate; // @synthesize upsellDelegate=_upsellDelegate;
- (void).cxx_destruct;
- (unsigned long long)indexForBitrateSetting:(long long)arg1;
- (long long)bitrateSettingForIndex:(unsigned long long)arg1;
- (id)subtitleForChoiceIndex:(long long)arg1;
- (id)titleForChoiceIndex:(long long)arg1;
- (long long)numberOfChoices;
- (id)headerText;
- (void)resyncOfflineInHighQuality;
- (void)selectedChoiceIndexChanged;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 upsellDelegate:(id)arg3 offlineManager:(id)arg4 preferences:(id)arg5 alertController:(id)arg6;

@end
