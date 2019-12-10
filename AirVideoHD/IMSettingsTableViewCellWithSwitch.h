//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSettingsTableViewCell.h"

@class UISwitch;

@interface IMSettingsTableViewCellWithSwitch : IMSettingsTableViewCell
{
}

+ (id)cellWithTitle:(id)arg1;
+ (id)cellWithTitle:(id)arg1 target:(id)arg2 valueChangedAction:(SEL)arg3;
- (double)maxDetailWidthForContainerSize:(struct CGSize)arg1;
- (double)minDetailWidthForContainerSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UISwitch *switchView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end
