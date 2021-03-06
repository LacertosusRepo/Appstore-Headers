//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"
#import "SPTVideoFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTVideoCDNLogger;
@protocol SPTAbbaService, SPTAudioPlayerMediaClockService, SPTContainerService, SPTCoreService, SPTEventSenderService, SPTNetworkService, SPTSessionService, SPTVideoFeaturePlayerFactory;

@interface SPTVideoFeatureImplementation : NSObject <SPTService, SPTVideoFeature>
{
    id <SPTAbbaService> _abbaService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTAudioPlayerMediaClockService> _audioPlayerMediaClockService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTVideoFeaturePlayerFactory> _playerFactory;
    SPTVideoCDNLogger *_videoCDNLogger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVideoCDNLogger *videoCDNLogger; // @synthesize videoCDNLogger=_videoCDNLogger;
@property(retain, nonatomic) id <SPTVideoFeaturePlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTAudioPlayerMediaClockService> audioPlayerMediaClockService; // @synthesize audioPlayerMediaClockService=_audioPlayerMediaClockService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (id)providePlayerFactory;
- (id)provideVideoCacheOptionsFactory;
- (id)playerConfigurationWithPreventDisplaySleepDuringVideoPlayback:(_Bool)arg1;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

