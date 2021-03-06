//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, SPTPlayerState;
@protocol SPTExternalIntegrationExternalActionOrigin, SPTExternalIntegrationPlaybackController, SPTOnDemandSet;

@interface SPTDrivingModeCarModePlayer : NSObject
{
    id <SPTExternalIntegrationExternalActionOrigin> _externalActionOrigin;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTOnDemandSet> _onDemandSet;
    NSMutableDictionary *_resumePoints;
    NSMutableDictionary *_resumeURIs;
    NSURL *_queuedURI;
    NSURL *_currentURI;
}

@property(retain, nonatomic) NSURL *currentURI; // @synthesize currentURI=_currentURI;
@property(retain, nonatomic) NSURL *queuedURI; // @synthesize queuedURI=_queuedURI;
@property(readonly, nonatomic) NSMutableDictionary *resumeURIs; // @synthesize resumeURIs=_resumeURIs;
@property(readonly, nonatomic) NSMutableDictionary *resumePoints; // @synthesize resumePoints=_resumePoints;
@property(readonly, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (unsigned long long)stateForContextURI:(id)arg1;
- (id)playOptionsForSkipTo:(id)arg1 seekTo:(id)arg2;
- (id)resumeOptionsFor:(id)arg1;
- (void)updatePlaybackStatusFromPlayerState:(id)arg1;
- (void)clearQueuedURI;
- (void)togglePlaybackForContextURI:(id)arg1;
@property(readonly, nonatomic) SPTPlayerState *playerState;
@property(readonly, nonatomic) id <SPTExternalIntegrationExternalActionOrigin> externalActionOrigin; // @synthesize externalActionOrigin=_externalActionOrigin;
- (id)initWithPlaybackController:(id)arg1 onDemandSet:(id)arg2;

@end

