//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSAViewObject.h"

@class MSAPersistentTouchInfo, MySpinTouch, NSObject, NSTimer, UIView;
@protocol OS_dispatch_source;

@interface ScrollViewerViewObject : MSAViewObject
{
    _Bool _shouldScrollByEnd;
    _Bool _willBeginDragging;
    _Bool _isPageSwipe;
    _Bool _rememberEvent;
    int _pageX;
    int _pageY;
    int _originPageX;
    int _originPageY;
    float _currentSpeedX;
    float _currentSpeedY;
    UIView *_subview;
    MySpinTouch *_touchInfo;
    MSAPersistentTouchInfo *_pti;
    NSTimer *_eventTimer;
    double _timeStamp;
    double _eventDeltaTime;
    unsigned long long _scrollingState;
    NSObject<OS_dispatch_source> *_keyboardEventSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *keyboardEventSource; // @synthesize keyboardEventSource=_keyboardEventSource;
@property(nonatomic) unsigned long long scrollingState; // @synthesize scrollingState=_scrollingState;
@property(nonatomic) double eventDeltaTime; // @synthesize eventDeltaTime=_eventDeltaTime;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) float currentSpeedY; // @synthesize currentSpeedY=_currentSpeedY;
@property(nonatomic) float currentSpeedX; // @synthesize currentSpeedX=_currentSpeedX;
@property(retain, nonatomic) NSTimer *eventTimer; // @synthesize eventTimer=_eventTimer;
@property(retain, nonatomic) MSAPersistentTouchInfo *pti; // @synthesize pti=_pti;
@property(retain, nonatomic) MySpinTouch *touchInfo; // @synthesize touchInfo=_touchInfo;
@property(retain, nonatomic) UIView *subview; // @synthesize subview=_subview;
@property(nonatomic, getter=isRememberedEvent) _Bool rememberEvent; // @synthesize rememberEvent=_rememberEvent;
@property(nonatomic) _Bool isPageSwipe; // @synthesize isPageSwipe=_isPageSwipe;
@property(nonatomic) _Bool willBeginDragging; // @synthesize willBeginDragging=_willBeginDragging;
@property(nonatomic) int originPageY; // @synthesize originPageY=_originPageY;
@property(nonatomic) int originPageX; // @synthesize originPageX=_originPageX;
@property(nonatomic) int pageY; // @synthesize pageY=_pageY;
@property(nonatomic) int pageX; // @synthesize pageX=_pageX;
@property(nonatomic) _Bool shouldScrollByEnd; // @synthesize shouldScrollByEnd=_shouldScrollByEnd;
- (void).cxx_destruct;

@end

