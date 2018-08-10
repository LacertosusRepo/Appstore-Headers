//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformConfiguration.h"

@class NSString;

@interface SPTCollectionPlatformHeartsSomewhereConfiguration : NSObject <SPTCollectionPlatformConfiguration>
{
    id <SPTCollectionPlatformConfiguration> _legacyCollectionConfiguration;
    id <SPTCollectionPlatformConfiguration> _freeTierCollectionConfiguration;
    id <SPTFreeTierTestManager> _freeTierTestManager;
}

@property(retain, nonatomic) id <SPTFreeTierTestManager> freeTierTestManager; // @synthesize freeTierTestManager=_freeTierTestManager;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> freeTierCollectionConfiguration; // @synthesize freeTierCollectionConfiguration=_freeTierCollectionConfiguration;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> legacyCollectionConfiguration; // @synthesize legacyCollectionConfiguration=_legacyCollectionConfiguration;
- (void).cxx_destruct;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(id)arg2;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2;
- (id)provideShelfViewForItemWithCollectionState:(_Bool)arg1;
- (id)provideCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)provideCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)entityNuxTitleForType:(unsigned long long)arg1 entityName:(id)arg2;
- (id)actionNameForTrackWithCollectionState:(_Bool)arg1;
@property(readonly, nonatomic) long long contentInCollectionIcon;
@property(readonly, nonatomic, getter=isRemoveActionPresentInPlaylist) _Bool removeActionPresentInPlaylist;
- (id)actionNameForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic) long long collectionIcon;
- (id)nuxTitleForType:(unsigned long long)arg1;
- (id)localfilesImportDialogForPlaylistCount:(unsigned long long)arg1 songsCount:(unsigned long long)arg2;
- (id)confirmationTitleForBannedFromCollection:(_Bool)arg1 entityURL:(id)arg2;
- (id)confirmationTitleForAddedToCollection:(_Bool)arg1 entityURL:(id)arg2;
- (id)collectionDailyMixPositiveIntentAddedToCollection:(_Bool)arg1;
- (id)actionNameForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForArtistWithBanState:(_Bool)arg1;
- (long long)actionIconForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (long long)actionIconForArtistWithBanState:(_Bool)arg1;
- (id)actionNameForItemWithCollectionBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionBanState:(_Bool)arg1;
@property(readonly, nonatomic) NSString *collectionPlayingFromTitle;
- (id)actionIconColorForItemWithCollectionBanState:(_Bool)arg1;
- (id)actionAccessibilityHintWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (id)actionAccessibilityHintWithBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (id)actionIconColorForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (long long)iconForItemInCollection:(_Bool)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *collectionRecentlyPlayedSongsTitle;
@property(readonly, nonatomic) NSString *collectionTitle;
- (id)entityCollectionPlatform;
- (id)trackCollectionPlatform;
- (id)initWithLegacyCollectionConfiguration:(id)arg1 freeTierCollectionConfiguration:(id)arg2 freeTierTestManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

