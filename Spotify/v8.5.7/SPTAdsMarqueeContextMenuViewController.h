//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTAdsMarqueeContextMenuViewDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSArray, NSString, NSURL, SPTAdsMarqueeContextMenuView, SPTTheme, UIButton, UIVisualEffectView;
@protocol SPTContextMenuAction, SPTPageContainer, SPTUIPresentationService;

@interface SPTAdsMarqueeContextMenuViewController : UIViewController <SPTAdsMarqueeContextMenuViewDelegate, SPTPageController>
{
    double _popoverHeight;
    UIVisualEffectView *_blurView;
    UIButton *_cancelButton;
    SPTAdsMarqueeContextMenuView *_contextMenuView;
    SPTTheme *_theme;
    NSArray<SPTContextMenuAction> *_contextMenuActions;
    id <SPTUIPresentationService> _presentationService;
}

@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) NSArray<SPTContextMenuAction> *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdsMarqueeContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) double popoverHeight; // @synthesize popoverHeight=_popoverHeight;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)contextMenuView:(id)arg1 didSelectAction:(id)arg2;
- (_Bool)isIPad;
- (double)safeAreaBottomMargin;
- (void)dismissContextMenu;
- (_Bool)didTapHeaderViewReadMore:(id)arg1;
- (void)didTapHeaderView:(id)arg1;
- (void)animateContextMenuVisible:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)addconstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTheme:(id)arg1 headerTitle:(id)arg2 presentationService:(id)arg3 actions:(id)arg4 webViewFactory:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
