//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;

@interface IDEventObserver : NSObject
{
    NSString *_eventKey;
    NSObject *_target;
    SEL _selector;
    NSOperationQueue *_queue;
}

+ (id)observerWithKey:(id)arg1 target:(id)arg2 selector:(SEL)arg3 queue:(id)arg4;
@property(retain) NSOperationQueue *queue; // @synthesize queue=_queue;
@property SEL selector; // @synthesize selector=_selector;
@property(retain) NSObject *target; // @synthesize target=_target;
@property(copy) NSString *eventKey; // @synthesize eventKey=_eventKey;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)handleEventWithObject:(id)arg1 waitUntilDone:(_Bool)arg2;
- (id)initWithKey:(id)arg1 target:(id)arg2 selector:(SEL)arg3 queue:(id)arg4;
- (id)init;

@end

