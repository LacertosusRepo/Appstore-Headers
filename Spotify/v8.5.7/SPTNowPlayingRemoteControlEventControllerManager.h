//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingRemoteControlEventControllerRegistry-Protocol.h"
#import "SPTNowPlayingRemoteControlEventPolicyControllerDelegate-Protocol.h"
#import "SPTNowPlayingRemoteControlPolicyUpdateObserver-Protocol.h"

@class NSMutableSet, NSString;
@protocol SPTNowPlayingRemoteControlEventPolicyController, SPTNowPlayingRemoteControlPolicy;

@interface SPTNowPlayingRemoteControlEventControllerManager : NSObject <SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicyUpdateObserver, SPTNowPlayingRemoteControlEventControllerRegistry>
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
