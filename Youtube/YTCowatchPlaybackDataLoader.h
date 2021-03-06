//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, GPCPromise, YTPlaybackRequest, YTPlayerTransition;

@interface YTCowatchPlaybackDataLoader : NSObject
{
    YTPlayerTransition *_playerTransition;
    int _playerVisibility;
    GPCPromise *_playbackDataPromise;
    GIMMe *_gimme;
    YTPlaybackRequest *_playbackRequest;
}

@property(readonly, nonatomic) YTPlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (CDUnknownBlockType)errorBlockForPlaybackDataPromise:(id)arg1;
- (void)setNewOnlinePromises;
- (void)setNewOfflinePromises;
- (void)setPromisesWithPrefetchedPlayerResponse;
- (void)setFailedPromisesWithGeneralError;
- (void)startLoading;
- (void)cancelPromises;
@property(readonly, nonatomic) GPCPromise *playbackDataPromise; // @synthesize playbackDataPromise=_playbackDataPromise;
- (id)initWithPlayerTransition:(id)arg1 visibility:(int)arg2;

@end

