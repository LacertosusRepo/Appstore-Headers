//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VISREFEntityHeaderContentViewController.h"

#import "SPTShowsFormatEntityHeaderContentViewControllerProtocol-Protocol.h"

@class NSLayoutConstraint, NSString, SPTVISREFShowsHeaderController, UILayoutGuide, VISREFIntegrationManager;

@interface SPTVISREFShowsFormatHeaderEntityViewController : VISREFEntityHeaderContentViewController <SPTShowsFormatEntityHeaderContentViewControllerProtocol>
{
    NSLayoutConstraint *_headerViewTopConstraint;
    NSLayoutConstraint *_headerViewHeightConstraint;
    UILayoutGuide *_fullHeightLayoutGuide;
    NSLayoutConstraint *_layoutGuideHeightConstraint;
    NSLayoutConstraint *_supplementaryViewHeight;
    VISREFIntegrationManager *_visualRefreshIntegrationManager;
}

@property(retain, nonatomic) VISREFIntegrationManager *visualRefreshIntegrationManager; // @synthesize visualRefreshIntegrationManager=_visualRefreshIntegrationManager;
@property(retain, nonatomic) NSLayoutConstraint *supplementaryViewHeight; // @synthesize supplementaryViewHeight=_supplementaryViewHeight;
@property(retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint; // @synthesize layoutGuideHeightConstraint=_layoutGuideHeightConstraint;
@property(retain, nonatomic) UILayoutGuide *fullHeightLayoutGuide; // @synthesize fullHeightLayoutGuide=_fullHeightLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *headerViewHeightConstraint; // @synthesize headerViewHeightConstraint=_headerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
- (void).cxx_destruct;
- (void)popViewController;
- (void)updateViews;
- (void)updateFollowButtonState:(_Bool)arg1;
- (void)bouncePrimaryActionButton;
- (struct CGPoint)snapOffset;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setupLayout;
- (void)viewSafeAreaInsetsDidChange;
- (id)initWithHeaderController:(id)arg1 visualRefreshIntegrationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SPTVISREFShowsHeaderController *headerController; // @dynamic headerController;
@property(readonly) Class superclass;

@end

