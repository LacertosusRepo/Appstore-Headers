//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL;

@protocol SPTFreeTierPlaylistDefaultHeaderViewModel <NSObject>
@property(readonly, nonatomic, getter=isFormatList) _Bool formatList;
@property(readonly, copy, nonatomic) NSString *creatorTitle;
@property(readonly, nonatomic) NSDate *lastModifiedTime;
@property(readonly, copy, nonatomic) NSString *playlistOwnerName;
@property(readonly, nonatomic) NSURL *ownerImageURL;
@property(readonly, nonatomic) double totalDuration;
@property(readonly, nonatomic) _Bool shouldShowPlaylistOwnerPage;
@property(readonly, nonatomic) unsigned long long searchBarType;
@property(readonly, nonatomic) _Bool showSearchBar;
@property(readonly, nonatomic, getter=isShuffleBadgeEducationAvailable) _Bool shuffleBadgeEducationAvailable;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(readonly, copy, nonatomic) NSString *playlistDescription;
@property(readonly, copy, nonatomic) NSString *playlistName;
- (void)navigateToPlaylistOwnerPage;
- (void)showShuffleBadgeEducationDialog;
@end
