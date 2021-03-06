//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray, SPTSettingsLogger;

@interface TermsSettingsSection : SettingsSection
{
    NSArray *_cells;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void).cxx_destruct;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)createCellWithIdentifier:(id)arg1 text:(id)arg2;
- (id)createTermAndConditionCellsWithVoiceTestManager:(id)arg1;
- (id)initWithSettingsViewController:(id)arg1 voiceTestManager:(id)arg2 logger:(id)arg3;

@end

