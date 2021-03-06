//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSObject, NSString, NSURL;
@protocol OS_dispatch_queue, SPTAudioSessionController, SPTPlaybackErrorDialogs, SPTPlayer, SPTPlayerObserver, SPTPlayerQueue;

@protocol SPTPlayerFeature <SPTService>
- (id <SPTPlaybackErrorDialogs>)providePlaybackErrorDialogs;
- (id <SPTAudioSessionController>)provideAudioSessionController;
- (id <SPTPlayerQueue>)providePlayerQueue;
- (void)removePlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)addPlayerObserver:(id <SPTPlayerObserver>)arg1;
- (void)fetchPlayerState:(void (^)(SPTPlayerState *))arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
- (id <SPTPlayer>)providePlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3;
- (id <SPTPlayer>)providePlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
@end

