//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, AVSampleBufferAudioRenderer, NSArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface SPTAudioRendererObserver : NSObject
{
    CDUnknownBlockType _statusChangeHandler;
    CDUnknownBlockType _automaticFlushHandler;
    CDUnknownBlockType _routePortChangeHandler;
    AVSampleBufferAudioRenderer *_audioRenderer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSOperationQueue *_operationQueue;
    NSArray *_observers;
}

@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak AVSampleBufferAudioRenderer *audioRenderer; // @synthesize audioRenderer=_audioRenderer;
@property(copy, nonatomic) CDUnknownBlockType routePortChangeHandler; // @synthesize routePortChangeHandler=_routePortChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType automaticFlushHandler; // @synthesize automaticFlushHandler=_automaticFlushHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler=_statusChangeHandler;
- (void).cxx_destruct;
- (void)updateCurrentRoutePortDescription:(CDUnknownBlockType)arg1;
- (void)handleRouteChangeNotifcation:(id)arg1;
- (void)handleAutomaticFlushNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
@property(readonly, nonatomic) AVAudioSessionPortDescription *currentRoutePortDescription;
- (id)initWithAudioRenderer:(id)arg1 queue:(id)arg2;

@end

