//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IOSAudioDriverObserver-Protocol.h"

@class NSPointerArray, NSString;

@interface SPTAudioDriver : NSObject <IOSAudioDriverObserver>
{
    NSObject *_audioDriverMutex;
    struct IOSAudioDriver *_iosAudioDriver;
    NSPointerArray *_observers;
}

@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(nonatomic) struct IOSAudioDriver *iosAudioDriver; // @synthesize iosAudioDriver=_iosAudioDriver;
@property(retain) NSObject *audioDriverMutex; // @synthesize audioDriverMutex=_audioDriverMutex;
- (void).cxx_destruct;
- (void)audioSessionMediaServicesWereResetNotification:(id)arg1;
- (void)audioDriverDidReset:(struct IOSAudioDriver *)arg1;
- (void)audioDriverWillStartRunning:(struct IOSAudioDriver *)arg1;
- (void)audioDriver:(struct IOSAudioDriver *)arg1 didFailWithError:(id)arg2;
- (void)audioDriverDidStopRunning:(struct IOSAudioDriver *)arg1;
- (void)audioDriverDidStartRunning:(struct IOSAudioDriver *)arg1;
- (void)audioDriverDidClose:(struct IOSAudioDriver *)arg1;
- (void)audioDriverDidOpen:(struct IOSAudioDriver *)arg1;
- (void)performWithEqualizerUnit:(CDUnknownBlockType)arg1;
- (void)setEqualizerBypassedForNonMusicContent:(_Bool)arg1;
- (void)setSuspended:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (struct AudioDriver *)audioDriver;
- (void)setLogger:(struct Logger *)arg1;
- (void)createDriverWithAudioDriverType:(long long)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)initWithAudioDriverType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

