//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EXP_HUBViewController.h"

#import "EXP_HUBOverlayViewComponentDelegate.h"
#import "EXP_HUBViewComponentDelegate.h"
#import "EXP_HUBViewScrollDelegate.h"
#import "SPContentInsetViewController.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTScrollToTopViewController.h"
#import "SPTSearchKeyboardManagerDelegate.h"

@class EXP_SPTHubShelvesManager, NSString, NSURL, SPTSearchKeyboardManager, SPTTheme;

@interface SPTSearchHubBaseViewController : EXP_HUBViewController <SPTScrollToTopViewController, EXP_HUBViewScrollDelegate, SPTSearchKeyboardManagerDelegate, SPContentInsetViewController, SPTPageController, SPTNavigationControllerNavigationBarState, EXP_HUBViewComponentDelegate, EXP_HUBOverlayViewComponentDelegate>
{
    NSString *_pageIdentifier;
    NSURL *_pageURI;
    NSURL *_viewURI;
    unsigned long long _preferredNavigationBarState;
    SPTSearchKeyboardManager *_keyboardManager;
    SPTTheme *_theme;
    EXP_SPTHubShelvesManager *_shelvesManager;
    id <EXP_SPTHubImpressionLogger> _impressionLogger;
    id <EXP_SPTHubLoadingLogger> _loadingLogger;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) id <EXP_SPTHubLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) id <EXP_SPTHubImpressionLogger> impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(retain, nonatomic) EXP_SPTHubShelvesManager *shelvesManager; // @synthesize shelvesManager=_shelvesManager;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) SPTSearchKeyboardManager *keyboardManager; // @synthesize keyboardManager=_keyboardManager;
@property(nonatomic) unsigned long long preferredNavigationBarState; // @synthesize preferredNavigationBarState=_preferredNavigationBarState;
@property(readonly, copy, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
- (void).cxx_destruct;
- (unsigned long long)animationOptionsWithCurve:(long long)arg1;
- (void)keyBoardAnimateWithDuration:(double)arg1 curve:(long long)arg2;
- (id)provideNavigationBar;
- (void)sp_updateContentInsets;
- (void)overlayView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)overlayView:(id)arg1 componentViewWillAppear:(id)arg2;
- (_Bool)hubViewShouldStartScrolling:(id)arg1;
- (void)hubView:(id)arg1 componentViewDidDisappear:(id)arg2;
- (void)hubView:(id)arg1 componentViewWillAppear:(id)arg2;
- (_Bool)shouldLogImpressions;
- (void)enableShelves:(id)arg1 componentModelURIResolver:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1 viewURI:(id)arg2 componentRegistry:(id)arg3 componentLayoutManager:(id)arg4 imageLoaderFactory:(id)arg5 commandHandler:(id)arg6 impressionLogger:(id)arg7 loadingLogger:(id)arg8 pageIdentifier:(id)arg9 pageURI:(id)arg10;
- (void)spt_scrollToTopAnimated:(_Bool)arg1;
- (void)spt_scrollToTop;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

