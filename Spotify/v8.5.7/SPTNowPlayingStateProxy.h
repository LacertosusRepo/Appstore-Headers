//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingBarViewControllerObserver-Protocol.h"
#import "SPTNowPlayingBaseHeadUnitViewObserver-Protocol.h"
#import "SPTNowPlayingStateObservable-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingUnitProviderObserver-Protocol.h"

@class NSString, SPTNowPlayingBarContainerViewController, SPTNowPlayingHeadUnitContainerViewController, SPTNowPlayingTrackMetadataQueue, SPTObserverManager, SPTStatefulPlayer;
@protocol SPTNowPlayingBaseHeadUnitViewObservable;

@interface SPTNowPlayingStateProxy : NSObject <SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingBaseHeadUnitViewObserver, SPTNowPlayingBarViewControllerObserver, SPTNowPlayingStateObservable, SPTNowPlayingUnitProviderObserver>
{
    SPTStatefulPlayer *_statefulPlayer;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingHeadUnitContainerViewController *_currentHeadUnitContainerViewController;
    id <SPTNowPlayingBaseHeadUnitViewObservable> _currentBaseHeadUnitViewObservable;
    SPTNowPlayingBarContainerViewController *_currentNowPlayingBarContainerViewController;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) __weak SPTNowPlayingBarContainerViewController *currentNowPlayingBarContainerViewController; // @synthesize currentNowPlayingBarContainerViewController=_currentNowPlayingBarContainerViewController;
@property(nonatomic) __weak id <SPTNowPlayingBaseHeadUnitViewObservable> currentBaseHeadUnitViewObservable; // @synthesize currentBaseHeadUnitViewObservable=_currentBaseHeadUnitViewObservable;
@property(nonatomic) __weak SPTNowPlayingHeadUnitContainerViewController *currentHeadUnitContainerViewController; // @synthesize currentHeadUnitContainerViewController=_currentHeadUnitContainerViewController;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
- (void).cxx_destruct;
- (void)handleBarReplacementWithNewViewController:(id)arg1;
- (void)updateCurrentNowPlayingBarContainerViewControllerWithBarViewController:(id)arg1;
- (id)barContainerViewControllerFromBarViewController:(id)arg1;
- (void)handleHeadUnitReplacementWithNewViewController:(id)arg1;
- (id)baseHeadUnitViewObservableFromViewController:(id)arg1;
- (void)clearCurrentHeadUnitProperties;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)provider:(id)arg1 willReplaceViewController:(id)arg2 with:(id)arg3;
- (void)nowPlayingBarViewControllerWillDisappear:(id)arg1;
- (void)nowPlayingBarViewControllerDidAppear:(id)arg1;
- (void)baseHeadUnitViewWillDisappear:(id)arg1;
- (void)baseHeadUnitViewDidAppear:(id)arg1;
- (void)trackMetadataQueueWillSkipToNextTrack:(id)arg1;
- (void)dealloc;
- (id)initWithStatefulPlayer:(id)arg1 trackMetadataQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
