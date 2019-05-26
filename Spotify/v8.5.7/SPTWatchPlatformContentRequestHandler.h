//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivityRequestHandler-Protocol.h"

@class NSString, SPTWatchConnectivityDataLoader;
@protocol SPTExternalIntegrationContentController, SPTExternalIntegrationPlaybackController;

@interface SPTWatchPlatformContentRequestHandler : NSObject <SPTWatchConnectivityRequestHandler>
{
    SPTWatchConnectivityDataLoader *_dataLoader;
    id <SPTExternalIntegrationContentController> _contentController;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
}

@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(readonly, nonatomic) id <SPTExternalIntegrationContentController> contentController; // @synthesize contentController=_contentController;
@property(readonly, nonatomic) SPTWatchConnectivityDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)sendResponseToRequest:(id)arg1 withContent:(id)arg2 children:(id)arg3 error:(id)arg4;
- (void)handleRequest:(id)arg1;
- (_Bool)canHandleRequest:(id)arg1;
- (id)initWithDataLoader:(id)arg1 externalIntegrationContentController:(id)arg2 playbackController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

