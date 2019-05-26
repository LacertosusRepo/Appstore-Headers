//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTSocialManagerObserver-Protocol.h"

@class NSString, SPCore, SPTSettingsLogger, SPTSettingsTableViewCell, UIActivityIndicatorView;
@protocol SPTPreferences;

@interface FacebookSettingsSection : SettingsSection <SPTSocialManagerObserver>
{
    SPTSettingsTableViewCell *_enableFacebookCell;
    UIActivityIndicatorView *_facebookConnectingActivityIndicator;
    id <SPTPreferences> _preferences;
    SPCore *_core;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(readonly, nonatomic) id <SPTPreferences> preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) UIActivityIndicatorView *facebookConnectingActivityIndicator; // @synthesize facebookConnectingActivityIndicator=_facebookConnectingActivityIndicator;
@property(retain, nonatomic) SPTSettingsTableViewCell *enableFacebookCell; // @synthesize enableFacebookCell=_enableFacebookCell;
- (void).cxx_destruct;
- (void)socialManager:(id)arg1 socialError:(id)arg2;
- (void)facebookStateChanged;
- (void)accountLinkingHandler:(_Bool)arg1;
- (void)connectToFacebook;
- (void)handleContext;
- (void)didSelectRow:(long long)arg1;
- (id)footerText;
- (id)headerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (void)dealloc;
- (id)initWithSettingsViewController:(id)arg1 preferences:(id)arg2 core:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

