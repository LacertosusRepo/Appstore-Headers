//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTVoiceLibraryNetworkState;

@protocol SPTVoiceLibraryNetworkStateObserver <NSObject>
- (void)networkStateHandler:(id <SPTVoiceLibraryNetworkState>)arg1 didFailReachabilityWithError:(NSError *)arg2;
@end
