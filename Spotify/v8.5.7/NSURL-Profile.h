//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (Profile)
+ (id)spt_profileFollowingURLForUsername:(id)arg1;
+ (id)spt_profileFollowersURLForUsername:(id)arg1;
+ (id)spt_profileAllArtistsURLForUsername:(id)arg1;
+ (id)spt_profileAllPlaylistsURLForUsername:(id)arg1;
+ (id)spt_profileURIForUsername:(id)arg1;
@property(readonly, nonatomic, getter=spt_isProfileSocialRelationsURL) _Bool isProfileSocialRelationsURL;
@property(readonly, nonatomic, getter=spt_isProfileViewAllURL) _Bool isProfileViewAllURL;
@property(readonly, nonatomic, getter=spt_isProfilePageURL) _Bool isProfilePageURL;
@property(readonly, nonatomic, getter=spt_isProfileOverviewURL) _Bool spt_isProfilePageURL;
@end

