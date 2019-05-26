//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSDictionary, NSString;

@interface SPTAdVoiceCommandAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_audioPlayer;
    NSDictionary *_responsePlayers;
    CDUnknownBlockType _completion;
}

+ (id)soundsBundle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSDictionary *responsePlayers; // @synthesize responsePlayers=_responsePlayers;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
- (void).cxx_destruct;
- (void)playAudioResponseWithPlayer:(id)arg1;
- (id)newPlayerNamed:(id)arg1;
- (id)audioResponsePlayers;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playAudioResponse:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

