//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTCarmageddonMotionRecorderViewModelDelegate-Protocol.h"
#import "SPTSelfPresentingViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SPTCarmageddonMotionRecorderViewModel, UITableView;
@protocol GLUETheme, SPTModalPresentationController;

@interface SPTCarmageddonMotionRecorderViewController : UIViewController <SPTCarmageddonMotionRecorderViewModelDelegate, UITableViewDataSource, UITableViewDelegate, SPTSelfPresentingViewController>
{
    id <SPTModalPresentationController> _modalPresentationController;
    id <GLUETheme> _theme;
    SPTCarmageddonMotionRecorderViewModel *_viewModel;
    UITableView *_logsTableView;
}

@property(retain, nonatomic) UITableView *logsTableView; // @synthesize logsTableView=_logsTableView;
@property(readonly, nonatomic) SPTCarmageddonMotionRecorderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
- (void).cxx_destruct;
- (void)updateAndScrollTableView;
- (void)scrollToBottomAnimated:(_Bool)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewModelDidUpdateContent;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureTableView;
- (void)onCancelButtonTap;
- (void)viewDidLoad;
- (id)initWithModalPresentationController:(id)arg1 theme:(id)arg2 viewModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
