//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationRadioService.h"

@class NSString, SPTAllocationContext;

@interface SPTExternalIntegrationRadioServiceImplementation : NSObject <SPTExternalIntegrationRadioService>
{
    id <SPTExternalIntegrationRadioController> _sharedController;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <RadioFeature> _radioFeature;
    id <SPTContainerService> _containerService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(readonly, nonatomic) __weak id <RadioFeature> radioFeature; // @synthesize radioFeature=_radioFeature;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationRadioController> sharedController; // @synthesize sharedController=_sharedController;
- (id)provideRadioController;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

