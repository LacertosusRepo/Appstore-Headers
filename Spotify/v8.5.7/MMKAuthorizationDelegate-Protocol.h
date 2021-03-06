//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMKMessageEnvelope, MMKSharedSecret;

@protocol MMKAuthorizationDelegate <NSObject>
- (void)didDisconnect;
- (void)didConnect;
- (void)invalidateSharedSecret;
- (void)authorizationCompleteReceived:(MMKMessageEnvelope *)arg1 sharedSecret:(MMKSharedSecret *)arg2;
- (void)authorizationResponseReceived:(MMKMessageEnvelope *)arg1;
- (void)authorizationSuccessReceived:(MMKMessageEnvelope *)arg1;
- (void)authorizationRequestReceived:(MMKMessageEnvelope *)arg1;
@end

