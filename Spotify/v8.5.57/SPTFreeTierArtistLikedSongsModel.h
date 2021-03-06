//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken;

@interface SPTFreeTierArtistLikedSongsModel : NSObject
{
    unsigned long long _likedTrackCount;
    NSURL *_collectionArtistUri;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformDataLoaderRequestToken> _trackToken;
    NSURL *_artistUri;
}

@property(readonly, nonatomic) NSURL *artistUri; // @synthesize artistUri=_artistUri;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> trackToken; // @synthesize trackToken=_trackToken;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) NSURL *collectionArtistUri; // @synthesize collectionArtistUri=_collectionArtistUri;
@property(nonatomic) unsigned long long likedTrackCount; // @synthesize likedTrackCount=_likedTrackCount;
- (void).cxx_destruct;
- (void)fetchLikedTracks:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCollectionPlatform:(id)arg1 artistUri:(id)arg2 username:(id)arg3;

@end

