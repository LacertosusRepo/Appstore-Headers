//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SPTSettingsSeparatorView : UIView
{
    long long _style;
    NSArray *_colors;
}

@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)_actualColors;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)commonSetup;

@end
