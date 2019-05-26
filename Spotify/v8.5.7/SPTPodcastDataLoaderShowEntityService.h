//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowEntityService-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags, SPTPodcastDataLoader, SPTPodcastEpisodeFactory, SPTPodcastFactory;

@interface SPTPodcastDataLoaderShowEntityService : NSObject <SPTShowEntityService>
{
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTAbbaFeatureFlags> _featureFlags;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastEpisodeFactory> _podcastEpisodeFactory;
}

@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)errorWithDescription:(id)arg1;
- (id)jsonParsingError;
- (id)nonEpisodeURLError;
- (id)nonPodcastURLError;
- (id)missingDataLoaderError;
- (void)lookupResumePointsForURIs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupEpisodeURIs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupEpisodesForShowWithURI:(id)arg1 inRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)lookupShowEntityWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

