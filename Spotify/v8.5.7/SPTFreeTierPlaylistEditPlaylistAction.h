//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@protocol SPTModalPresentationController;

@interface SPTFreeTierPlaylistEditPlaylistAction : SPAction
{
    id <SPTModalPresentationController> _modalPresenter;
    CDUnknownBlockType _createEditViewContoller;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType createEditViewContoller; // @synthesize createEditViewContoller=_createEditViewContoller;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)icon;
- (id)title;
- (id)initWithModalPresenter:(id)arg1 logContext:(id)arg2 createEditViewContollerBlock:(CDUnknownBlockType)arg3;

@end

