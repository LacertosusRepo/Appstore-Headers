//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class SPTNowPlayingLogger, SettingsSwitchTableViewCell;

@interface SPTNowPlayingFeedbackSoundsSettingsSection : SettingsSection
{
    SettingsSwitchTableViewCell *_feedbackSoundCell;
    SPTNowPlayingLogger *_nowPlayingLogger;
}

@property(readonly, nonatomic) SPTNowPlayingLogger *nowPlayingLogger; // @synthesize nowPlayingLogger=_nowPlayingLogger;
@property(retain, nonatomic) SettingsSwitchTableViewCell *feedbackSoundCell; // @synthesize feedbackSoundCell=_feedbackSoundCell;
- (void).cxx_destruct;
- (void)feedbackSwitchChanged:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 nowPlayingLogger:(id)arg2;

@end

