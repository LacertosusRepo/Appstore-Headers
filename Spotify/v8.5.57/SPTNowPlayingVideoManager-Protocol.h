//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTFullscreenPlaybackPresentationManager-Protocol.h"

@protocol SPTNowPlayingFullscreenVideoRegistry;

@protocol SPTNowPlayingVideoManager <NSObject, SPTFullscreenPlaybackPresentationManager>
@property(readonly, nonatomic, getter=isFullscreenVideoPresented) _Bool fullscreenVideoPresented;
@property(readonly, nonatomic) id <SPTNowPlayingFullscreenVideoRegistry> fullscreenRegistry;
- (void)dismissFullscreenVideo:(_Bool)arg1;
- (void)presentFullscreenVideo:(_Bool)arg1;
@end
