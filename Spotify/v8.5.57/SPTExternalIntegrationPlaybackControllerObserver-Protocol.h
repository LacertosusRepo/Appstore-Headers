//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerState;
@protocol SPTExternalIntegrationPlaybackController;

@protocol SPTExternalIntegrationPlaybackControllerObserver <NSObject>
- (void)externalIntegrationPlaybackController:(id <SPTExternalIntegrationPlaybackController>)arg1 didReceiveNewPlayerState:(SPTPlayerState *)arg2 oldPlayerState:(SPTPlayerState *)arg3;
@end

