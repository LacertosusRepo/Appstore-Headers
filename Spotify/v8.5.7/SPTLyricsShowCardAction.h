//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPAction.h"

@class SPTPlayerTrack;
@protocol SPTLyricsOnboardingManager;

@interface SPTLyricsShowCardAction : SPAction
{
    SPTPlayerTrack *_track;
    id <SPTLyricsOnboardingManager> _onboardingManager;
}

@property(readonly, nonatomic) id <SPTLyricsOnboardingManager> onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(readonly, nonatomic) SPTPlayerTrack *track; // @synthesize track=_track;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)logEventName;
- (long long)icon;
- (id)title;
- (id)initWithTrack:(id)arg1 logContext:(id)arg2 onboardingManager:(id)arg3;

@end

