//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol SPTCanvasMetadataResolverFactory;

@interface SPTCanvasPlaylistPageManager : NSObject
{
    unsigned long long _numberOfResolvedTracks;
    id <SPTCanvasMetadataResolverFactory> _metaDataResolverFactory;
    NSMutableDictionary *_metadataResolvers;
    NSMutableDictionary *_allTracksDict;
    NSArray *_allTracks;
}

@property(copy, nonatomic) NSArray *allTracks; // @synthesize allTracks=_allTracks;
@property(readonly, nonatomic) NSMutableDictionary *allTracksDict; // @synthesize allTracksDict=_allTracksDict;
@property(readonly, nonatomic) NSMutableDictionary *metadataResolvers; // @synthesize metadataResolvers=_metadataResolvers;
@property(readonly, nonatomic) id <SPTCanvasMetadataResolverFactory> metaDataResolverFactory; // @synthesize metaDataResolverFactory=_metaDataResolverFactory;
@property(nonatomic) unsigned long long numberOfResolvedTracks; // @synthesize numberOfResolvedTracks=_numberOfResolvedTracks;
- (void).cxx_destruct;
- (void)resolvePageForTrackAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)canvasModelAtIndex:(long long)arg1;
- (id)trackAtIndex:(long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTracks;
- (id)initWithTracks:(id)arg1 metaDataResolverFactory:(id)arg2;

@end

