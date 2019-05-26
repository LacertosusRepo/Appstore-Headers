//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaSystemVolumeManager-Protocol.h"

@class AVAudioSession, MPMusicPlayerController, NSString, SPTGaiaMPMusicPlayerControllerFactory, SPTObserverManager;

@interface SPTGaiaSystemVolumeManagerImplementation : NSObject <SPTGaiaSystemVolumeManager>
{
    AVAudioSession *_audioSession;
    SPTGaiaMPMusicPlayerControllerFactory *_musicPlayerFactory;
    MPMusicPlayerController *_musicPlayerController;
    SPTObserverManager *_observers;
}

@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) MPMusicPlayerController *musicPlayerController; // @synthesize musicPlayerController=_musicPlayerController;
@property(retain, nonatomic) SPTGaiaMPMusicPlayerControllerFactory *musicPlayerFactory; // @synthesize musicPlayerFactory=_musicPlayerFactory;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (void)dealloc;
- (void)alertObserversOfSystemVolumeChange;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)outputVolumeSelectorString;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateSystemVolume:(double)arg1;
- (double)currentSystemVolume;
- (void)observeLocalVolume;
- (id)initWithAudioSession:(id)arg1 musicPlayerFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

