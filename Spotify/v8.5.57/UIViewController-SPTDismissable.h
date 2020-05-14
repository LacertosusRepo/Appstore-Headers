//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UINavigationItem, UIPopoverPresentationController;
@protocol SPNavigationLikeController, SPTTabBarItem;

@interface UIViewController (SPTDismissable)
- (void)spt_dismissViewControllerAnimated;
- (void)updateTabBarItemForSidebarItem:(id)arg1;
- (void)spt_updateSidebarItem;
- (void)spt_setSidebarItem:(id)arg1;
@property(readonly, nonatomic) id <SPTTabBarItem> spt_sidebarItem;
- (id)rootParentViewController;
- (_Bool)isRootParentBeingPresented;
- (_Bool)isRootParentBeingDismissed;
- (void)spt_performIdleAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 theme:(id)arg3;
- (void)spt_performIdleAnimations:(CDUnknownBlockType)arg1 theme:(id)arg2;
@property(readonly, nonatomic, getter=spt_share_currentPopoverPresentationController) UIPopoverPresentationController *currentPopoverPresentationController;
@property(readonly, nonatomic, getter=spt_share_isPresentedInPopover) _Bool presentedInPopover;
- (id)sp_barViewController;
- (id)sp_viewControllerForView:(id)arg1;
- (id)sp_findFirstScrollViewInView:(id)arg1;
- (void)sp_updateBottomContentInset:(double)arg1;
- (void)sp_automaticallyManageContentInsets;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
@property(readonly, nonatomic) UINavigationItem *spt_navigationItem;
@property(readonly, nonatomic) UIViewController<SPNavigationLikeController> *sp_navigationController;
@property(copy, nonatomic, getter=spt_referrerIdentifier, setter=spt_setReferrerIdentifier:) NSString *referrerIdentifier;
- (void)spt_setPageReferrer:(id)arg1;
@property(readonly, copy, nonatomic, getter=spt_pageReferrer) NSString *pageReferrer;
- (_Bool)isFoundInContainer:(id)arg1;
- (id)outerContainerInNavigationControllerStack:(id)arg1;
@end
