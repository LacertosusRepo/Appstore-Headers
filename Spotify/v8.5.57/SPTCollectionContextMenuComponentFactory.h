//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession;
@protocol SPContextMenuFeature, SPTContextMenuActionsProvider;

@interface SPTCollectionContextMenuComponentFactory : NSObject
{
    id <SPTContextMenuActionsProvider> _actionsProvider;
    SPSession *_session;
    id <SPContextMenuFeature> _contextMenuFeature;
}

@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTContextMenuActionsProvider> actionsProvider; // @synthesize actionsProvider=_actionsProvider;
- (void).cxx_destruct;
- (id)contextMenuComponentForArtistURL:(id)arg1 artistName:(id)arg2 artistPortraitImageURL:(id)arg3 artistCollectionTracks:(unsigned long long)arg4 artistCollectionUrl:(id)arg5 isOffline:(_Bool)arg6 collectionPlatform:(id)arg7 collectionOptions:(id)arg8 logContext:(id)arg9;
- (id)contextMenuComponentForTrackURL:(id)arg1 trackName:(id)arg2 trackImage:(id)arg3 albumName:(id)arg4 albumURL:(id)arg5 artistName:(id)arg6 artistURL:(id)arg7 fromEntity:(id)arg8 logContext:(id)arg9 sourceURL:(id)arg10;
- (id)initWithActionsProvider:(id)arg1 session:(id)arg2 contextMenu:(id)arg3;

@end

