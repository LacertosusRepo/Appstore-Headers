//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIPlaybackIdProvider-Protocol.h"
#import "SPTUBISessionServiceResponder-Protocol.h"

@class NSString;
@protocol SPTUBIPlaybackIdProvider;

@interface SPTUBISessionServiceResponderImplementation : NSObject <SPTUBISessionServiceResponder, SPTUBIPlaybackIdProvider>
{
    id <SPTUBIPlaybackIdProvider> _sessionPlaybackIdProvider;
}

@property(retain, nonatomic) id <SPTUBIPlaybackIdProvider> sessionPlaybackIdProvider; // @synthesize sessionPlaybackIdProvider=_sessionPlaybackIdProvider;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *playbackId;
- (void)sessionServiceDidUnload;
- (void)sessionServiceDidLoadWithPlaybackIdProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
