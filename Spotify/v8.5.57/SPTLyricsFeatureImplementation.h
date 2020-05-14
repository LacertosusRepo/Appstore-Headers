//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTLyricsV2Service;
@protocol SPTFeatureFlaggingService, SPTLyricsTrackChecker, SPTLyricsV2TestManager, SPTNetworkService, SPTRemoteConfigurationService;

@interface SPTLyricsFeatureImplementation : NSObject <SPTLyricsFeature>
{
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTNetworkService> _networkService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTLyricsTrackChecker> _trackChecker;
    id <SPTLyricsV2TestManager> _testManager;
    SPTLyricsV2Service *_lyricsV2Service;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLyricsV2Service *lyricsV2Service; // @synthesize lyricsV2Service=_lyricsV2Service;
@property(retain, nonatomic) id <SPTLyricsV2TestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTLyricsTrackChecker> trackChecker; // @synthesize trackChecker=_trackChecker;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
- (void).cxx_destruct;
- (id)provideLyricsV2Service;
- (id)provideTestManager;
- (id)provideLyricsTrackChecker;
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

