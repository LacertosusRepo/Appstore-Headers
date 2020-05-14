//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUBContainerView;
@protocol SPTHubKeyboardManagerNavigationBarProvider;

@interface SPTHubKeyboardManager : NSObject
{
    id <SPTHubKeyboardManagerNavigationBarProvider> _navigationBarProvider;
    HUBContainerView *_containerView;
}

@property(readonly, nonatomic) HUBContainerView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) __weak id <SPTHubKeyboardManagerNavigationBarProvider> navigationBarProvider; // @synthesize navigationBarProvider=_navigationBarProvider;
- (void).cxx_destruct;
- (unsigned long long)animationOptionsWithCurve:(long long)arg1;
- (void)setUpOverlayWithTheKeyboardNotification:(id)arg1;
- (void)handleKeyboardWillChangeNotification:(id)arg1;
- (void)unregisterNotificationObservers;
- (void)registerNotificationObservers;
- (id)initWithNavigationBarProvider:(id)arg1 containerView:(id)arg2;

@end

