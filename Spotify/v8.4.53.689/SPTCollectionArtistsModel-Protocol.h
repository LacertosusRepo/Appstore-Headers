//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "SPTCollectionFiltering.h"
#import "SPTCollectionSectionedEntityList.h"
#import "SPTCollectionSorting.h"

@class NSArray, NSIndexPath, NSString;

@protocol SPTCollectionArtistsModel <NSObject, SPTCollectionSorting, SPTCollectionFiltering, SPTCollectionSectionedEntityList>
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
@property(readonly, nonatomic) NSString *username;
@property(nonatomic) __weak id <SPTCollectionArtistsModelDelegate> delegate;
- (unsigned long long)flatIndexForIndexPath:(NSIndexPath *)arg1;
- (void)requestMetadataForRows:(NSArray *)arg1;
- (unsigned long long)offlineSyncStateForArtistAtIndexPath:(NSIndexPath *)arg1;
- (void)load;
@end

