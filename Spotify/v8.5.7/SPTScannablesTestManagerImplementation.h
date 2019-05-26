//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTScannablesTestManager-Protocol.h"

@class NSString, SPTFeatureSettingsPage;
@protocol SPTAlertController, SPTFeatureSettingsItemFactory, SPTLocalSettings;

@interface SPTScannablesTestManagerImplementation : NSObject <SPTScannablesTestManager>
{
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTAlertController> _alertController;
    SPTFeatureSettingsPage *_settingsPage;
}

@property(retain, nonatomic) SPTFeatureSettingsPage *settingsPage; // @synthesize settingsPage=_settingsPage;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
- (void).cxx_destruct;
- (_Bool)isEnabled;
- (id)initWithFeatureSettingsItemFactory:(id)arg1 localSettings:(id)arg2 alertController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

