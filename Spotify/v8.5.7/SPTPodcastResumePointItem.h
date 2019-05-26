//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastResumePoint-Protocol.h"

@class NSString, NSURL;

@interface SPTPodcastResumePointItem : NSObject <SPTPodcastResumePoint>
{
    _Bool _playable;
    NSString *_episodeTitle;
    NSString *_showTitle;
    NSString *_publisher;
    NSURL *_showURL;
    NSURL *_imageURL;
    unsigned long long _mediaType;
    NSURL *_resumeEpisodeURL;
    double _resumePoint;
    NSURL *_episodeURL;
    double _duration;
    double _listenedDuration;
}

+ (id)resumePointWithDictionary:(id)arg1;
@property(nonatomic) double listenedDuration; // @synthesize listenedDuration=_listenedDuration;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *episodeURL; // @synthesize episodeURL=_episodeURL;
@property(nonatomic) double resumePoint; // @synthesize resumePoint=_resumePoint;
@property(retain, nonatomic) NSURL *resumeEpisodeURL; // @synthesize resumeEpisodeURL=_resumeEpisodeURL;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic, getter=isPlayable) _Bool playable; // @synthesize playable=_playable;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *showURL; // @synthesize showURL=_showURL;
@property(retain, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(retain, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
@property(retain, nonatomic) NSString *episodeTitle; // @synthesize episodeTitle=_episodeTitle;
- (void).cxx_destruct;
- (id)localizedTime;
@property(readonly, nonatomic, getter=isPlayed) _Bool played;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
