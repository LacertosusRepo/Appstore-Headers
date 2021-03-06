//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MMKTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_timer;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)cancelTimer;
- (void)setTimer:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

