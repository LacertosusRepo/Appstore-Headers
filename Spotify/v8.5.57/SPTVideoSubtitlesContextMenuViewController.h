//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTContextMenuViewDataSource-Protocol.h"
#import "SPTContextMenuViewDelegate-Protocol.h"

@class NSArray, NSString, SPTContextMenuView, SPTContextMenuViewTransition;
@protocol GLUEImageLoader;

@interface SPTVideoSubtitlesContextMenuViewController : UIViewController <SPTContextMenuViewDataSource, SPTContextMenuViewDelegate>
{
    NSArray *_subtitlesMenuActions;
    SPTContextMenuView *_contextMenuView;
    SPTContextMenuViewTransition *_transition;
    id <GLUEImageLoader> _imageLoader;
}

@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTContextMenuViewTransition *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) SPTContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
@property(readonly, nonatomic) NSArray *subtitlesMenuActions; // @synthesize subtitlesMenuActions=_subtitlesMenuActions;
- (void).cxx_destruct;
- (_Bool)contextMenuView:(id)arg1 shouldBeDismissedAfterPerformingAction:(id)arg2;
- (void)dismissContextMenuView:(id)arg1 dismissalStyle:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)contextMenuView:(id)arg1 titleForHeaderInSection:(unsigned long long)arg2;
- (id)contextMenuView:(id)arg1 actionForIndexPath:(id)arg2;
- (unsigned long long)numberOfActionsInContextMenuView:(id)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithSubtitlesMenuActions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

