//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchOfflineAlbumDataLoader-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformDataLoader;

@interface SPTSearchOfflineAlbumDataLoaderImplementation : NSObject <SPTSearchOfflineAlbumDataLoader>
{
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
}

@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
- (void).cxx_destruct;
- (CDUnknownBlockType)artistToArtistNameBlock;
- (CDUnknownBlockType)albumToOfflineAlbumBlock;
- (void)fetchAlbumsForQuery:(id)arg1 limit:(unsigned long long)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)initWithCollectionPlatformDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
