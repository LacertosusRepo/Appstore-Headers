//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IMTableViewCellBackground, UIColor;

@interface IMTableViewCell : UITableViewCell
{
    IMTableViewCellBackground *backgroundView;
    unsigned long long currentState;
}

- (void).cxx_destruct;
- (struct CGRect)imContentRect;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)imFixSeparator;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
@property(retain, nonatomic) UIColor *selectedBackgroundColor;
- (void)initializeCell;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
