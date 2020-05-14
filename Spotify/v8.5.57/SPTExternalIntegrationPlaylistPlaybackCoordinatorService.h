//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackCoordinator-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationPlaybackService, SPTExternalIntegrationTestManagerService, SPTFreeTierPlaylistService, SPTPlaylistPlatformPlaylistDataLoader, SPTPlaylistPlatformService;

@interface SPTExternalIntegrationPlaylistPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    id <SPTFreeTierPlaylistService> _freeTierPlaylistService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTExternalIntegrationTestManagerService> _testManagerService;
    id <SPTPlaylistPlatformPlaylistDataLoader> _dataLoader;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationTestManagerService> testManagerService; // @synthesize testManagerService=_testManagerService;
@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistService> freeTierPlaylistService; // @synthesize freeTierPlaylistService=_freeTierPlaylistService;
- (void).cxx_destruct;
- (void)playContentWithURI:(id)arg1 withOptions:(id)arg2 playlistOptions:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
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

