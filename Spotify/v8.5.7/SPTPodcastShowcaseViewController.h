//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"

@class SPTPodcastShowcaseView, SPTPodcastTheme;
@protocol SPTPodcastShowcaseViewControllerDelegate;

@interface SPTPodcastShowcaseViewController : UIViewController <GLUEThemeObserver>
{
    id <SPTPodcastShowcaseViewControllerDelegate> _delegate;
    SPTPodcastTheme *_theme;
}

@property(readonly, nonatomic) SPTPodcastTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTPodcastShowcaseViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)themeUpdated:(id)arg1;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapActionButton:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTPodcastShowcaseView *view; // @dynamic view;

@end

