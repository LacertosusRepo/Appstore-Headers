//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary;
@protocol SPTEntityService;

@interface SPTCanvasArtistAvatarResolver : NSObject
{
    id <SPTEntityService> _entityService;
    NSMutableDictionary *_fetchArtistImageCompletionBlocks;
    NSCache *_avatarURICache;
}

@property(readonly, nonatomic) NSCache *avatarURICache; // @synthesize avatarURICache=_avatarURICache;
@property(readonly, nonatomic) NSMutableDictionary *fetchArtistImageCompletionBlocks; // @synthesize fetchArtistImageCompletionBlocks=_fetchArtistImageCompletionBlocks;
@property(readonly, nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)fetchAvatarURIForArtistURI:(id)arg1 didCompleteWithImageURI:(id)arg2 orError:(id)arg3;
- (void)handleFetchAvatarURIResponse:(id)arg1 forArtistURI:(id)arg2;
- (void)scheduleFetchOfAvatarURIForArtist:(id)arg1;
- (void)addFetchArtistAvatarCompletionBlock:(CDUnknownBlockType)arg1 forArtistURI:(id)arg2;
- (_Bool)shouldScheduleFetchAvatarURIForArtistURI:(id)arg1;
- (void)fetchAvatarURIForArtistURI:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithEntityService:(id)arg1 avatarURICache:(id)arg2;

@end
