//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPContextMenuActionsFactory.h"

@class NSMutableDictionary, NSString;

@interface SPContextMenuActionsFactoryImplementation : NSObject <SPContextMenuActionsFactory>
{
    NSMutableDictionary *_urlPredicates;
    NSMutableDictionary *_shortURLPredicates;
    NSMutableDictionary *_shareURLPredicates;
    NSMutableDictionary *_tracksPredicates;
    NSMutableDictionary *_containerPredicates;
    NSMutableDictionary *_carThingPredicates;
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) NSMutableDictionary *carThingPredicates; // @synthesize carThingPredicates=_carThingPredicates;
@property(readonly, nonatomic) NSMutableDictionary *containerPredicates; // @synthesize containerPredicates=_containerPredicates;
@property(readonly, nonatomic) NSMutableDictionary *tracksPredicates; // @synthesize tracksPredicates=_tracksPredicates;
@property(readonly, nonatomic) NSMutableDictionary *shareURLPredicates; // @synthesize shareURLPredicates=_shareURLPredicates;
@property(readonly, nonatomic) NSMutableDictionary *shortURLPredicates; // @synthesize shortURLPredicates=_shortURLPredicates;
@property(readonly, nonatomic) NSMutableDictionary *urlPredicates; // @synthesize urlPredicates=_urlPredicates;
- (void).cxx_destruct;
- (void)registerActionForPredicate:(id)arg1 actionIdentifier:(id)arg2 in:(id)arg3;
- (id)actionForURI:(id)arg1 logContext:(id)arg2 title:(id)arg3 imageURL:(id)arg4 actionIdentifier:(id)arg5;
- (id)actionForURIs:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 containerURL:(id)arg4 playlistName:(id)arg5 actionIdentifier:(id)arg6 contextSourceURL:(id)arg7;
- (id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 tracks:(id)arg4 actionIdentifier:(id)arg5;
- (id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 itemName:(id)arg4 creatorName:(id)arg5 sourceName:(id)arg6 imageURL:(id)arg7 clipboardLinkTitle:(id)arg8 actionIdentifier:(id)arg9;
- (id)actionForURI:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 actionIdentifier:(id)arg4;
- (id)actionForURIs:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3 actionIdentifier:(id)arg4 title:(id)arg5 albumTitle:(id)arg6 artistTitle:(id)arg7 imageURL:(id)arg8 clipboardLinkTitle:(id)arg9 tracks:(id)arg10 containerEntityURL:(id)arg11;
- (void)registerActionForCarThingPredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (void)registerActionForURIContainerPredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (void)registerActionForTracksPredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (void)registerActionForSharePredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (void)registerActionForShortPredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (void)registerActionForPredicate:(CDUnknownBlockType)arg1 actionIdentifier:(id)arg2;
- (id)followArtist:(id)arg1 logContext:(id)arg2;
- (id)offlineSync:(id)arg1 isOffline:(_Bool)arg2 collectionPlatform:(id)arg3 collectionOptions:(id)arg4 logContext:(id)arg5;
- (id)immediateTask:(id)arg1;
- (id)viewAlbumWithAlbumURL:(id)arg1 logContext:(id)arg2;
- (id)setArtistPickToURI:(id)arg1 logContext:(id)arg2;
- (id)viewSpeedControlOptionsWithPodcastSpeedControlManager:(id)arg1 presentationService:(id)arg2 episodeURI:(id)arg3 logContext:(id)arg4;
- (id)viewArtists:(id)arg1 logContext:(id)arg2 presentationService:(id)arg3 contributingArtistsService:(id)arg4;
- (id)viewArtistWithURL:(id)arg1 logContext:(id)arg2;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

