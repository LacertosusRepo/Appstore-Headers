//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL;

@protocol SPTEpisode <NSObject>
@property(readonly, nonatomic, getter=isFollowingPodcast) _Bool followingPodcast;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic) double lastPlayedAt;
@property(readonly, nonatomic, getter=isPlayed) _Bool played;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic, getter=isPlayable) _Bool playable;
@property(readonly, nonatomic, getter=isVideoMediaType) _Bool videoMediaType;
@property(readonly, nonatomic, getter=isAudioMediaType) _Bool audioMediaType;
@property(readonly, copy, nonatomic) NSString *manifestId;
@property(readonly, copy, nonatomic) NSURL *largePodcastImageURL;
@property(readonly, copy, nonatomic) NSURL *podcastImageURL;
@property(readonly, copy, nonatomic) NSURL *largeImageURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) long long offlineSyncStatus;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) double listenedDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, copy, nonatomic) NSDate *publicationDate;
@property(readonly, copy, nonatomic) NSString *publisherName;
@property(readonly, copy, nonatomic) NSString *podcastTitle;
@property(readonly, copy, nonatomic) NSURL *podcastURL;
@property(readonly, copy, nonatomic) NSString *longDescription;
@property(readonly, copy, nonatomic) NSString *title;
- (NSString *)localizedDate;
- (NSString *)localizedDuration;
- (NSString *)localizedTime;
@end

