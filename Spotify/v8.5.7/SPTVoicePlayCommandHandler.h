//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceCommandHandler-Protocol.h"

@class NSString;
@protocol SPTExternalIntegrationPlaybackController;

@interface SPTVoicePlayCommandHandler : NSObject <SPTVoiceCommandHandler>
{
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    NSString *_referrerIdentifier;
}

@property(retain, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (void).cxx_destruct;
- (id)handleVoiceCommand:(id)arg1;
- (_Bool)canHandleVoiceCommand:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 referrerIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
