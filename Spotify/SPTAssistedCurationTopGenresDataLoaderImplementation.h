//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAssistedCurationTopGenresDataLoader.h"
#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader;

@interface SPTAssistedCurationTopGenresDataLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTAssistedCurationTopGenresDataLoader>
{
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)topGenresFromDictionary:(id)arg1;
- (void)fetchTopGenresForPlaylistName:(id)arg1 numberOfGenres:(unsigned long long)arg2 numberOfTracks:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

