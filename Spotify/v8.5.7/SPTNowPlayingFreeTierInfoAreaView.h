//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTNowPlayingInformationView-Protocol.h"

@class NSArray, NSString, SPTNowPlayingMarqueeLabel, SPTTheme, UIButton, UILabel;

@interface SPTNowPlayingFreeTierInfoAreaView : UIView <SPTNowPlayingInformationView>
{
    UIButton *_labelButton;
    UIButton *_leftAccessoryButton;
    UIButton *_rightAccessoryButton;
    UILabel *_leftAccessoryIndicator;
    UILabel *_rightAccessoryIndicator;
    SPTNowPlayingMarqueeLabel *_titleLabel;
    SPTNowPlayingMarqueeLabel *_artistLabel;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
}

@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingMarqueeLabel *artistLabel; // @synthesize artistLabel=_artistLabel;
@property(readonly, nonatomic) SPTNowPlayingMarqueeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UILabel *rightAccessoryIndicator; // @synthesize rightAccessoryIndicator=_rightAccessoryIndicator;
@property(readonly, nonatomic) UILabel *leftAccessoryIndicator; // @synthesize leftAccessoryIndicator=_leftAccessoryIndicator;
@property(retain, nonatomic) UIButton *rightAccessoryButton; // @synthesize rightAccessoryButton=_rightAccessoryButton;
@property(retain, nonatomic) UIButton *leftAccessoryButton; // @synthesize leftAccessoryButton=_leftAccessoryButton;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void).cxx_destruct;
- (void)resetLayout;
@property(readonly, copy, nonatomic) NSString *trackTitle;
@property(readonly, copy, nonatomic) NSString *artistName;
- (void)updateMetadataLabelsWithTrackTitle:(id)arg1 subtitle:(id)arg2;
- (void)updateAccessoryButtonsVisibility;
- (void)updateConstraints;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
