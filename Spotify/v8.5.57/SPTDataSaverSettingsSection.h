//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTDataSaverControllerDelegate-Protocol.h"

@class NSString, SPTDataSaverController, SettingsSwitchTableViewCell;

@interface SPTDataSaverSettingsSection : SettingsSection <SPTDataSaverControllerDelegate>
{
    _Bool _canvasEnabled;
    SettingsSwitchTableViewCell *_dataSaverCell;
    SPTDataSaverController *_dataSaverController;
}

@property(retain, nonatomic) SPTDataSaverController *dataSaverController; // @synthesize dataSaverController=_dataSaverController;
@property(nonatomic) _Bool canvasEnabled; // @synthesize canvasEnabled=_canvasEnabled;
@property(retain, nonatomic) SettingsSwitchTableViewCell *dataSaverCell; // @synthesize dataSaverCell=_dataSaverCell;
- (void).cxx_destruct;
- (void)dataSaverControllerStateDidChange;
- (void)updateDataSaverState;
- (void)updateDataSaverCellTitleWithActivatedState:(_Bool)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)dataSaverSwitchChanged:(id)arg1;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 dataSaverController:(id)arg2 canvasEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

