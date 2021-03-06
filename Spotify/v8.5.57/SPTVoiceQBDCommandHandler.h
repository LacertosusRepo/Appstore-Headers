//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceCommandHandler-Protocol.h"

@class NSString;
@protocol SPTPlayer;

@interface SPTVoiceQBDCommandHandler : NSObject <SPTVoiceCommandHandler>
{
    id <SPTPlayer> _player;
    NSString *_referrerIdentifier;
}

@property(readonly, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)handleVoiceCommand:(id)arg1;
- (_Bool)canHandleVoiceCommand:(id)arg1;
- (id)initWithPlayer:(id)arg1 referrerIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

