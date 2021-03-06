//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTVoiceCommandHandler.h"

@class NSString;

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

