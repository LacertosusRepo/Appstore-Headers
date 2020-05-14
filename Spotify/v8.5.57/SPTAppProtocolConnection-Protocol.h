//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTAppProtocolConnectionInput-Protocol.h"

@protocol SPTAppProtocolConnectionDelegate, SPTAppProtocolConnectionOutput;

@protocol SPTAppProtocolConnection <SPTAppProtocolConnectionInput>
@property(nonatomic) __weak id <SPTAppProtocolConnectionDelegate> connectionDelegate;
@property(nonatomic) __weak id <SPTAppProtocolConnectionOutput> messageReceiver;
@property(readonly, getter=isOpen) _Bool open;
- (void)close;
- (void)open;
@end
