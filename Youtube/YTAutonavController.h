//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTAutonavControllerProtocol.h"
#import "YTResponder.h"

@class GIMMe, NSHashTable, NSString, YTAutonavPauseController, YTAutonavPrefetchController, YTIAutoplayRenderer, YTIPlayerOverlayAutoplayRenderer;

@interface YTAutonavController : NSObject <YTAutonavControllerProtocol, YTResponder>
{
    NSHashTable *_observers;
    YTIAutoplayRenderer *_autoplayRenderer;
    YTIPlayerOverlayAutoplayRenderer *_autonavRenderer;
    YTAutonavPrefetchController *_prefetchController;
    _Bool _endscreenWasCancelled;
    _Bool _countdownActive;
    id <YTResponder> _parentResponder;
    id <YTAutonavPreviousVideoDelegateProtocol> _previousVideoDelegate;
    id <YTAutonavPauseControllerDelegate> _pauseDelegate;
    GIMMe *_gimme;
    YTAutonavPauseController *_pauseController;
}

@property(retain, nonatomic) YTAutonavPauseController *pauseController; // @synthesize pauseController=_pauseController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) _Bool countdownActive; // @synthesize countdownActive=_countdownActive;
@property(readonly, nonatomic) _Bool endscreenWasCancelled; // @synthesize endscreenWasCancelled=_endscreenWasCancelled;
@property(nonatomic) __weak id <YTAutonavPauseControllerDelegate> pauseDelegate; // @synthesize pauseDelegate=_pauseDelegate;
@property(nonatomic) __weak id <YTAutonavPreviousVideoDelegateProtocol> previousVideoDelegate; // @synthesize previousVideoDelegate=_previousVideoDelegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)maybeCancelAutonavPrefetchTask;
- (void)maybeScheduleAutonavPrefetch;
- (id)navEndpointHavingWatchEndpointOrNil:(id)arg1;
- (id)prevEndpoint;
- (id)nextEndpoint;
- (id)autonavEndscreenCountdownEndpoint;
- (void)sendWatchTransitionWithNavEndpoint:(id)arg1 watchEndpointSource:(int)arg2;
- (void)countdownCompleted;
- (void)autonavCountdownDidReachTriggerWindow;
- (double)autonavCountdownWindow;
- (id)autonavRenderer;
- (id)autonavEndpoint;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)reset;
- (void)cancelEndscreen;
- (void)stopCountdown;
- (void)startCountdown;
- (void)playAutonavEndscreenCountdown;
- (void)playAutonav;
- (void)playPrevious;
- (void)playNext;
- (_Bool)hasAutonavSpinner;
- (_Bool)hasAutonavVideo;
- (_Bool)hasPreviousVideo;
- (_Bool)hasNextVideo;
- (void)setAutoplayRenderer:(id)arg1 playerOverlayAutoplayRenderer:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

