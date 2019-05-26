//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationRecommendedTracksDataLoader-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;

@interface SPTAssistedCurationRecommendedDataLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTAssistedCurationRecommendedTracksDataLoader>
{
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)tracksFromDictionary:(id)arg1;
- (void)fetchRecommendTracksForPlaylistName:(id)arg1 currentTracks:(id)arg2 skipTracks:(id)arg3 minResults:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

