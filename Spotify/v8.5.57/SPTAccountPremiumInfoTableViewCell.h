//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface SPTAccountPremiumInfoTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupTheme;
- (void)setupMessageLabel;
- (void)setupTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
