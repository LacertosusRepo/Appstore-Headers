//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTDelayedWatchNextLoadingDelegate.h"

@class GIMMe, NSString, NSTimer, YTDelayedWatchNextService, YTHotConfig, YTWatchNextLoadingState;

@interface YTPlayerWatchNextOrderingController : NSObject <YTDelayedWatchNextLoadingDelegate>
{
    YTHotConfig *_hotConfig;
    NSTimer *_timer;
    YTWatchNextLoadingState *_state;
    GIMMe *_gimme;
    YTDelayedWatchNextService *_delayedWatchNextService;
}

@property(nonatomic) __weak YTDelayedWatchNextService *delayedWatchNextService; // @synthesize delayedWatchNextService=_delayedWatchNextService;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)timerForDelay:(double)arg1;
- (void)didFireTimer;
- (id)currentTimer;
- (void)loadResponseIfApplicable;
- (_Bool)shouldDelayReceivedResponse;
- (void)didLoadPlayerWithMediaStreams;
- (void)reset;
- (void)willMakeWatchNextRequest;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

