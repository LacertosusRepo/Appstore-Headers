//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationPlaybackCoordinator-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTExternalIntegrationPlaybackServiceImplementation, SPTExternalIntegrationPodcastContentFactory;
@protocol SPTPodcastFeature;

@interface SPTExternalIntegrationPodcastPlaybackCoordinatorService : NSObject <SPTService, SPTExternalIntegrationPlaybackCoordinator>
{
    SPTExternalIntegrationPlaybackServiceImplementation *_playbackService;
    id <SPTPodcastFeature> _podcastService;
    SPTExternalIntegrationPodcastContentFactory *_contentFactory;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) SPTExternalIntegrationPodcastContentFactory *contentFactory; // @synthesize contentFactory=_contentFactory;
@property(readonly, nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(readonly, nonatomic) __weak SPTExternalIntegrationPlaybackServiceImplementation *playbackService; // @synthesize playbackService=_playbackService;
- (void).cxx_destruct;
- (id)jsonParsingError:(id)arg1;
- (void)playEpisodes:(id)arg1 withUri:(id)arg2 origin:(id)arg3 skipToTrack:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)getStartEpisodeUrl:(id)arg1 withEpisodes:(id)arg2;
- (struct _NSRange)getRangeParams:(unsigned long long)arg1 playOptions:(id)arg2;
- (void)playEpisodeWithURI:(id)arg1 options:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)playShowWithURI:(id)arg1 options:(id)arg2 origin:(id)arg3 requestOptions:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)playCollectionPodcastEpisodes:(id)arg1 options:(id)arg2 origin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
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

