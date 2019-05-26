//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, SPTNowPlayingVideoTimerDelegate;

@interface SPTNowPlayingVideoTimer : NSObject
{
    id <SPTNowPlayingVideoTimerDelegate> _delegate;
    NSObject<OS_dispatch_source> *_scheduleSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *scheduleSource; // @synthesize scheduleSource=_scheduleSource;
@property(nonatomic) __weak id <SPTNowPlayingVideoTimerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stop;
- (void)restart;
- (void)fire;
- (void)dealloc;

@end

