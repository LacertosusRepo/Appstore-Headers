//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdNPVModeGeneratorProtocol-Protocol.h"

@class NSString, SPTNowPlayingAudioAdMode;

@interface SPTAdNowPlayingAudioAdModeGenerator : NSObject <SPTAdNPVModeGeneratorProtocol>
{
    SPTNowPlayingAudioAdMode *_audioAdMode;
}

@property(retain, nonatomic) SPTNowPlayingAudioAdMode *audioAdMode; // @synthesize audioAdMode=_audioAdMode;
- (void).cxx_destruct;
- (void)updateAdModeWithAdEntity:(id)arg1;
- (id)getNPVAdMode;
- (id)initWithNowPlayingManager:(id)arg1 adManager:(id)arg2 playerObserver:(id)arg3 feedbackModel:(id)arg4 featureChecker:(id)arg5 animationView:(id)arg6 theme:(id)arg7 linkDispatcher:(id)arg8 cosmosBridge:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

