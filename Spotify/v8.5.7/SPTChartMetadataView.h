//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SPTTheme, UILabel;

@interface SPTChartMetadataView : UIView
{
    NSString *_title;
    NSString *_subtitle;
    SPTTheme *_theme;
    UILabel *_descriptionLabel;
    UILabel *_subtitleLabel;
}

@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setupConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
