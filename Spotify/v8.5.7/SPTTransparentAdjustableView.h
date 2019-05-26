//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface SPTTransparentAdjustableView : UIView
{
    double _transparenBackgroundOffset;
    UIColor *_sideBackgroundColor;
}

@property(retain, nonatomic) UIColor *sideBackgroundColor; // @synthesize sideBackgroundColor=_sideBackgroundColor;
@property(nonatomic) double transparenBackgroundOffset; // @synthesize transparenBackgroundOffset=_transparenBackgroundOffset;
- (void).cxx_destruct;
- (void)clearSideBackgroundColor;
- (void)setSideBackgroundColor:(id)arg1 forTransparentBackgroundOffset:(double)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

