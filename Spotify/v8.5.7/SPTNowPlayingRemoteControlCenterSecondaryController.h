//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingRemoteControlEventPolicyController-Protocol.h"

@class MPRemoteCommandCenter, NSString;
@protocol SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicy;

@interface SPTNowPlayingRemoteControlCenterSecondaryController : NSObject <SPTNowPlayingRemoteControlEventPolicyController>
{
    _Bool _activeForRemoteControlPolicyUpdates;
    id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> _delegate;
    long long _eventControllerPriority;
    MPRemoteCommandCenter *_remoteCommandCenter;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
}

@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(readonly, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(nonatomic) long long eventControllerPriority; // @synthesize eventControllerPriority=_eventControllerPriority;
@property(nonatomic) __weak id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActiveForRemoteControlPolicyUpdates) _Bool activeForRemoteControlPolicyUpdates; // @synthesize activeForRemoteControlPolicyUpdates=_activeForRemoteControlPolicyUpdates;
- (void).cxx_destruct;
- (void)applyRemoteControlPolicy:(id)arg1;
- (void)disableAllRemoteCommandsAndUnsubscribeEventHandlers;
- (void)updateRemoteControlCenterWithPolicy:(id)arg1;
- (long long)priorityForUpdatingRemoteControlPolicy;
- (void)deactivate;
- (void)activate;
- (id)initWithRemoteCommandCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
