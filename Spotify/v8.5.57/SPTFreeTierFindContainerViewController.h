//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTFreeTierFindViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageContainer-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTScrollToTopViewController-Protocol.h"
#import "SPTSearchUISearchControlsDelegate-Protocol.h"
#import "SPTViewControllerContainer-Protocol.h"
#import "SPViewController-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, NSURL, SPTFreeTierFindLogger, SPTSearchUISearchControls, UILayoutGuide, UIView;
@protocol GLUETheme, SPTFreeTierFindInterfaceFactory, SPTFreeTierFindViewController><SPTPageController, SPTPageContainer, SPTPageController, SPTScannablesService, SPTSearch2RootViewControllerProtocol><SPTPageController, _TtP14VoiceUIFeature17SPTVoiceUIService_;

@interface SPTFreeTierFindContainerViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTFreeTierFindViewControllerDelegate, SPTScrollToTopViewController, SPViewController, SPContentInsetViewController, SPTSearchUISearchControlsDelegate, SPTPageContainer, SPTPageController, SPTViewControllerContainer>
{
    NSArray *_viewControllers;
    UIViewController *_topViewController;
    UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *_searchViewController;
    UIViewController<SPTFreeTierFindViewController><SPTPageController> *_findViewController;
    id <SPTFreeTierFindInterfaceFactory> _interfaceFactory;
    SPTFreeTierFindLogger *_logger;
    id <_TtP14VoiceUIFeature17SPTVoiceUIService_> _voiceuiService;
    id <SPTScannablesService> _scannablesService;
    id <SPTPageController> _currentPageController;
    unsigned long long _mode;
    UILayoutGuide *_mainContentLayoutGuide;
    UIView *_searchControlsContainer;
    SPTSearchUISearchControls *_searchControls;
    NSLayoutConstraint *_mainContentGuideConstraint;
    id <GLUETheme> _theme;
    struct CGRect _lastKnownFrame;
}

@property(nonatomic) struct CGRect lastKnownFrame; // @synthesize lastKnownFrame=_lastKnownFrame;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSLayoutConstraint *mainContentGuideConstraint; // @synthesize mainContentGuideConstraint=_mainContentGuideConstraint;
@property(retain, nonatomic) SPTSearchUISearchControls *searchControls; // @synthesize searchControls=_searchControls;
@property(retain, nonatomic) UIView *searchControlsContainer; // @synthesize searchControlsContainer=_searchControlsContainer;
@property(readonly, nonatomic) UILayoutGuide *mainContentLayoutGuide; // @synthesize mainContentLayoutGuide=_mainContentLayoutGuide;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController; // @synthesize currentPageController=_currentPageController;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <_TtP14VoiceUIFeature17SPTVoiceUIService_> voiceuiService; // @synthesize voiceuiService=_voiceuiService;
@property(readonly, nonatomic) SPTFreeTierFindLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTFreeTierFindInterfaceFactory> interfaceFactory; // @synthesize interfaceFactory=_interfaceFactory;
@property(readonly, nonatomic) UIViewController<SPTFreeTierFindViewController><SPTPageController> *findViewController; // @synthesize findViewController=_findViewController;
@property(readonly, nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (void).cxx_destruct;
- (void)searchControlsDidPressReturnKey:(id)arg1;
- (void)searchControlsDidPressScannablesButton:(id)arg1;
- (void)searchControlsDidPressCancelButton:(id)arg1;
- (void)searchControls:(id)arg1 didChangeTextFrom:(id)arg2;
- (void)setFocusedViewController:(id)arg1;
- (void)spt_scrollToTop;
@property(readonly, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void)resetSearch;
- (void)updateSearchControlsStyle;
- (void)loadSearchControlsContainer;
- (void)scannablesButtonPressed;
- (void)cancelButtonPressed;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)navigateToFindPage;
- (void)setMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)openVoiceSearch;
- (void)openSearchPage;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
- (void)sp_updateContentInsets;
- (void)adjustChildViewInsets;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithFindViewController:(id)arg1 interfaceFactory:(id)arg2 voiceuiService:(id)arg3 scannablesService:(id)arg4 logger:(id)arg5 mainContentLayoutGuide:(id)arg6 theme:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

