//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

@interface SPTAppProtocolSeekingHelper : NSObject
{
    id <SPTExternalIntegrationPlatform> _externalIntegrationPlatform;
    NSTimer *_seekTimer;
    unsigned long long _seekDirection;
}

@property(nonatomic) unsigned long long seekDirection; // @synthesize seekDirection=_seekDirection;
@property(retain, nonatomic) NSTimer *seekTimer; // @synthesize seekTimer=_seekTimer;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlatform> externalIntegrationPlatform; // @synthesize externalIntegrationPlatform=_externalIntegrationPlatform;
- (void).cxx_destruct;
- (void)applySeek:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopSeeking;
- (void)beginSeekingInDirection:(unsigned long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithExternalIntegrationPlatform:(id)arg1;

@end

