//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SPTDrivingModeTrackInfoView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)createSubtitleLabel;
- (id)createTitleLabel;
- (void)arrangeInCenterTitle:(id)arg1 with:(id)arg2;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 subTitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
