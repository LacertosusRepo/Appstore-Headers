//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCKCastChannel.h"

#import "GCKRequestTrackerDelegate-Protocol.h"

@class GCKRequestTracker, NSData, NSString;
@protocol GCKBroadcastKeyExchangeChannelDelegate;

@interface GCKBroadcastKeyExchangeChannel : GCKCastChannel <GCKRequestTrackerDelegate>
{
    NSData *_senderKey;
    GCKRequestTracker *_requestTracker;
    id <GCKBroadcastKeyExchangeChannelDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKBroadcastKeyExchangeChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestTracker:(id)arg1 didTimeOut:(long long)arg2;
- (void)requestTracker:(id)arg1 didReplace:(long long)arg2;
- (void)requestTracker:(id)arg1 didCancel:(long long)arg2;
- (void)notifyDidFailToReceiveWrappedSenderKeyForSenderKey:(id)arg1 withError:(id)arg2;
- (void)notifyDidReceiveWrappedSenderKey:(id)arg1 forSenderKey:(id)arg2;
- (void)didReceiveBinaryMessage:(id)arg1;
- (long long)requestWrappedSenderKeyForSenderKey:(id)arg1;
- (id)init;
- (id)initWithNamespace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

