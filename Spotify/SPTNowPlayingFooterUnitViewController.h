//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTNowPlayingContainedViewController.h"
#import "SPTNowPlayingContainerIdleMonitorObserver.h"

@class NSLayoutConstraint, NSString, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingButton, SPTTheme, UIView<SPTGaiaDevicesAvailableView>, UIViewController<SPTNowPlayingContainingViewController>;

@interface SPTNowPlayingFooterUnitViewController : UIViewController <SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingContainedViewController>
{
    id <SPTGaiaDevicesAvailableViewProvider> _devicesAvailableViewProvider;
    SPTNowPlayingAuxiliaryActionsHandler *_auxiliaryActionsHandler;
    SPTTheme *_theme;
    UIView<SPTGaiaDevicesAvailableView> *_devicesAvailableView;
    SPTNowPlayingButton *_shareButton;
    NSLayoutConstraint *_connectButtonLeftMarginConstraint;
    NSLayoutConstraint *_shareButtonRightMarginConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *shareButtonRightMarginConstraint; // @synthesize shareButtonRightMarginConstraint=_shareButtonRightMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *connectButtonLeftMarginConstraint; // @synthesize connectButtonLeftMarginConstraint=_connectButtonLeftMarginConstraint;
@property(retain, nonatomic) SPTNowPlayingButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIView<SPTGaiaDevicesAvailableView> *devicesAvailableView; // @synthesize devicesAvailableView=_devicesAvailableView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingAuxiliaryActionsHandler *auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTGaiaDevicesAvailableViewProvider> devicesAvailableViewProvider; // @synthesize devicesAvailableViewProvider=_devicesAvailableViewProvider;
- (void).cxx_destruct;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)updateViewConstraints;
- (void)setupViewConstraints;
- (void)setupShareButton;
- (void)setupDevicesAvailableView;
- (void)viewDidLoad;
- (id)initWithAuxiliaryActionsHandler:(id)arg1 devicesAvailableViewProvider:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

