//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSAControlViewObject.h"

@class NSDate, NSObject;
@protocol OS_dispatch_source;

@interface TextFieldViewObject : MSAControlViewObject
{
    NSObject<OS_dispatch_source> *_eventSource;
    NSDate *_touchDownDate;
    struct CGPoint _lastTouchPoint;
}

@property(retain, nonatomic) NSDate *touchDownDate; // @synthesize touchDownDate=_touchDownDate;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *eventSource; // @synthesize eventSource=_eventSource;
- (void).cxx_destruct;

@end
