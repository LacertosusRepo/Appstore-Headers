//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionEntityListItem-Protocol.h"

@class NSDate, NSString, NSURL;
@protocol SPTCollectionPlatformTestManager, SPTLinkDispatcher;

@interface SPTCollectionArtistEntityListItem : NSObject <SPTCollectionEntityListItem>
{
    _Bool _isFollowedArtist;
    unsigned long long _offlineSyncState;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_entityURL;
    long long _icon;
    unsigned long long _contentType;
    NSURL *_trackURL;
    NSURL *_offlineURL;
    NSString *_username;
    unsigned long long _songCount;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) _Bool isFollowedArtist; // @synthesize isFollowedArtist=_isFollowedArtist;
@property(readonly, nonatomic) unsigned long long songCount; // @synthesize songCount=_songCount;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURL *offlineURL; // @synthesize offlineURL=_offlineURL;
@property(copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) unsigned long long offlineSyncState; // @synthesize offlineSyncState=_offlineSyncState;
- (void).cxx_destruct;
- (_Bool)isFollowed;
- (unsigned long long)trackCount;
@property(readonly, copy, nonatomic) NSString *loggingContext;
- (void)action;
- (id)initWithName:(id)arg1 withURL:(id)arg2 withImageURL:(id)arg3 withUsername:(id)arg4 withSongCount:(unsigned long long)arg5 withOfflineSyncState:(unsigned long long)arg6 isFollowedArtist:(_Bool)arg7 collectionTestManager:(id)arg8 linkDispatcher:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isNew;
@property(readonly, nonatomic) NSDate *publishDate;
@property(readonly) Class superclass;

@end

