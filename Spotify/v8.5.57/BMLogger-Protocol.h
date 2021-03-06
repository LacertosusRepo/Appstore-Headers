//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol BMEndVideoMessage, BMEndVideoMessageIdentity, BMPlaybackErrorMessage, BMPlaybackSessionMessage;

@protocol BMLogger <NSObject>
- (void)sendPlaybackErrorMessage:(id <BMPlaybackErrorMessage>)arg1;
- (void)sendPlaybackSessionMessage:(id <BMPlaybackSessionMessage>)arg1;
- (_Bool)sendPendingEndVideoMessage:(id <BMEndVideoMessageIdentity>)arg1;
- (_Bool)updatePendingEndVideoMessage:(id <BMEndVideoMessage>)arg1;
- (id <BMEndVideoMessageIdentity>)createPendingEndVideoMessage;
@end

