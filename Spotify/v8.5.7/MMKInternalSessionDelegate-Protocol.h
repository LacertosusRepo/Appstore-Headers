//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MMKSharedSecret;

@protocol MMKInternalSessionDelegate
- (void)encryptedSessionStarted;
- (void)invalidateSharedSecret;
- (void)sharedSecretCreated:(MMKSharedSecret *)arg1;
@end

