//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTAccountSettingsViewModelDelegate-Protocol.h"

@class NSString, SPTAccountSettingsViewModel;

@interface SPTAccountSettingsSection : SettingsSection <SPTAccountSettingsViewModelDelegate>
{
    SPTAccountSettingsViewModel *_viewModel;
}

@property(retain, nonatomic) SPTAccountSettingsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)viewControllerWantsPush:(id)arg1 animated:(_Bool)arg2;
- (void)cellsDidUpdate;
- (double)heightForRow:(long long)arg1;
- (id)headerText;
- (long long)numberOfRows;
- (id)cellForRow:(long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)initWithSettingsViewController:(id)arg1 accountViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

