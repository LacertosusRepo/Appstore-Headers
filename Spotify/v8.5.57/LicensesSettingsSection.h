//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray, SPCore, SPTSettingsLogger;
@protocol SPTLinkDispatcher;

@interface LicensesSettingsSection : SettingsSection
{
    NSArray *_rows;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPCore *_core;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) NSArray *rows; // @synthesize rows=_rows;
- (void).cxx_destruct;
- (_Bool)shouldAddLicensingAndSCTARows;
- (void)addLongPressGestureToCell:(id)arg1;
- (id)cells;
- (id)cellWithTitle:(id)arg1 reuseIdentifier:(id)arg2;
- (void)showLog;
- (void)showHelp;
- (void)longPressRecognized:(id)arg1;
- (id)createTermsViewController;
- (id)viewControllerForRow:(unsigned long long)arg1;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 linkDispatcher:(id)arg2 core:(id)arg3 logger:(id)arg4;

@end

