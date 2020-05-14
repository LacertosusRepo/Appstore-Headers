//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIInteractionEventFactoryImplementation : NSObject <SPTUBIInteractionEventFactory>
{
    NSString *_applicationId;
    NSString *_specificationCommitHash;
    NSArray *_components;
    NSString *_interactionType;
    NSString *_specificationVersion;
    NSArray *_errors;
}

@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(readonly, copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (void).cxx_destruct;
- (id)deletePlaylistWithPlaylistToBeDeleted:(id)arg1;
- (id)addItemToQueueWithItemToAddToQueue:(id)arg1;
- (id)shuffleDisable;
- (id)unfollowWithItemToBeUnfollowed:(id)arg1;
- (id)addToPlaylistWithPlaylist:(id)arg1 itemToBeAdded:(id)arg2;
- (id)uiElementToggle;
- (id)uiReveal;
- (id)makePlaylistCollaborativeWithPlaylistToBeMadeCollaborative:(id)arg1;
- (id)removeItemFromPlaylistWithItemToBeRemovedFromPlaylist:(id)arg1;
- (id)makePlaylistPublicWithPlaylistToBeMadePublic:(id)arg1;
- (id)filter;
- (id)openOsSettings;
- (id)pauseWithItemToBePaused:(id)arg1;
- (id)repeatOneEnable;
- (id)removeStationWithStationToBeRemoved:(id)arg1;
- (id)followWithItemToBeFollowed:(id)arg1;
- (id)sort;
- (id)repeatDisable;
- (id)uiNavigateWithDestination:(id)arg1;
- (id)quickScroll;
- (id)likeWithItemToBeLiked:(id)arg1;
- (id)removeDislikeWithItemNoLongerDisliked:(id)arg1;
- (id)renamePlaylistWithPlaylistToBeRenamed:(id)arg1;
- (id)makePlaylistSecretWithPlaylistToBeMadeSecret:(id)arg1;
- (id)resumeWithItemToBeResumed:(id)arg1;
- (id)shuffleEnable;
- (id)skipToPreviousWithItemToBeSkipped:(id)arg1;
- (id)retry;
- (id)noAction;
- (id)uiHide;
- (id)clearRecentSearches;
- (id)skipToNextWithItemToBeSkipped:(id)arg1;
- (id)addStationWithStationToBeAdded:(id)arg1;
- (id)seekByTimeWithMsSeekedOffset:(long long)arg1;
- (id)makePlaylistNonCollaborativeWithPlaylistToBeMadeNonCollaborative:(id)arg1;
- (id)shufflePlayWithContextToBePlayed:(id)arg1;
- (id)repeatEnable;
- (id)seekToTimeWithMsToSeekTo:(long long)arg1;
- (id)downloadWithItemToDownload:(id)arg1;
- (id)textClear;
- (id)logout;
- (id)createPlaylist;
- (id)removeLikeWithItemNoLongerLiked:(id)arg1;
- (id)removeDownloadWithItemToRemoveFromDownloads:(id)arg1;
- (id)refreshContent;
- (id)setPlaylistDescriptionWithPlaylistToChangeDescriptionOn:(id)arg1;
- (id)dislikeWithItemToBeDisliked:(id)arg1;
- (id)removeRecentSearchesItem;
- (id)playWithItemToBePlayed:(id)arg1;
- (id)initWithApplicationId:(id)arg1 specificationCommitHash:(id)arg2 specificationVersion:(id)arg3 components:(id)arg4 interactionType:(id)arg5 errors:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

