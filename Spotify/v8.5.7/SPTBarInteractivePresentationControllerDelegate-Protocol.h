//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTBarInteractivePresentationController, UIView, UIViewController;
@protocol SPTBarInteractiveTransitionParticipant;

@protocol SPTBarInteractivePresentationControllerDelegate <NSObject>
- (UIView *)tabBarForPresentationController:(SPTBarInteractivePresentationController *)arg1;
- (UIViewController<SPTBarInteractiveTransitionParticipant> *)barViewControllerForPresentationController:(SPTBarInteractivePresentationController *)arg1;
- (void)interactivePresentationControllerNeedsDismissal:(SPTBarInteractivePresentationController *)arg1;
- (void)interactivePresentationControllerNeedsPresentation:(SPTBarInteractivePresentationController *)arg1;
- (double)panHeightForInteractivePresentationController:(SPTBarInteractivePresentationController *)arg1;

@optional
- (_Bool)interactiveGesturesEnabled;
@end

