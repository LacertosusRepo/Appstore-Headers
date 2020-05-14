//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@protocol SPTModalPresentationController;

@interface SPTEditPlaylistEditAction : SPAction
{
    id <SPTModalPresentationController> _modalPresenter;
    CDUnknownBlockType _createEditViewController;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType createEditViewController; // @synthesize createEditViewController=_createEditViewController;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)icon;
- (id)title;
- (id)initWithModalPresenter:(id)arg1 logContext:(id)arg2 createEditViewControllerBlock:(CDUnknownBlockType)arg3;

@end

