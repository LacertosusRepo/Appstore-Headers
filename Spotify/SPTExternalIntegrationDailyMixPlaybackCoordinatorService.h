//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationPlaybackCoordinator.h"
#import "SPTService.h"

@class NSString, SPTAllocationContext;

@interface SPTExternalIntegrationDailyMixPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTDailyMixFeature> _dailyMixService;
    id <SPTDailyMixManager> _dailyMixManager;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTDailyMixManager> dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(readonly, nonatomic) __weak id <SPTDailyMixFeature> dailyMixService; // @synthesize dailyMixService=_dailyMixService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canPlayContentWithURI:(id)arg1;
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

