//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTInteractionEvent;

@protocol SPTNowPlayingViewPremiumDefault_PlaybackControls_PlayButtonInteractionEventFactory <NSObject>
- (id <SPTInteractionEvent>)hitResumeWithTargetUri:(NSURL *)arg1;
- (id <SPTInteractionEvent>)hitPauseWithTargetUri:(NSURL *)arg1;
@end
