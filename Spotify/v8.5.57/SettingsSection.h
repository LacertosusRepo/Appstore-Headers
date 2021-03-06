//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SettingsViewController;
@protocol SPTContainerUIService;

@interface SettingsSection : NSObject
{
    SettingsViewController *_settingsViewController;
}

+ (_Bool)shouldDisplayInSettingsViewController:(id)arg1;
@property(readonly, nonatomic) __weak SettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SPTContainerUIService> containerUIService;
- (id)footerText;
- (id)headerText;
- (void)didSelectRow:(long long)arg1;
- (double)headerHeight;
- (double)heightForRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
@property(readonly, nonatomic) long long numberOfRows;
@property(readonly, nonatomic) unsigned long long categoryPosition;
- (id)initWithSettingsViewController:(id)arg1;

@end

