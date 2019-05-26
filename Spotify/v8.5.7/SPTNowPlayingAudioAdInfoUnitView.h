//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEButton, SPTActionButton, SPTTheme;

@interface SPTNowPlayingAudioAdInfoUnitView : UIView
{
    GLUEButton *_actionButton;
    SPTActionButton *_optOutButton;
    SPTTheme *_theme;
}

@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTActionButton *optOutButton; // @synthesize optOutButton=_optOutButton;
@property(retain, nonatomic) GLUEButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (void)updateActionButtonWithTitle:(id)arg1 isOptOut:(_Bool)arg2;
- (void)setupConstraints;
- (id)createOptOutButton;
- (id)createActionButton;
- (id)initWithTheme:(id)arg1;

@end
