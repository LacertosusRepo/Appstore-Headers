//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class SPTGaiaHomeDeviceManager;

@interface SPTGaiaHomeDeviceSettingsHeaderSection : SettingsSection
{
    SPTGaiaHomeDeviceManager *_savedDeviceManager;
}

@property(readonly, nonatomic) SPTGaiaHomeDeviceManager *savedDeviceManager; // @synthesize savedDeviceManager=_savedDeviceManager;
- (void).cxx_destruct;
- (id)footerText;
- (id)headerText;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 savedDeviceManager:(id)arg2;

@end

