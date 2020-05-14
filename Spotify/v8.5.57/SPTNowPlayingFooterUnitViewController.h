//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTGaiaDevicesAvailableViewDelegate-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"

@class NSString, SPTNowPlayingButton, SPTTheme, UIView;
@protocol SPTGaiaDevicesAvailableView, SPTGaiaDevicesAvailableViewProvider, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController;

@interface SPTNowPlayingFooterUnitViewController : UIViewController <SPTGaiaDevicesAvailableViewDelegate, SPTNowPlayingContainedViewController>
{
    id <SPTGaiaDevicesAvailableViewProvider> _devicesAvailableViewProvider;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    SPTNowPlayingButton *_rightButton;
}

@property(retain, nonatomic) SPTNowPlayingButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTGaiaDevicesAvailableViewProvider> devicesAvailableViewProvider; // @synthesize devicesAvailableViewProvider=_devicesAvailableViewProvider;
- (void).cxx_destruct;
- (void)didUpdateDevicesAvailableText:(id)arg1 withAccessibilityLabel:(id)arg2;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)setupViewConstraints;
- (void)setupDevicesAvailableView;
- (void)viewDidLoad;
- (id)initWithAuxiliaryActionsHandler:(id)arg1 devicesAvailableViewProvider:(id)arg2 rightButton:(id)arg3 theme:(id)arg4;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

