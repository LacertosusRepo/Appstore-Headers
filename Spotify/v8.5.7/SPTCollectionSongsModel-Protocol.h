//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTCollectionFiltering-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"

@class NSArray, NSIndexPath, NSURL;
@protocol SPTCollectionEntityListTrackItem, SPTCollectionSongsModelDelegate;

@protocol SPTCollectionSongsModel <NSObject, SPTCollectionSorting, SPTCollectionFiltering>
@property(nonatomic) _Bool showOnlyLocalFiles;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic, getter=isSessionOffline) _Bool sessionOffline;
@property(nonatomic, getter=isPaused) _Bool pause;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(nonatomic, getter=isOffline) _Bool offline;
@property(readonly, nonatomic) NSURL *currentlyPlayingURL;
@property(nonatomic) __weak id <SPTCollectionSongsModelDelegate> delegate;
- (unsigned long long)offlineAvailability;
- (unsigned long long)flatIndexForIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id <SPTCollectionEntityListTrackItem>)itemAtIndexPath:(NSIndexPath *)arg1;
- (void)playShuffled:(_Bool)arg1;
- (void)load;
- (unsigned long long)offlineSyncStateForTrackAtIndexPath:(NSIndexPath *)arg1;
@end
