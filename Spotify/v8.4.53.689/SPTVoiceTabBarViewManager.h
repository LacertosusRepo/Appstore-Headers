//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTMetaViewControllerObserver.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UILongPressGestureRecognizer;

@interface SPTVoiceTabBarViewManager : NSObject <UIGestureRecognizerDelegate, SPTMetaViewControllerObserver>
{
    id <SPTVoiceTabBarViewManagerDelegate> _tabBarViewManagerDelegate;
    id <SPTMetaViewController> _metaViewController;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTVoiceTabBarViewManagerDelegate> tabBarViewManagerDelegate; // @synthesize tabBarViewManagerDelegate=_tabBarViewManagerDelegate;
- (void).cxx_destruct;
- (id)tabBarContainerViewController;
- (void)didChangeRootViewOfMetaViewController:(id)arg1;
- (id)getSearchTabBarButtonItemView;
- (id)getCurrentTabBarButtonIdentifer;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)unregisterLongPressTabBarView;
- (void)registerLongPressTabBarView;
- (id)initWithMetaViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

