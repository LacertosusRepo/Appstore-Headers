//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol SPTAppProtocolDelegateConnectionSending <NSObject>
@property(readonly, getter=isOpen) _Bool open;
- (void)close;
- (void)sendMessageToAppProtocol:(NSArray *)arg1;
@end
