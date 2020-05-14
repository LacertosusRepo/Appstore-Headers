//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAccessoryStateManager, SPTAdsBaseEntity, SPTEventSender, SPTPlayer;

@interface SPTAdVoiceLogEffectHandler : NSObject
{
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTAdsBaseEntity> _adEntity;
    id <SPTEventSender> _eventSender;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(nonatomic) __weak id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
- (void).cxx_destruct;
- (void)logVoiceAdLogEvent:(id)arg1 position:(double)arg2;
- (id)getActiveConnectedDevice;
- (void)handlePostAdVoiceLog:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (void)handlePostAdVoiceLogWithPosition:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithAccessoryStateManager:(id)arg1 eventSender:(id)arg2 adEntity:(id)arg3 player:(id)arg4;

@end

