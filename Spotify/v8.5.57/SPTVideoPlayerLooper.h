//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVQueuePlayer;
@protocol BMKVOController;

@interface SPTVideoPlayerLooper : NSObject
{
    AVQueuePlayer *_playerQueue;
    id <BMKVOController> _kvoController;
}

@property(readonly, nonatomic) id <BMKVOController> kvoController; // @synthesize kvoController=_kvoController;
@property(readonly, nonatomic) AVQueuePlayer *playerQueue; // @synthesize playerQueue=_playerQueue;
- (void).cxx_destruct;
- (void)currentItemDidChange:(id)arg1 playerQueue:(id)arg2;
- (void)dealloc;
- (void)disableLooping;
- (void)enableLooping;
- (void)startLoopingWithPlayerItem:(id)arg1;
- (id)initWithPlayerQueue:(id)arg1 kvoControllerFactory:(id)arg2;

@end

