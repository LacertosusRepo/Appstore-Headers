//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVSampleBufferAudioRenderer, NSArray, NSOperationQueue, SPTAudioSessionPortDescription;
@protocol OS_dispatch_queue;

@interface SPTAudioRendererObserver : NSObject
{
    CDUnknownBlockType _statusChangeHandler;
    CDUnknownBlockType _automaticFlushHandler;
    CDUnknownBlockType _routePortChangeHandler;
    CDUnknownBlockType _mediaServicesWereLostHandler;
    CDUnknownBlockType _mediaServicesWereResetHandler;
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
@property(copy, nonatomic) CDUnknownBlockType mediaServicesWereResetHandler; // @synthesize mediaServicesWereResetHandler=_mediaServicesWereResetHandler;
@property(copy, nonatomic) CDUnknownBlockType mediaServicesWereLostHandler; // @synthesize mediaServicesWereLostHandler=_mediaServicesWereLostHandler;
@property(copy, nonatomic) CDUnknownBlockType routePortChangeHandler; // @synthesize routePortChangeHandler=_routePortChangeHandler;
@property(copy, nonatomic) CDUnknownBlockType automaticFlushHandler; // @synthesize automaticFlushHandler=_automaticFlushHandler;
@property(copy, nonatomic) CDUnknownBlockType statusChangeHandler; // @synthesize statusChangeHandler=_statusChangeHandler;
- (void).cxx_destruct;
- (void)updateCurrentRoutePortDescription:(CDUnknownBlockType)arg1;
- (void)handleMediaServicesWereReset:(id)arg1;
- (void)handleMediaServicesWereLost:(id)arg1;
- (void)handleInterruptNotificaion:(id)arg1;
- (void)handleRouteChangeNotifcation:(id)arg1;
- (void)handleAutomaticFlushNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
@property(readonly, nonatomic) SPTAudioSessionPortDescription *currentRoutePortDescription;
- (id)initWithAudioRenderer:(id)arg1 queue:(id)arg2;

@end

