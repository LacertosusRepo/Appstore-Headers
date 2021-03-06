//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, UIColor;

@protocol SPTFreeTierPlaylistTrackViewModel <NSObject>
@property(readonly, nonatomic) long long offlineSyncStatus;
@property(readonly, nonatomic) _Bool showCollectionQuickActions;
@property(readonly, nonatomic, getter=isBanned) _Bool banned;
@property(readonly, nonatomic, getter=isLiked) _Bool liked;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic) NSArray *artists;
@property(readonly, nonatomic) UIColor *contextMenuIconColor;
@property(readonly, nonatomic) long long contextMenuIcon;
@property(readonly, nonatomic) NSString *previewID;
@property(readonly, nonatomic) NSURL *albumURL;
@property(readonly, nonatomic) NSString *albumName;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@end

