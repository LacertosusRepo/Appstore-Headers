//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTHubRemoteContentOperationURLResolver, SPTOfflineModeState, SPTResolver;

@interface SPTHubCosmosContentOperation : NSObject <SPTOfflineModeStateObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTHubRemoteContentOperationURLResolver> _contentURLResolver;
    id <SPTResolver> _resolver;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) id <SPTHubRemoteContentOperationURLResolver> contentURLResolver; // @synthesize contentURLResolver=_contentURLResolver;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleResponse:(id)arg1 withViewModelBuilder:(id)arg2;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithContentURLResolver:(id)arg1 resolver:(id)arg2 offlineModeState:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

