//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UINavigationController, UIScrollView, UITabBarController, UIViewController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface VCECommonTrack : NSObject
{
    NSObject<OS_dispatch_source> *_timerHitTest;
    NSObject<OS_dispatch_queue> *_serialQueueHitTest;
    _Bool _appIsBackground;
    _Bool _appHasFocus;
    _Bool _registeredForNotifications;
    _Bool _previousDeviceOrientationIsPortrait;
    id _mainTracker;
    id _adView;
    UIScrollView *_scrollView;
    NSMutableDictionary *_viewParamsDict;
    NSMutableDictionary *_offsetDict;
    NSMutableDictionary *_scrollOffsetDict;
    NSMutableDictionary *_kbOffsetDict;
    NSMutableDictionary *_paddingDict;
    NSMutableDictionary *_sizeDict;
    NSMutableDictionary *_scrollSizeDict;
    NSMutableDictionary *_kbSizeDict;
    NSMutableDictionary *_scaleDict;
    NSMutableDictionary *_screenSizeDict;
    UIViewController *_adViewController;
    UINavigationController *_navigationController;
    UITabBarController *_tabBarController;
}

@property(nonatomic) _Bool previousDeviceOrientationIsPortrait; // @synthesize previousDeviceOrientationIsPortrait=_previousDeviceOrientationIsPortrait;
@property(nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *adViewController; // @synthesize adViewController=_adViewController;
@property(nonatomic) __weak NSMutableDictionary *screenSizeDict; // @synthesize screenSizeDict=_screenSizeDict;
@property(nonatomic) __weak NSMutableDictionary *scaleDict; // @synthesize scaleDict=_scaleDict;
@property(nonatomic) __weak NSMutableDictionary *kbSizeDict; // @synthesize kbSizeDict=_kbSizeDict;
@property(nonatomic) __weak NSMutableDictionary *scrollSizeDict; // @synthesize scrollSizeDict=_scrollSizeDict;
@property(nonatomic) __weak NSMutableDictionary *sizeDict; // @synthesize sizeDict=_sizeDict;
@property(nonatomic) __weak NSMutableDictionary *paddingDict; // @synthesize paddingDict=_paddingDict;
@property(nonatomic) __weak NSMutableDictionary *kbOffsetDict; // @synthesize kbOffsetDict=_kbOffsetDict;
@property(nonatomic) __weak NSMutableDictionary *scrollOffsetDict; // @synthesize scrollOffsetDict=_scrollOffsetDict;
@property(nonatomic) __weak NSMutableDictionary *offsetDict; // @synthesize offsetDict=_offsetDict;
@property(nonatomic) __weak NSMutableDictionary *viewParamsDict; // @synthesize viewParamsDict=_viewParamsDict;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id mainTracker; // @synthesize mainTracker=_mainTracker;
@property(nonatomic) _Bool registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) _Bool appHasFocus; // @synthesize appHasFocus=_appHasFocus;
@property(nonatomic) _Bool appIsBackground; // @synthesize appIsBackground=_appIsBackground;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopTick;
- (void)startTick;
- (void)transformChange;
- (void)tickTopView;
- (_Bool)isPointOutOfScreen:(struct CGPoint)arg1 screenWidth:(float)arg2 screenHeight:(float)arg3 statusBarHeight:(float)arg4;
- (id)customHitTestForPoint:(struct CGPoint)arg1 onParentView:(id)arg2;
- (void)keyboardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)orientationChange:(id)arg1;
- (void)willTerminate:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)registerForNotifications;
- (unsigned long long)computeNumHitsWithCV:(_Bool)arg1;
- (void)computeVI;
- (void)computeSize;
- (id)parentWindow:(id)arg1;
- (void)computeOffset;
- (void)computePadding;
- (void)computeMetricsWithTrackingOff;
- (void)computeMetrics;
- (void)findScrollView:(id)arg1;
- (id)initWithAdView:(id)arg1 originalTrackInstance:(id)arg2 paramsDict:(id)arg3 offsetDict:(id)arg4 scrollOffsetDict:(id)arg5 kbOffsetDict:(id)arg6 paddingDict:(id)arg7 sizeDict:(id)arg8 scrollSizeDict:(id)arg9 kbSizeDict:(id)arg10 scaleDict:(id)arg11 screenSizeDict:(id)arg12 adViewController:(id)arg13;

@end

