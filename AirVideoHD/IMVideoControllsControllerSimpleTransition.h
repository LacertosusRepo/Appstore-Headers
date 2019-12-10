//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMSimpleViewControllerTransition.h"

#import "IMVideoOverlayControllerTransition-Protocol.h"

@class NSString;

@interface IMVideoControllsControllerSimpleTransition : IMSimpleViewControllerTransition <IMVideoOverlayControllerTransition>
{
}

- (id)interactiveAnimation;
- (_Bool)transitionBetweenTwoVideoOverlayControllers;

// Remaining properties
@property(readonly, nonatomic) _Bool animated;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool interactive;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool transitionCancelled;

@end

