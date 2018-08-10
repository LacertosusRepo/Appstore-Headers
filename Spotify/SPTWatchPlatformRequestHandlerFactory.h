//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTWatchConnectivityManager;

@interface SPTWatchPlatformRequestHandlerFactory : NSObject
{
    SPTWatchConnectivityManager *_connectivityManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) SPTWatchConnectivityManager *connectivityManager; // @synthesize connectivityManager=_connectivityManager;
- (void).cxx_destruct;
- (id)createRequestHandlers;
- (id)initWithConnectivityManager:(id)arg1 collectionPlatform:(id)arg2 player:(id)arg3;

@end

