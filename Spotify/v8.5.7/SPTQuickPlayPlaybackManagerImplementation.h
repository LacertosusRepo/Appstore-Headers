//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQuickPlayContextDataLoaderDelegate-Protocol.h"
#import "SPTQuickPlayPlaybackManager-Protocol.h"

@class NSArray, NSString, SPTQuickPlayContextDataLoader;
@protocol SPTPlayer, SPTQuickPlayLogger;

@interface SPTQuickPlayPlaybackManagerImplementation : NSObject <SPTQuickPlayPlaybackManager, SPTQuickPlayContextDataLoaderDelegate>
{
    _Bool _isLoading;
    SPTQuickPlayContextDataLoader *_dataLoader;
    id <SPTPlayer> _player;
    id <SPTQuickPlayLogger> _logger;
    NSArray *_playContexts;
    unsigned long long _nextIndex;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) unsigned long long nextIndex; // @synthesize nextIndex=_nextIndex;
@property(copy, nonatomic) NSArray *playContexts; // @synthesize playContexts=_playContexts;
@property(readonly, nonatomic) id <SPTQuickPlayLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTQuickPlayContextDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)quickPlayContextDataLoader:(id)arg1 didFailToFetchWithError:(id)arg2;
- (void)quickPlayContextDataLoader:(id)arg1 didFetchItems:(id)arg2;
- (void)increaseIndex;
- (void)triggerQuickPlay;
- (void)loadPlayContexts;
- (id)initWithDataLoader:(id)arg1 player:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

