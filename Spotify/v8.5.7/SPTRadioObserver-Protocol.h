//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSURL;
@protocol SPTRadioManager;

@protocol SPTRadioObserver <NSObject>

@optional
- (void)radioManager:(id <SPTRadioManager>)arg1 error:(NSError *)arg2;
- (void)radioManager:(id <SPTRadioManager>)arg1 userSavedStationsChanged:(NSArray *)arg2;
- (void)radioManager:(id <SPTRadioManager>)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)radioManager:(id <SPTRadioManager>)arg1 thumbsFeedbackChangedForTrackURL:(NSURL *)arg2 trackFeedback:(long long)arg3;
@end

