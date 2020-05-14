//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationMostPlayedDataLoader-Protocol.h"
#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;

@interface SPTAssistedCurationMostPlayedDataLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTAssistedCurationMostPlayedDataLoader>
{
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)tracksFromDictionary:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchMostPlayedTracksGroupedBy:(id)arg1 excludeURI:(id)arg2 numberOfTracks:(unsigned long long)arg3 numberOfPlays:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

