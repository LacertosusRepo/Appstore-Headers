//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSAControlViewObject.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface UIStepperViewObject : MSAControlViewObject
{
    _Bool _isDown;
    int _counter;
    int _rounds;
    int _factor;
    NSObject<OS_dispatch_source> *_eventSource;
    unsigned long long _mode;
    double _currentValue;
}

@property(nonatomic) double currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) int factor; // @synthesize factor=_factor;
@property(nonatomic) int rounds; // @synthesize rounds=_rounds;
@property(nonatomic) int counter; // @synthesize counter=_counter;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool isDown; // @synthesize isDown=_isDown;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *eventSource; // @synthesize eventSource=_eventSource;
- (void).cxx_destruct;

@end

