//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPSession;

@interface SPTCollectionContextMenuComponentFactory : NSObject
{
    id <SPTContextMenuActionsProvider> _actionsProvider;
    SPSession *_session;
    id <SPContextMenuFeature> _contextMenu;
}

@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenu; // @synthesize contextMenu=_contextMenu;
@property(nonatomic) __weak SPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) id <SPTContextMenuActionsProvider> actionsProvider; // @synthesize actionsProvider=_actionsProvider;
- (void).cxx_destruct;
- (id)contextMenuComponentForArtistURL:(id)arg1 artistName:(id)arg2 artistPortraitImageURL:(id)arg3 artistCollectionTracks:(unsigned long long)arg4 artistCollectionUrl:(id)arg5 isOffline:(_Bool)arg6 collectionPlatform:(id)arg7 collectionOptions:(id)arg8 logContext:(id)arg9;
- (id)contextMenuComponentForAlbumURL:(id)arg1 albumName:(id)arg2 coverImageLink:(id)arg3 albumTracks:(id)arg4 artistURL:(id)arg5 artistName:(id)arg6 isOffline:(_Bool)arg7 collectionPlatform:(id)arg8 collectionOptions:(id)arg9 usesCompleteAction:(_Bool)arg10 logContext:(id)arg11 sourceURL:(id)arg12;
- (id)contextMenuComponentForTrackURL:(id)arg1 trackName:(id)arg2 trackImage:(id)arg3 albumName:(id)arg4 albumURL:(id)arg5 artistName:(id)arg6 artistURL:(id)arg7 fromEntity:(id)arg8 logContext:(id)arg9 sourceURL:(id)arg10;
- (id)initWithActionsProvider:(id)arg1 session:(id)arg2 contextMenu:(id)arg3;

@end

