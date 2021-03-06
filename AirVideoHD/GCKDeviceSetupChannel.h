//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKRequestTracker, NSString;
@protocol GCKDeviceSetupChannelDelegate;

@interface GCKDeviceSetupChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    GCKRequestTracker *_deviceConfigurationRequestTracker;
    id <GCKDeviceSetupChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKDeviceSetupChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)didReceiveTextMessage:(id)arg1;
- (long long)requestDeviceConfiguration;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

