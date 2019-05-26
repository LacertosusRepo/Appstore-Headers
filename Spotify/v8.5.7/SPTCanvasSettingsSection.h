//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTCanvasTestManagerObserver-Protocol.h"

@class NSString, SPTCanvasLoggingService, SPTCanvasTestManager, SettingsSwitchTableViewCell;

@interface SPTCanvasSettingsSection : SettingsSection <SPTCanvasTestManagerObserver>
{
    SPTCanvasTestManager *_testManager;
    SPTCanvasLoggingService *_canvasLoggingService;
    SettingsSwitchTableViewCell *_settingsCell;
    NSString *_settingsCellFooterText;
}

@property(copy, nonatomic) NSString *settingsCellFooterText; // @synthesize settingsCellFooterText=_settingsCellFooterText;
@property(retain, nonatomic) SettingsSwitchTableViewCell *settingsCell; // @synthesize settingsCell=_settingsCell;
@property(retain, nonatomic) SPTCanvasLoggingService *canvasLoggingService; // @synthesize canvasLoggingService=_canvasLoggingService;
@property(retain, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)updateSettingsCellWithTestManager:(id)arg1;
- (void)didDisableCanvas:(id)arg1;
- (void)didEnableCanvas:(id)arg1;
- (void)settingChanged:(id)arg1;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)footerTextForTextManager:(id)arg1;
- (id)initWithSettingsViewController:(id)arg1 testManager:(id)arg2 canvasLoggingService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
