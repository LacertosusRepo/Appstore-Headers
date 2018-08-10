//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioSession, MPMusicPlayerController, MPVolumeView, NSArray, UIApplication;

@interface SPTGaiaVolumeButtonController : NSObject
{
    _Bool _stealingVolume;
    _Bool _shouldMissTheNextVolumeEvent;
    _Bool _stealingInterruptedBySecondaryAudio;
    _Bool _storedVolumeRouteTypeIsHeadPhones;
    _Bool _observingOutputVolume;
    float _initialVolume;
    float _resetVolume;
    id <SPTGaiaVolumeButtonControllerDelegate> _delegate;
    NSArray *_initialOutputRoutes;
    UIApplication *_application;
    AVAudioSession *_audioSession;
    MPMusicPlayerController *_applicationMusicPlayer;
    MPVolumeView *_volumeView;
}

@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) MPMusicPlayerController *applicationMusicPlayer; // @synthesize applicationMusicPlayer=_applicationMusicPlayer;
@property(retain, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic, getter=isObservingOutputVolume) _Bool observingOutputVolume; // @synthesize observingOutputVolume=_observingOutputVolume;
@property(nonatomic) _Bool storedVolumeRouteTypeIsHeadPhones; // @synthesize storedVolumeRouteTypeIsHeadPhones=_storedVolumeRouteTypeIsHeadPhones;
@property(nonatomic) _Bool stealingInterruptedBySecondaryAudio; // @synthesize stealingInterruptedBySecondaryAudio=_stealingInterruptedBySecondaryAudio;
@property(nonatomic) float resetVolume; // @synthesize resetVolume=_resetVolume;
@property(retain, nonatomic) NSArray *initialOutputRoutes; // @synthesize initialOutputRoutes=_initialOutputRoutes;
@property(nonatomic) float initialVolume; // @synthesize initialVolume=_initialVolume;
@property(nonatomic) __weak id <SPTGaiaVolumeButtonControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldMissTheNextVolumeEvent; // @synthesize shouldMissTheNextVolumeEvent=_shouldMissTheNextVolumeEvent;
@property(nonatomic, getter=isStealingVolume) _Bool stealingVolume; // @synthesize stealingVolume=_stealingVolume;
- (void).cxx_destruct;
- (_Bool)isCurrentConnectionHeadPhones;
- (void)tryToStealVolumeAgain;
- (void)outputVolumeChanged;
- (void)systemVolumeHUDHidden:(_Bool)arg1;
- (void)stopStealingVolumeButtons;
- (void)continueStealingVolumeButtonsOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)startStealingVolumeButtonsWithCompletion:(CDUnknownBlockType)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeVolumeDependencies;
- (void)setupVolumeDependencies;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 audioSession:(id)arg2 applicationMusicPlayer:(id)arg3;

@end
