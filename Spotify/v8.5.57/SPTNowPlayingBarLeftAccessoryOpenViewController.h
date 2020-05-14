//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTNowPlayingButton, SPTTheme;
@protocol SPTNowPlayingManager;

@interface SPTNowPlayingBarLeftAccessoryOpenViewController : UIViewController
{
    id <SPTNowPlayingManager> _manager;
    SPTTheme *_theme;
    SPTNowPlayingButton *_openButton;
}

@property(retain, nonatomic) SPTNowPlayingButton *openButton; // @synthesize openButton=_openButton;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingManager> manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)openButtonTouchedUpInside:(id)arg1;
- (void)loadView;
- (id)initWithManager:(id)arg1 theme:(id)arg2;

@end

