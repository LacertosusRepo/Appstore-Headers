//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SettingsSection.h"

@class SPTSettingsLogger;
@protocol SPTLoginLogoutHandler;

@interface LogoutSettingsSection : SettingsSection
{
    id <SPTLoginLogoutHandler> _logoutHandler;
    SPTSettingsLogger *_logger;
}

@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginLogoutHandler> logoutHandler; // @synthesize logoutHandler=_logoutHandler;
- (void).cxx_destruct;
- (void)logoutUser;
- (void)didSelectRow:(long long)arg1;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 logoutHandler:(id)arg2 logger:(id)arg3;

@end

