//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSObject, NSRunLoop;
@protocol OS_dispatch_group;

@interface _SRRunLoopThread : NSThread
{
    NSObject<OS_dispatch_group> *_waitGroup;
    NSRunLoop *_runLoop;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;
- (void)dealloc;

@end

