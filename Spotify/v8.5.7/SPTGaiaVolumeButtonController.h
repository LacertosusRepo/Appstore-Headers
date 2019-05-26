//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, MPVolumeView, NSArray, UIApplication;
@protocol SPTGaiaSystemVolumeManager, SPTGaiaVolumeButtonControllerDelegate;

@interface SPTGaiaVolumeButtonController : NSObject
{
    _Bool _stealingVolume;
    _Bool _shouldMissTheNextVolumeEvent;
    _Bool _stealingInterruptedBySecondaryAudio;
    _Bool _observingOutputVolume;
    float _initialVolume;
    float _resetVolume;
    id <SPTGaiaVolumeButtonControllerDelegate> _delegate;
    UIApplication *_application;
    AVAudioSession *_audioSession;
    id <SPTGaiaSystemVolumeManager> _systemVolumeManager;
    NSArray *_stealingWithOutputRoutes;
    MPVolumeView *_volumeView;
}

@property(nonatomic) float resetVolume; // @synthesize resetVolume=_resetVolume;
@property(nonatomic) float initialVolume; // @synthesize initialVolume=_initialVolume;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic, getter=isObservingOutputVolume) _Bool observingOutputVolume; // @synthesize observingOutputVolume=_observingOutputVolume;
@property(nonatomic) _Bool stealingInterruptedBySecondaryAudio; // @synthesize stealingInterruptedBySecondaryAudio=_stealingInterruptedBySecondaryAudio;
@property(copy, nonatomic) NSArray *stealingWithOutputRoutes; // @synthesize stealingWithOutputRoutes=_stealingWithOutputRoutes;
@property(retain, nonatomic) id <SPTGaiaSystemVolumeManager> systemVolumeManager; // @synthesize systemVolumeManager=_systemVolumeManager;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SPTGaiaVolumeButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldMissTheNextVolumeEvent; // @synthesize shouldMissTheNextVolumeEvent=_shouldMissTheNextVolumeEvent;
@property(nonatomic, getter=isStealingVolume) _Bool stealingVolume; // @synthesize stealingVolume=_stealingVolume;
- (void).cxx_destruct;
- (_Bool)hasCurrentOutputRouteChanged;
- (void)tryToStealVolumeAgain;
- (void)outputVolumeChanged;
- (void)setDeviceVolumeIfDifferent:(float)arg1;
- (void)stopStealingVolumeButtons;
- (void)continueStealingVolumeButtonsOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startStealingVolumeButtonsWithCompletion:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeVolumeDependencies;
- (void)setupVolumeDependencies;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 audioSession:(id)arg2 systemVolumeManager:(id)arg3;

@end

