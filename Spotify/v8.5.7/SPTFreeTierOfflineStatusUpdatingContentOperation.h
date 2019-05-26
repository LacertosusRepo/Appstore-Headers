//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"
#import "SPTOfflineObserver-Protocol.h"

@class NSString, NSURL;
@protocol EXP_HUBContentOperationDelegate, EXP_SPTHubComponentModelURIResolver, SPTOfflineManager;

@interface SPTFreeTierOfflineStatusUpdatingContentOperation : NSObject <SPTOfflineObserver, EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    id <SPTOfflineManager> _offlineManager;
    id <EXP_SPTHubComponentModelURIResolver> _componentModelURIResolver;
    NSURL *_entityURL;
    NSString *_username;
}

@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, nonatomic) id <EXP_SPTHubComponentModelURIResolver> componentModelURIResolver; // @synthesize componentModelURIResolver=_componentModelURIResolver;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)glueOfflineSyncStatusForURL:(id)arg1;
- (long long)offlineSyncStatusForURL:(id)arg1;
- (void)recursivelyUpdateOfflineStateForComponentModelBuilder:(id)arg1;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithEntityURL:(id)arg1 username:(id)arg2 offlineManager:(id)arg3 componentModelURIResolver:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
