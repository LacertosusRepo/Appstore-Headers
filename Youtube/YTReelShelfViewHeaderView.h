//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class YTFormattedStringLabel, YTQTMButton;

@interface YTReelShelfViewHeaderView : UIView
{
    YTFormattedStringLabel *_titleLabel;
    YTQTMButton *_menuActionButton;
}

@property(retain, nonatomic) YTQTMButton *menuActionButton; // @synthesize menuActionButton=_menuActionButton;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

