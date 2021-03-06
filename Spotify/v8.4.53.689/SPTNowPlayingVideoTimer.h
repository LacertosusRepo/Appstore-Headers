//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

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

