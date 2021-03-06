//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTNowPlayingRemoteControlEventControllerRegistry.h"
#import "SPTNowPlayingRemoteControlEventPolicyControllerDelegate.h"
#import "SPTNowPlayingRemoteControlPolicyUpdateOserver.h"

@class NSMutableSet, NSString;

@interface SPTNowPlayingRemoteControlEventControllerManager : NSObject <SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicyUpdateOserver, SPTNowPlayingRemoteControlEventControllerRegistry>
{
    NSMutableSet *_policyControllers;
    NSMutableSet *_subtypeControllers;
    id <SPTNowPlayingRemoteControlEventPolicyController> _currentPolicyController;
    id <SPTNowPlayingRemoteControlPolicy> _currentPolicy;
}

@property(nonatomic) __weak id <SPTNowPlayingRemoteControlPolicy> currentPolicy; // @synthesize currentPolicy=_currentPolicy;
@property(nonatomic) __weak id <SPTNowPlayingRemoteControlEventPolicyController> currentPolicyController; // @synthesize currentPolicyController=_currentPolicyController;
@property(readonly, nonatomic) NSMutableSet *subtypeControllers; // @synthesize subtypeControllers=_subtypeControllers;
@property(readonly, nonatomic) NSMutableSet *policyControllers; // @synthesize policyControllers=_policyControllers;
- (void).cxx_destruct;
- (id)controllerForRemoteEventSubtypeUpdatesWithHighestPriority;
- (id)controllerForRemoteControlPolicyUpdatesWithHighestPriority;
- (void)remoteControlPolicyDidChange:(id)arg1;
- (void)unregisterRemoteEventSubtypesController:(id)arg1;
- (void)registerRemoteEventSubtypesController:(id)arg1;
- (void)unregisterRemoteControlEventPolicyController:(id)arg1;
- (void)registerRemoteControlEventPolicyController:(id)arg1;
- (void)remoteControlEventController:(id)arg1 didUpdatePriorityForUpdatingRemoteControlPolicy:(long long)arg2;
- (_Bool)handleRemoteEventSubType:(long long)arg1;
- (void)updateRemoteControlsWithPolicy:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

