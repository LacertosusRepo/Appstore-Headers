//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKGuestModeServerRequest.h"

@class GCKOCSendMessageRequest;
@protocol GCKGuestModeToggleAudioRequestDelegate;

@interface GCKGuestModeToggleAudioRequest : GCKGuestModeServerRequest
{
    _Bool _playAudio;
    GCKOCSendMessageRequest *_sendMessageRequest;
    id <GCKGuestModeToggleAudioRequestDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKGuestModeToggleAudioRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)processPostError:(id)arg1;
- (void)processPostResponseData:(id)arg1 statusCode:(long long)arg2;
- (void)start;
@property(readonly, nonatomic) _Bool playAudio;
- (id)initWithEnvironmentScan:(id)arg1 playAudio:(_Bool)arg2;

@end

