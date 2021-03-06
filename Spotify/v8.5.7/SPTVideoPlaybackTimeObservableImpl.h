//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoPlaybackTimeObservableInternal-Protocol.h"

@class NSMutableArray, NSString, SPTVideoPlayerSource;
@protocol OS_dispatch_queue, SPTKVOController;

@interface SPTVideoPlaybackTimeObservableImpl : NSObject <SPTVideoPlaybackTimeObservableInternal>
{
    _Bool _ready;
    SPTVideoPlayerSource *_playerSource;
    NSMutableArray *_addObserverClosures;
    NSMutableArray *_registeredObserverTokens;
    NSObject<OS_dispatch_queue> *_timeObserverQueue;
    id <SPTKVOController> _kvoController;
}

@property(retain, nonatomic) id <SPTKVOController> kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timeObserverQueue; // @synthesize timeObserverQueue=_timeObserverQueue;
@property(retain, nonatomic) NSMutableArray *registeredObserverTokens; // @synthesize registeredObserverTokens=_registeredObserverTokens;
@property(retain, nonatomic) NSMutableArray *addObserverClosures; // @synthesize addObserverClosures=_addObserverClosures;
@property(nonatomic) __weak SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
- (void).cxx_destruct;
- (id)cmTimesForDurationFactors:(id)arg1 withDuration:(double)arg2;
- (double)duration;
- (id)player;
- (void)tryAddObserverWithClosure:(CDUnknownBlockType)arg1;
- (void)removeObservers;
- (void)addObservers;
@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
- (void)stopObserving;
- (void)startObserving;
- (void)addObserver:(CDUnknownBlockType)arg1 forPeriodicInterval:(double)arg2;
- (void)addObserver:(CDUnknownBlockType)arg1 atDurationFactors:(id)arg2;
- (void)refreshPlayer:(id)arg1 playerSource:(id)arg2;
- (void)dealloc;
- (id)initWithPlayerSource:(id)arg1 kvoControllerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

