//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCKBWeakTimerTarget : NSObject
{
    id _target;
    SEL _selector;
}

- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)init;

@end

