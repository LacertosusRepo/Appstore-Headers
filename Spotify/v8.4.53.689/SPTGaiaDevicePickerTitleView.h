//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SPTGaiaContentOffsetObserver.h"

@class NSString, SPTLayoutConstraintBuilder, SPTTheme, UILabel;

@interface SPTGaiaDevicePickerTitleView : UIView <SPTGaiaContentOffsetObserver>
{
    NSString *_title;
    SPTTheme *_theme;
    UILabel *_titleLabel;
    SPTLayoutConstraintBuilder *_titleLayout;
    double _thresholdOffset;
    double _offsetChange;
}

@property(nonatomic) double offsetChange; // @synthesize offsetChange=_offsetChange;
@property(nonatomic) double thresholdOffset; // @synthesize thresholdOffset=_thresholdOffset;
@property(retain, nonatomic) SPTLayoutConstraintBuilder *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)didUpdateContentOffset:(double)arg1;
- (void)addTitleLabelConstraints;
- (void)addTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2 thresholdOffset:(double)arg3 offsetChange:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

