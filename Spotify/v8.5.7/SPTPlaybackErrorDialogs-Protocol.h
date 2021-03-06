//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol SPTPlaybackErrorDialogs <NSObject>
- (void)showUnableToPlaySongDialogForError:(NSError *)arg1;
- (void)showCappingReachedDialogForError:(NSError *)arg1;
- (void)showOnlyAvailableInPremiumDialogForError:(NSError *)arg1;
- (void)showUnavailableDialogForError:(NSError *)arg1;
- (void)showGoOnlineForRadioDialogForError:(NSError *)arg1;
- (void)showNotInRegionGoOnlineForRadioDialogForError:(NSError *)arg1;
- (void)showOnlyOnlineDialogForError:(NSError *)arg1;
- (void)showNoForceOfflineDialogForError:(NSError *)arg1;
- (void)showLocalTrackUnsyncedDialogForError:(NSError *)arg1;
@end

