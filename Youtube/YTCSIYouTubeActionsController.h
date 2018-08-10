//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCSIActionsController.h"

#import "YTTimingAdResponderEventHandler.h"
#import "YTTimingPlayerResponderEventHandler.h"
#import "YTTimingWatchResponderEventHandler.h"

@class GIMMe, NSDate, NSString, YTCSIAdToAdAction, YTCSIAdToVideoAction, YTCSIPrebufferAction, YTCSIVideoToAdAction, YTCSIWatchAction, YTReachabilityController;

@interface YTCSIYouTubeActionsController : YTCSIActionsController <YTTimingAdResponderEventHandler, YTTimingPlayerResponderEventHandler, YTTimingWatchResponderEventHandler>
{
    id <YTIdentityProvider> _identityProvider;
    YTReachabilityController *_reachabilityController;
    YTCSIWatchAction *_watchAction;
    YTCSIAdToVideoAction *_adToVideoAction;
    YTCSIVideoToAdAction *_videoToAdAction;
    YTCSIAdToAdAction *_adToAdAction;
    YTCSIPrebufferAction *_prebufferAction;
    NSDate *_applicationInitDate;
    _Bool _isColdWatchAction;
    _Bool _didReceivePageWillLoad;
    _Bool _hasStoppedHomeWatch;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)prebufferAction;
- (id)videoToAdAction;
- (id)adToVideoAction;
- (id)watchAction;
- (void)clearPrebufferAction;
- (void)clearAdToAdAction;
- (void)clearVideoToAdAction;
- (void)clearAdToVideoAction;
- (void)clearWatchAction;
- (void)cancelAdToAdAction;
- (void)cancelVideoToAdAction;
- (void)cancelAdToVideoAction;
- (void)cancelWatchAction;
- (void)cancelNotCompletedAdActions;
- (void)cancelWatchActionIfNotPersistent;
- (void)createPrebufferAction;
- (void)createVideoToAdAction;
- (void)createAdToAdAction;
- (void)createAdToVideoAction;
- (void)createWatchActionFromIntent:(_Bool)arg1;
- (void)startPrebufferActionWithAdBreakType:(int)arg1;
- (void)startVideoToAdActionWithAdBreakType:(int)arg1 loadType:(id)arg2;
- (void)startAdToAdActionWithAdBreakType:(int)arg1 loadType:(id)arg2;
- (void)startAdToVideoActionWithAdBreakType:(int)arg1;
- (void)startPotentialWatchActionWithWatchTransition:(id)arg1 coldStart:(_Bool)arg2;
- (void)handleAdTimingEvent:(id)arg1;
- (void)handlePlayerTimingEventWithType:(int)arg1 data:(id)arg2;
- (void)handleWatchTimingEventWithType:(int)arg1 watchTransition:(id)arg2;
- (void)registerAction:(id)arg1;
- (id)initWithSystemNotifications:(id)arg1 fetcherService:(id)arg2 samplingRate:(float)arg3 globalConfig:(id)arg4;
- (id)initWithSystemNotifications:(id)arg1 fetcherService:(id)arg2 identityProvider:(id)arg3 reachabilityController:(id)arg4 globalConfig:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

