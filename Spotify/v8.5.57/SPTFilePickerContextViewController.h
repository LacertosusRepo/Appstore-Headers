//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTContextMenuViewDataSource-Protocol.h"
#import "SPTContextMenuViewDelegate-Protocol.h"

@class NSArray, NSString, SPTContextMenuView, SPTContextMenuViewTransition;
@protocol SPTContextMenuViewInteractionTarget;

@interface SPTFilePickerContextViewController : UIViewController <SPTContextMenuViewDataSource, SPTContextMenuViewDelegate>
{
    NSArray *_groupList;
    SPTContextMenuView *_contextMenuView;
    SPTContextMenuViewTransition *_transition;
    id <SPTContextMenuViewInteractionTarget> _interactionTarget;
}

+ (id)contextMenuWithSortable:(id)arg1 pageURI:(id)arg2;
@property(retain, nonatomic) id <SPTContextMenuViewInteractionTarget> interactionTarget; // @synthesize interactionTarget=_interactionTarget;
@property(retain, nonatomic) SPTContextMenuViewTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SPTContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(copy, nonatomic) NSArray *groupList; // @synthesize groupList=_groupList;
- (void).cxx_destruct;
- (_Bool)contextMenuView:(id)arg1 shouldBeDismissedAfterPerformingAction:(id)arg2;
- (void)dismissContextMenuView:(id)arg1 dismissalStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2;
- (unsigned long long)numberOfSectionsInContextMenuView:(id)arg1;
- (unsigned long long)contextMenuView:(id)arg1 numberOfActionsInSection:(unsigned long long)arg2;
- (id)contextMenuView:(id)arg1 titleForHeaderInSection:(unsigned long long)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
- (void)loadView;
- (void)presentInViewController:(id)arg1 fromContextButton:(id)arg2;
- (void)removeActionAtIndexPath:(id)arg1;
- (void)insertAction:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithTitle:(id)arg1 actionGroups:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

