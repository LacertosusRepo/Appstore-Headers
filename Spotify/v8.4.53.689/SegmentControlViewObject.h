//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAControlViewObject.h"

@class NSTimer;

@interface SegmentControlViewObject : MSAControlViewObject
{
    long long _currentSelectedIndex;
    NSTimer *_momentaryTimer;
    NSTimer *_eventTimer;
}

@property(retain, nonatomic) NSTimer *eventTimer; // @synthesize eventTimer=_eventTimer;
@property(retain, nonatomic) NSTimer *momentaryTimer; // @synthesize momentaryTimer=_momentaryTimer;
@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
- (void).cxx_destruct;

@end

