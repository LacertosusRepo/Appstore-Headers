//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioSession, NSMutableDictionary, NSNumber, NSString;

@interface SPTVolumeOutputRouteManager : NSObject
{
    AVAudioSession *_audioSession;
    NSString *_currentOutputRouteDescriptor;
    NSMutableDictionary *_resetVolumeMap;
}

@property(retain, nonatomic) NSMutableDictionary *resetVolumeMap; // @synthesize resetVolumeMap=_resetVolumeMap;
@property(copy, nonatomic) NSString *currentOutputRouteDescriptor; // @synthesize currentOutputRouteDescriptor=_currentOutputRouteDescriptor;
@property(readonly, nonatomic) AVAudioSession *audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (_Bool)hasCurrentOutputRouteChanged;
- (void)clearResetVolume;
- (void)setResetVolumeForCurrentOutputRoute:(double)arg1;
- (void)cacheVolumeAsCurrentRouteResetVolume:(double)arg1;
@property(readonly, nonatomic) NSNumber *resetVolumeOfCurrentOutputRoute;
- (_Bool)isSystemVolumeChangeCausedByOutputRouteChange:(double)arg1;
- (id)initWithAudioSession:(id)arg1;

@end

