//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformConfiguration.h"

@class NSString, UIImage;

@interface SPTCollectionPlatformFreeTierConfiguration : NSObject <SPTCollectionPlatformConfiguration>
{
    _Bool _favoriteSongsEnabled;
    _Bool _heartsEverywhereEnabled;
    UIImage *_selectedOverlayImage;
    UIImage *_overlayImage;
    id <SPTFreeTierEducationSnackBarPresenter> _educationPresenter;
}

@property(readonly, nonatomic) _Bool heartsEverywhereEnabled; // @synthesize heartsEverywhereEnabled=_heartsEverywhereEnabled;
@property(readonly, nonatomic) _Bool favoriteSongsEnabled; // @synthesize favoriteSongsEnabled=_favoriteSongsEnabled;
@property(retain, nonatomic) id <SPTFreeTierEducationSnackBarPresenter> educationPresenter; // @synthesize educationPresenter=_educationPresenter;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIImage *selectedOverlayImage; // @synthesize selectedOverlayImage=_selectedOverlayImage;
- (void).cxx_destruct;
- (id)actionAccessibilityHintWithBanState:(_Bool)arg1;
- (id)actionAccessibilityHintWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (id)localfilesImportDialogForPlaylistCount:(unsigned long long)arg1 songsCount:(unsigned long long)arg2;
- (id)entityNuxTitleForType:(unsigned long long)arg1 entityName:(id)arg2;
- (id)nuxTitleForType:(unsigned long long)arg1;
- (id)collectionDailyMixPositiveIntentAddedToCollection:(_Bool)arg1;
- (id)provideCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)provideCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(id)arg2;
- (id)confirmationTitleForBannedFromCollection:(_Bool)arg1 entityURL:(id)arg2;
- (id)confirmationTitleForAddedToCollection:(_Bool)arg1 entityURL:(id)arg2;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2;
- (id)provideShelfViewForItemWithCollectionState:(_Bool)arg1;
- (id)actionNameForArtistWithBanState:(_Bool)arg1;
- (long long)actionIconForArtistWithBanState:(_Bool)arg1;
- (id)actionNameForItemWithCollectionBanState:(_Bool)arg1;
- (id)actionIconColorForItemWithCollectionBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionBanState:(_Bool)arg1;
- (id)actionNameForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (long long)actionIconForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForTrackWithCollectionState:(_Bool)arg1;
- (id)actionNameForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (long long)actionIconForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (id)actionIconColorForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (long long)iconForItemInCollection:(_Bool)arg1 source:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isRemoveActionPresentInPlaylist) _Bool removeActionPresentInPlaylist;
@property(readonly, nonatomic) long long collectionIcon;
@property(readonly, nonatomic) NSString *collectionRecentlyPlayedSongsTitle;
@property(readonly, nonatomic) NSString *collectionPlayingFromTitle;
@property(readonly, nonatomic) long long contentInCollectionIcon;
@property(readonly, nonatomic) NSString *collectionTitle;
- (id)initWithEducationPresenter:(id)arg1 favoriteSongsEnabled:(_Bool)arg2 heartsEverywhereEnabled:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
