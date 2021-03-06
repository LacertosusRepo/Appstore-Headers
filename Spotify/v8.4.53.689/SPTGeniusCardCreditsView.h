//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTGeniusCardView.h"

@class SPTActionButton, UIImageView, UILabel, UIView;

@interface SPTGeniusCardCreditsView : SPTGeniusCardView
{
    id <SPTGeniusLaunchExternalDelegate> _delegate;
    UIView *_containerView;
    UILabel *_powerdByLabel;
    UIImageView *_geniusLogo;
    UILabel *_creditsDescription;
    SPTActionButton *_button;
    long long _geniusSongID;
}

@property(nonatomic) long long geniusSongID; // @synthesize geniusSongID=_geniusSongID;
@property(retain, nonatomic) SPTActionButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *creditsDescription; // @synthesize creditsDescription=_creditsDescription;
@property(retain, nonatomic) UIImageView *geniusLogo; // @synthesize geniusLogo=_geniusLogo;
@property(retain, nonatomic) UILabel *powerdByLabel; // @synthesize powerdByLabel=_powerdByLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPTGeniusLaunchExternalDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithAnnotation:(id)arg1 geniusSongId:(long long)arg2;

@end

