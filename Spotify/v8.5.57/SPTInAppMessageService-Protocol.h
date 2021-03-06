//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTInAppMessageActionsRegistry, SPTInAppMessageMessageRequester, SPTInAppMessageNowPlayingManagerRegistry, SPTInAppMessagePresentationMonitor;

@protocol SPTInAppMessageService <SPTService>
- (id <SPTInAppMessagePresentationMonitor>)providePresentationMonitor;
- (id <SPTInAppMessageActionsRegistry>)provideActionsRegistry;
- (id <SPTInAppMessageNowPlayingManagerRegistry>)provideNowPlayingManagerRegistry;
- (id <SPTInAppMessageMessageRequester>)provideMessageRequester;
@end

