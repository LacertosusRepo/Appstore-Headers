//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationIntegration-Protocol.h"

@class NSString, SPTRemoteConfiguration;

@interface SPTRemoteConfigurationIntegrationImplementation : NSObject <SPTRemoteConfigurationIntegration>
{
    SPTRemoteConfiguration *_remoteConfiguration;
}

@property(retain, nonatomic) SPTRemoteConfiguration *remoteConfiguration; // @synthesize remoteConfiguration=_remoteConfiguration;
- (void).cxx_destruct;
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConfiguration;
- (id)initWithRemoteConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

