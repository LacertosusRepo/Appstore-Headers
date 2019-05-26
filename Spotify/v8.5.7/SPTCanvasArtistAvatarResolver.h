//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
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

@property(retain, nonatomic) NSCache *avatarURICache; // @synthesize avatarURICache=_avatarURICache;
@property(retain, nonatomic) NSMutableDictionary *fetchArtistImageCompletionBlocks; // @synthesize fetchArtistImageCompletionBlocks=_fetchArtistImageCompletionBlocks;
@property(retain, nonatomic) id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
- (void).cxx_destruct;
- (void)fetchAvatarURIForArtistURI:(id)arg1 didCompleteWithImageURI:(id)arg2 orError:(id)arg3;
- (void)handleFetchAvatarURIResponse:(id)arg1 forArtistURI:(id)arg2;
- (void)scheduleFetchOfAvatarURIForArtist:(id)arg1;
- (void)addFetchArtistAvatarCompletionBlock:(CDUnknownBlockType)arg1 forArtistURI:(id)arg2;
- (_Bool)shouldScheduleFetchAvatarURIForArtistURI:(id)arg1;
- (void)fetchAvatarURIForArtistURI:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithEntityService:(id)arg1 avatarURICache:(id)arg2;

@end

