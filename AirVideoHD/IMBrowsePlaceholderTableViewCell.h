//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMTableViewCell.h"

@class IMLayout, UILabel;

@interface IMBrowsePlaceholderTableViewCell : IMTableViewCell
{
    UILabel *label;
    IMLayout *layout;
    double sideMargin;
}

@property(nonatomic) double sideMargin; // @synthesize sideMargin;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
