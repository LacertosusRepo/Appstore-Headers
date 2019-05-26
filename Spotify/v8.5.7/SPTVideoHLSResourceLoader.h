//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoResourceLoaderInternal-Protocol.h"

@class NSArray, NSNumber, NSString, NSURL, SPTVideoCDNSelector, SPTVideoFairplayService, SPTVideoManifest, SPTVideoManifestProfile, SPTVideoManifestService;
@protocol OS_dispatch_queue, SPTVideoEventObserver, SPTVideoPlaybackIdentity, SPTVideoResourceLoaderInternalDelegate;

@interface SPTVideoHLSResourceLoader : NSObject <SPTVideoResourceLoaderInternal>
{
    _Bool _shouldHandleLoadingRequests;
    _Bool backgroundPlayPlusIsActive;
    _Bool _subtitlesEnabled;
    NSURL *_lastCDN;
    unsigned long long connectionMode;
    id <SPTVideoResourceLoaderInternalDelegate> delegate;
    SPTVideoManifestService *_manifestService;
    SPTVideoFairplayService *_fairplayService;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSString *_playbackID;
    SPTVideoManifest *_manifest;
    NSNumber *_initialManifestLatency;
    double _keyLatency;
    NSArray *_videoProfiles;
    SPTVideoManifestProfile *_audioProfile;
    NSString *_segmentTemplate;
    SPTVideoCDNSelector *_cdnSelector;
    id <SPTVideoPlaybackIdentity> _identity;
    id <SPTVideoEventObserver> _notifierProxy;
}

@property(retain, nonatomic) id <SPTVideoEventObserver> notifierProxy; // @synthesize notifierProxy=_notifierProxy;
@property(retain, nonatomic) id <SPTVideoPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool subtitlesEnabled; // @synthesize subtitlesEnabled=_subtitlesEnabled;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
@property(retain, nonatomic) NSString *segmentTemplate; // @synthesize segmentTemplate=_segmentTemplate;
@property(retain, nonatomic) SPTVideoManifestProfile *audioProfile; // @synthesize audioProfile=_audioProfile;
@property(retain, nonatomic) NSArray *videoProfiles; // @synthesize videoProfiles=_videoProfiles;
@property(nonatomic) double keyLatency; // @synthesize keyLatency=_keyLatency;
@property(retain, nonatomic) NSNumber *initialManifestLatency; // @synthesize initialManifestLatency=_initialManifestLatency;
@property(retain, nonatomic) SPTVideoManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSString *playbackID; // @synthesize playbackID=_playbackID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) SPTVideoFairplayService *fairplayService; // @synthesize fairplayService=_fairplayService;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
@property(nonatomic) __weak id <SPTVideoResourceLoaderInternalDelegate> delegate; // @synthesize delegate;
@property(nonatomic) unsigned long long connectionMode; // @synthesize connectionMode;
@property(nonatomic) _Bool backgroundPlayPlusIsActive; // @synthesize backgroundPlayPlusIsActive;
@property(readonly, nonatomic) NSURL *lastCDN; // @synthesize lastCDN=_lastCDN;
@property(nonatomic) _Bool shouldHandleLoadingRequests; // @synthesize shouldHandleLoadingRequests=_shouldHandleLoadingRequests;
- (void).cxx_destruct;
- (id)segmentVideoURLWithIndex:(long long)arg1 profile:(id)arg2;
- (id)subtitleVideoURLWithSubtitle:(id)arg1;
- (id)segmentVideoURLWithIndex:(long long)arg1 profileID:(long long)arg2;
- (void)finishLoadingRequestForFairplay:(id)arg1;
- (void)finishLoadingRequestWithMasterManifest:(id)arg1;
- (void)finishLoadingRequest:(id)arg1 withManifestForProfileID:(unsigned long long)arg2;
- (void)finishLoadingRequest:(id)arg1 withManifestForSubtitleProfileID:(unsigned long long)arg2;
- (void)finishLoadingRequest:(id)arg1 forSegmentIndex:(unsigned long long)arg2 ofProfileID:(unsigned long long)arg3;
- (void)handleLoadingRequest:(id)arg1 withLocalHLSURL:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)loadPropertiesWithManifest:(id)arg1;
- (void)prepareManifestResource:(CDUnknownBlockType)arg1;
- (id)videoProfileForURL:(id)arg1;
- (id)selectedAudioProfile;
- (id)URLForAsset;
- (id)initWithIdentity:(id)arg1 notifierProxy:(id)arg2 manifestService:(id)arg3 fairplayService:(id)arg4 cdnSelector:(id)arg5 subtitlesEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

