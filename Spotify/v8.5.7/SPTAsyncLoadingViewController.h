//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageContainer-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPViewController-Protocol.h"

@class FBKVOController, NSMutableArray, NSString, NSURL, UIView;
@protocol SPTAsyncLoading, SPTPageContainer, SPTPageController;

@interface SPTAsyncLoadingViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTPageContainer, SPContentInsetViewController, SPTShareableContext, SPTPageController, SPViewController>
{
    _Bool _appearing;
    _Bool _disappearing;
    unsigned long long _navigationBarState;
    UIView<SPTAsyncLoading> *_loadingView;
    unsigned long long _currentState;
    UIViewController<SPTPageController> *_synchronousViewController;
    FBKVOController *_kvoController;
    NSMutableArray *_thingsToDoWhenViewIsSet;
}

@property(retain, nonatomic) NSMutableArray *thingsToDoWhenViewIsSet; // @synthesize thingsToDoWhenViewIsSet=_thingsToDoWhenViewIsSet;
@property(readonly, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(nonatomic, getter=isDisappearing) _Bool disappearing; // @synthesize disappearing=_disappearing;
@property(nonatomic, getter=isAppearing) _Bool appearing; // @synthesize appearing=_appearing;
@property(retain, nonatomic) UIViewController<SPTPageController> *synchronousViewController; // @synthesize synchronousViewController=_synchronousViewController;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) UIView<SPTAsyncLoading> *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) unsigned long long navigationBarState; // @synthesize navigationBarState=_navigationBarState;
- (void).cxx_destruct;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)sp_updateContentInsets;
- (id)spt_representativeViewControllerForDebug;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_currentPageController) id <SPTPageController> currentPageController;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (void)doWhenViewIsSet:(CDUnknownBlockType)arg1;
- (SEL)selectorForNewState:(unsigned long long)arg1;
- (void)fireDelegateMethodsForNewState:(unsigned long long)arg1;
- (void)showSynchronousViewControllerOnMainThread:(id)arg1;
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
- (void)showSynchronousViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithLoadingView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

