//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class UILabel;

@interface SPLoadTimeButtonItem : UIBarButtonItem
{
    double _goodLoadTime;
    double _highLoadTime;
    double _time;
    UILabel *_label;
}

+ (id)itemWithLoadTime:(double)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) double highLoadTime; // @synthesize highLoadTime=_highLoadTime;
@property(nonatomic) double goodLoadTime; // @synthesize goodLoadTime=_goodLoadTime;
- (void).cxx_destruct;
- (void)updateLabelColor;
- (id)initWithLoadTime:(double)arg1;

@end

