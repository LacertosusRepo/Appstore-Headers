//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol SPTPlaybackErrorDialogsDelegate <NSObject>
- (void)playbackErrorDialogsDidReceiveCappingReachedDialogForError:(id <SPTPlaybackErrorDialogs>)arg1;
- (void)playbackErrorDialogsDidReceiveOnlyAvailableInPremiumDialog:(id <SPTPlaybackErrorDialogs>)arg1;
- (void)playbackErrorDialogs:(id <SPTPlaybackErrorDialogs>)arg1 didReceiveUnavailableTrack:(NSURL *)arg2;
@end

