//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GNSModemBroadcaster-Protocol.h"

@class GNSAudioPlayer, GNSTokenBroadcasterParams;

@interface GNSAudioBroadcastingOperation : NSObject <GNSModemBroadcaster>
{
    GNSAudioPlayer *_dsssPlayer;
    GNSAudioPlayer *_dtmfPlayer;
    GNSTokenBroadcasterParams *_params;
    CDUnknownBlockType _statusHandler;
}

@property(copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) GNSTokenBroadcasterParams *params; // @synthesize params=_params;
@property(retain, nonatomic) GNSAudioPlayer *dtmfPlayer; // @synthesize dtmfPlayer=_dtmfPlayer;
@property(retain, nonatomic) GNSAudioPlayer *dsssPlayer; // @synthesize dsssPlayer=_dsssPlayer;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;

@end
