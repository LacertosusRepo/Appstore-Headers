//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class SettingsSwitchTableViewCell;
@protocol SPTPreferences;

@interface SPTAutomixSettingsSection : SettingsSection
{
    id <SPTPreferences> _preferences;
    SettingsSwitchTableViewCell *_cell;
}

@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
- (void).cxx_destruct;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)automixChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 preferences:(id)arg2;

@end

