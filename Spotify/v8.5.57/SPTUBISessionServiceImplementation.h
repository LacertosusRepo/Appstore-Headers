//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBISessionService-Protocol.h"

@class NSString, SPTAllocationContext, SPTUBIPlaybackIdTracker;
@protocol SPTPlayerFeature, SPTUBIService, SPTUBISessionServiceResponder;

@interface SPTUBISessionServiceImplementation : NSObject <SPTUBISessionService>
{
    id <SPTPlayerFeature> _playerService;
    id <SPTUBIService> _ubiService;
    SPTUBIPlaybackIdTracker *_playbackIdTracker;
    id <SPTUBISessionServiceResponder> _sessionServiceResponder;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTUBISessionServiceResponder> sessionServiceResponder; // @synthesize sessionServiceResponder=_sessionServiceResponder;
@property(retain, nonatomic) SPTUBIPlaybackIdTracker *playbackIdTracker; // @synthesize playbackIdTracker=_playbackIdTracker;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

