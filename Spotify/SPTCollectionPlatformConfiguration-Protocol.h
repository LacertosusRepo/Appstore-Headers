//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GLUEButton, NSString, NSURL, SPTSwipeableTableViewCellShelf, UIBarButtonItem, UIColor;

@protocol SPTCollectionPlatformConfiguration <NSObject>
@property(readonly, nonatomic, getter=isRemoveActionPresentInPlaylist) _Bool removeActionPresentInPlaylist;
@property(readonly, nonatomic) long long collectionIcon;
@property(readonly, nonatomic) NSString *collectionRecentlyPlayedSongsTitle;
@property(readonly, nonatomic) NSString *collectionPlayingFromTitle;
@property(readonly, nonatomic) long long contentInCollectionIcon;
@property(readonly, nonatomic) NSString *collectionTitle;
- (NSString *)localfilesImportDialogForPlaylistCount:(unsigned long long)arg1 songsCount:(unsigned long long)arg2;
- (NSString *)entityNuxTitleForType:(unsigned long long)arg1 entityName:(NSString *)arg2;
- (NSString *)nuxTitleForType:(unsigned long long)arg1;
- (NSString *)collectionDailyMixPositiveIntentAddedToCollection:(_Bool)arg1;
- (UIBarButtonItem *)provideCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (GLUEButton *)provideCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)confirmationTitleForBannedFromCollection:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)confirmationTitleForAddedToCollection:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (SPTSwipeableTableViewCellShelf *)provideShelfViewForItemWithCollectionState:(_Bool)arg1;
- (NSString *)actionNameForArtistWithBanState:(_Bool)arg1;
- (long long)actionIconForArtistWithBanState:(_Bool)arg1;
- (NSString *)actionAccessibilityHintWithBanState:(_Bool)arg1;
- (NSString *)actionNameForItemWithCollectionBanState:(_Bool)arg1;
- (UIColor *)actionIconColorForItemWithCollectionBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionBanState:(_Bool)arg1;
- (NSString *)actionNameForItemWithFollowState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (long long)actionIconForItemWithFollowState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionAccessibilityHintWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (NSString *)actionNameForTrackWithCollectionState:(_Bool)arg1;
- (NSString *)actionNameForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (UIColor *)actionIconColorForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (long long)actionIconForItemWithCollectionState:(_Bool)arg1 source:(unsigned long long)arg2;
- (long long)iconForItemInCollection:(_Bool)arg1 source:(unsigned long long)arg2;
@end
