//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTBaseModalEditorViewController.h"

@class GIMMe, UIViewController<YTChannelProfileFieldEditorProtocol>, YTICommand;

@interface YTChannelProfileFieldEditorContainerViewController : YTBaseModalEditorViewController
{
    YTICommand *_model;
    UIViewController<YTChannelProfileFieldEditorProtocol> *_viewController;
}

- (void).cxx_destruct;
- (void)didTapDoneButton:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;

// Remaining properties
@property(nonatomic) __weak GIMMe *gimme;

@end

