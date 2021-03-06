//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingNavigationBarModelObserver-Protocol.h"

@class NSString, SPTNowPlayingNavigationBarUnitManagerImplementation, SPTNowPlayingNavigationBarViewV2, SPTTheme;
@protocol GLUETheme, SPTNowPlayingAuxiliaryActionsHandler, SPTNowPlayingContainingViewController, SPTNowPlayingNavigationBarModel;

@interface SPTNowPlayingNavigationBarUnitViewController : UIViewController <SPTNowPlayingNavigationBarModelObserver, SPTNowPlayingContainedViewController>
{
    SPTNowPlayingNavigationBarUnitManagerImplementation *_navigationBarUnitManager;
    id <SPTNowPlayingNavigationBarModel> _model;
    id <SPTNowPlayingAuxiliaryActionsHandler> _auxiliaryActionsHandler;
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
    UIViewController *_tabViewController;
}

@property(retain, nonatomic) UIViewController *tabViewController; // @synthesize tabViewController=_tabViewController;
@property(readonly, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTNowPlayingAuxiliaryActionsHandler> auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(readonly, nonatomic) id <SPTNowPlayingNavigationBarModel> model; // @synthesize model=_model;
@property(retain, nonatomic) SPTNowPlayingNavigationBarUnitManagerImplementation *navigationBarUnitManager; // @synthesize navigationBarUnitManager=_navigationBarUnitManager;
- (void).cxx_destruct;
- (void)rightButtonPressed:(id)arg1;
- (void)navigationBarModelStateDidChange:(id)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (struct CGSize)preferredContentSize;
- (void)updateLabels;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNavigationBarModel:(id)arg1 auxiliaryActionsHandler:(id)arg2 theme:(id)arg3 glueTheme:(id)arg4 tabViewController:(id)arg5;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTNowPlayingNavigationBarViewV2 *view; // @dynamic view;

@end

