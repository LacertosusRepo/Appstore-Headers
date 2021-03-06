//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTSettingsTableViewCell;

@interface SPTLanguageOnboardingSettingsSection : SettingsSection
{
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTSettingsTableViewCell *_chooseMusicLanguageCell;
}

@property(retain, nonatomic) SPTSettingsTableViewCell *chooseMusicLanguageCell; // @synthesize chooseMusicLanguageCell=_chooseMusicLanguageCell;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)initWithSettingsViewController:(id)arg1 linkDispatcher:(id)arg2;

@end

