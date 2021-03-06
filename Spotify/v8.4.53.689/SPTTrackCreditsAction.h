//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class SPTPlayerTrack;

@interface SPTTrackCreditsAction : SPAction
{
    SPTPlayerTrack *_track;
    id <SPTTrackCreditsService> _trackCreditsService;
}

@property(nonatomic) __weak id <SPTTrackCreditsService> trackCreditsService; // @synthesize trackCreditsService=_trackCreditsService;
@property(retain, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (long long)icon;
- (id)title;
- (id)initWithTrack:(id)arg1 logContext:(id)arg2 trackCreditsService:(id)arg3;

@end

