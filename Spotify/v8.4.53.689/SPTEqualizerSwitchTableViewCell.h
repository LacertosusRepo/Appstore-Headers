//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UISwitch;

@interface SPTEqualizerSwitchTableViewCell : UITableViewCell
{
    id <SPTEqualizerSwitchTableViewCellDelegate> _delegate;
    UISwitch *_onSwitch;
}

@property(retain, nonatomic) UISwitch *onSwitch; // @synthesize onSwitch=_onSwitch;
@property(nonatomic) __weak id <SPTEqualizerSwitchTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)switchDidChangeValue:(id)arg1;
@property(nonatomic, getter=isOn) _Bool on;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

