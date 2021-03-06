//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTConnectAccessButtonVisibilityDelegate-Protocol.h"

@class NSString, SPBarViewController, SPTConnectAccessButton, SPTConnectAccessButtonViewModel, SPTConnectAccessButtonVisibilityManager, SPTTheme, UIView;
@protocol SPTMetaViewController;

@interface SPTConnectAccessButtonContainerViewController : UIViewController <SPTConnectAccessButtonVisibilityDelegate>
{
    UIView *_contentView;
    SPTTheme *_theme;
    id <SPTMetaViewController> _metaViewController;
    SPTConnectAccessButtonViewModel *_buttonViewModel;
    SPTConnectAccessButtonVisibilityManager *_buttonVisibilityManager;
    SPTConnectAccessButton *_accessButton;
}

@property(retain, nonatomic) SPTConnectAccessButton *accessButton; // @synthesize accessButton=_accessButton;
@property(readonly, nonatomic) SPTConnectAccessButtonVisibilityManager *buttonVisibilityManager; // @synthesize buttonVisibilityManager=_buttonVisibilityManager;
@property(readonly, nonatomic) SPTConnectAccessButtonViewModel *buttonViewModel; // @synthesize buttonViewModel=_buttonViewModel;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)connectAccessButtonVisibilityChanged:(_Bool)arg1;
@property(readonly, nonatomic) SPBarViewController *barViewController;
- (void)setupConstraints;
- (void)setupAccessButton;
- (void)setupView;
- (void)loadView;
- (id)initWithTheme:(id)arg1 metaViewController:(id)arg2 buttonViewModel:(id)arg3 buttonVisibilityManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

