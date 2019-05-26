//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdFocusManagerObserver-Protocol.h"
#import "SPTAdSlateContentUnitProviderObserver-Protocol.h"
#import "SPTVideoSurfaceDelegate-Protocol.h"

@class AVPlayer, FBKVOController, NSDictionary, NSString, SPOTMoatVideoTracker, SPTAdFocusManager, SPTAdSponsoredSessionContentUnitProvider, UIView;
@protocol SPTAVPlayerSource, SPTAdsBaseCosmosBridge, SPTVideoSurfaceManager;

@interface SPTAdsMoatManager : NSObject <SPTVideoSurfaceDelegate, SPTAdSlateContentUnitProviderObserver, SPTAdFocusManagerObserver>
{
    _Bool _observing;
    _Bool _tracking;
    SPOTMoatVideoTracker *_videoTracker;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    NSObject<SPTVideoSurfaceManager> *_surfaceManager;
    NSObject<SPTAVPlayerSource> *_avPlayerSource;
    FBKVOController *_kvoController;
    SPTAdSponsoredSessionContentUnitProvider *_sponsoredSessionContentUnitProvider;
    UIView *_currentSlateContentView;
    AVPlayer *_player;
    NSDictionary *_adIds;
    NSString *_advertisementIdentifier;
    id _timeObserverToken;
    SPTAdFocusManager *_adFocusManager;
}

@property(retain, nonatomic) SPTAdFocusManager *adFocusManager; // @synthesize adFocusManager=_adFocusManager;
@property(retain, nonatomic) id timeObserverToken; // @synthesize timeObserverToken=_timeObserverToken;
@property(copy, nonatomic) NSString *advertisementIdentifier; // @synthesize advertisementIdentifier=_advertisementIdentifier;
@property(copy, nonatomic) NSDictionary *adIds; // @synthesize adIds=_adIds;
@property(nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak UIView *currentSlateContentView; // @synthesize currentSlateContentView=_currentSlateContentView;
@property(nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) SPTAdSponsoredSessionContentUnitProvider *sponsoredSessionContentUnitProvider; // @synthesize sponsoredSessionContentUnitProvider=_sponsoredSessionContentUnitProvider;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(nonatomic) __weak NSObject<SPTAVPlayerSource> *avPlayerSource; // @synthesize avPlayerSource=_avPlayerSource;
@property(nonatomic) __weak NSObject<SPTVideoSurfaceManager> *surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(retain, nonatomic) id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(retain, nonatomic) SPOTMoatVideoTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
- (void).cxx_destruct;
- (void)provider:(id)arg1 slate:(id)arg2;
- (void)slateWithProvider:(id)arg1 contentView:(id)arg2;
- (id)getViewToTrack;
- (double)currentPlayheadMillis;
- (void)adFocusManagerWillResignActive:(id)arg1;
- (void)adFocusManagerDidBecomeActive:(id)arg1;
- (void)playerDidChange;
- (void)subscribeToVideoEndedEvent:(CDUnknownBlockType)arg1;
- (void)subscribeToVideoPlayEvent:(CDUnknownBlockType)arg1;
- (void)dispatchAdCompleteEvent;
- (void)pauseTracking;
- (id)parseAdIds:(id)arg1;
- (_Bool)parseMoatEnabled:(id)arg1;
- (void)endTracking;
- (void)startTracking;
- (void)startObserving;
- (void)removeBoundaryTimeObserver;
- (void)dealloc;
- (id)initWithVideoSurfaceManager:(id)arg1 avPlayerSource:(id)arg2 cosmosBridge:(id)arg3 sponsoredSessionContentUnitProvider:(id)arg4 adFocusManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

