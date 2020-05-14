//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GCKUIMiniMediaControlsViewControllerDelegate-Protocol.h"

@class GCKAnalyticsEventLogger, GCKUIMiniMediaControlsViewController, GCKUIStyleAttributes, NSLayoutConstraint, NSString, UIView;

@interface GCKUICastContainerViewController : UIViewController <GCKUIMiniMediaControlsViewControllerDelegate>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKUIStyleAttributes *_styleAttributes;
    UIView *_contentContainerView;
    NSLayoutConstraint *_miniMediaControlsHeightConstraint;
    UIView *_miniMediaControlsContainerView;
    _Bool _contentContainerViewInstalled;
    GCKUIMiniMediaControlsViewController *_miniMediaControlsViewController;
    _Bool _miniMediaControlsItemEnabled;
    UIViewController *_contentViewController;
}

@property(nonatomic) _Bool miniMediaControlsItemEnabled; // @synthesize miniMediaControlsItemEnabled=_miniMediaControlsItemEnabled;
@property(readonly, nonatomic) GCKUIMiniMediaControlsViewController *miniMediaControlsViewController; // @synthesize miniMediaControlsViewController=_miniMediaControlsViewController;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)applyStyleAttributes;
- (void)miniMediaControlsViewController:(id)arg1 shouldAppear:(_Bool)arg2;
- (void)uninstallViewController:(id)arg1;
- (void)installViewController:(id)arg1 inContainerView:(id)arg2;
- (void)updateControlBarsVisibility;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

