//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTCollectionSorting-Protocol.h"

@class NSArray, NSDate, NSString, NSURL;
@protocol SPContextMenuActionsFactory, SPTFormatListItemModel, SPTPSXViewModelBanningDelegate, SPTPSXViewModelDelegate, SPTPlayer;

@protocol SPTPSXViewModel <NSObject, SPTCollectionSorting>
@property(readonly, nonatomic, getter=isFollowShelfAvailable) _Bool followShelfAvailable;
@property(readonly, nonatomic, getter=isOfflineToggleAvailable) _Bool offlineToggleAvailable;
@property(readonly, nonatomic) id <SPTPlayer> player;
@property(readonly, nonatomic) NSArray *tracks;
@property(readonly, nonatomic) NSString *madeForString;
@property(readonly, nonatomic) _Bool isFollowed;
@property(readonly, nonatomic) unsigned long long followerCount;
@property(readonly, nonatomic) NSDate *lastModifiedTime;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, copy, nonatomic) NSString *ownerName;
@property(readonly, nonatomic) NSURL *ownerImageURL;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
@property(readonly, nonatomic) _Bool availableOffline;
@property(readonly, nonatomic) NSString *freeformDescription;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSURL *entityImageURL;
@property(readonly, nonatomic) NSURL *entityURL;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTPSXViewModelBanningDelegate> banningDelegate;
@property(nonatomic) __weak id <SPTPSXViewModelDelegate> delegate;
- (void)playTrack:(id <SPTFormatListItemModel>)arg1;
- (_Bool)isTrackPlaying:(NSURL *)arg1;
- (void)unbanTrack:(id <SPTFormatListItemModel>)arg1;
- (_Bool)isTrackDisabled:(id <SPTFormatListItemModel>)arg1;
- (NSArray *)contextMenuActionsForFactory:(id <SPContextMenuActionsFactory>)arg1;
- (void)playTracksShuffled;
- (void)setTextFilter:(NSString *)arg1 onCompletion:(void (^)(NSError *))arg2;
- (void)makeAvailableOffline:(_Bool)arg1;
- (void)requestChangeFollowStatus:(_Bool)arg1;
- (void)loadPlaylist;
@end

