//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTSettingsTableViewCell.h"

@class NSString, UITextField;

@interface SettingsTextFieldTableViewCell : SPTSettingsTableViewCell
{
    UITextField *_textField;
    NSString *_placeholder;
}

@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyThemeLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

