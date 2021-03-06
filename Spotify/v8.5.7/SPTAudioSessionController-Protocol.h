//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAudioSessionActivator;
@protocol SPTAudioSessionControllerDelegate, SPTAudioSessionControllerObserver;

@protocol SPTAudioSessionController <NSObject>
@property(readonly, getter=isActive) _Bool active;
@property(nonatomic) __weak id <SPTAudioSessionControllerDelegate> delegate;
- (_Bool)refreshAudioSessionConfiguration:(id *)arg1;
- (void)noteExplictPauseCommandIssued;
- (void)removeObserver:(id <SPTAudioSessionControllerObserver>)arg1;
- (void)addObserver:(id <SPTAudioSessionControllerObserver>)arg1;
- (SPTAudioSessionActivator *)activateAudioSession;
@end

