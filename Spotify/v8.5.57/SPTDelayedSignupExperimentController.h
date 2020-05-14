//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginDelayedSignupGuestAccountTracker, SPTLoginTestManager;
@protocol SPTLocalSettings, SPTRemoteConfigurationResolver;

@interface SPTDelayedSignupExperimentController : NSObject
{
    id <SPTRemoteConfigurationResolver> _configurationResolver;
    SPTLoginTestManager *_testManager;
    id <SPTLocalSettings> _localSettings;
    SPTLoginDelayedSignupGuestAccountTracker *_accounTracker;
}

@property(retain, nonatomic) SPTLoginDelayedSignupGuestAccountTracker *accounTracker; // @synthesize accounTracker=_accounTracker;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> configurationResolver; // @synthesize configurationResolver=_configurationResolver;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShutDownTheTest;
@property(readonly, nonatomic, getter=isSecondCellEnabled) _Bool secondCellEnabled;
@property(readonly, nonatomic, getter=isFirstCellEnabled) _Bool firstCellEnabled;
- (id)initWithConfigurationResolver:(id)arg1 testManager:(id)arg2 localSettings:(id)arg3 accountTracker:(id)arg4;

@end
