//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTFreeTierRecommendationsTracksDataLoader-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTCollectionPlatformDataLoader;

@interface SPTFreeTierRecommendationsTracksDataLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTFreeTierRecommendationsTracksDataLoader>
{
    SPTDataLoader *_dataLoader;
    id <SPTCollectionPlatformDataLoader> _collectionPlatformDataloader;
}

@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionPlatformDataloader; // @synthesize collectionPlatformDataloader=_collectionPlatformDataloader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchRecommendTracksForPlaylistName:(id)arg1 currentTracks:(id)arg2 skipTracks:(id)arg3 minResults:(unsigned long long)arg4 decorationPolicy:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithDataLoader:(id)arg1 collectionPlatformDataloader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

