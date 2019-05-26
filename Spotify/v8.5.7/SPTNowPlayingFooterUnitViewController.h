//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTGaiaDevicesAvailableViewDelegate-Protocol.h"
#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"

@class NSLayoutConstraint, NSString, SPTNowPlayingButton, SPTTheme, UIView;
@protocol SPTGaiaDevicesAvailableView, SPTGaiaDevicesAvailableViewProvider, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController;

@interface SPTNowPlayingFooterUnitViewController : UIViewController <SPTNowPlayingContainerIdleMonitorObserver, SPTGaiaDevicesAvailableViewDelegate, SPTNowPlayingContainedViewController>
{
    id <SPTGaiaDevicesAvailableViewProvider> _devicesAvailableViewProvider;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    SPTNowPlayingButton *_rightButton;
    NSLayoutConstraint *_devicesAvailableWidthConstraint;
    NSLayoutConstraint *_connectButtonLeftMarginConstraint;
    NSLayoutConstraint *_trailingButtonRightMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *trailingButtonRightMarginConstraint; // @synthesize trailingButtonRightMarginConstraint=_trailingButtonRightMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *connectButtonLeftMarginConstraint; // @synthesize connectButtonLeftMarginConstraint=_connectButtonLeftMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *devicesAvailableWidthConstraint; // @synthesize devicesAvailableWidthConstraint=_devicesAvailableWidthConstraint;
@property(retain, nonatomic) SPTNowPlayingButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTGaiaDevicesAvailableViewProvider> devicesAvailableViewProvider; // @synthesize devicesAvailableViewProvider=_devicesAvailableViewProvider;
- (void).cxx_destruct;
- (void)didUpdateDevicesAvailableText:(id)arg1 withAccessibilityLabel:(id)arg2;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (double)leftMarginForConnectButton;
- (double)widthForConnectButton;
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
