//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTSocialListeningModelObserver, SPTSocialListeningSocialDeviceModelEntity;

@protocol SPTSocialListeningModel <NSObject>
@property(readonly, nonatomic) NSURL *hostAvatarURL;
@property(readonly, nonatomic) NSArray<SPTSocialListeningSocialDeviceModelEntity> *socialDevices;
@property(readonly, nonatomic) NSString *sessionID;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) unsigned long long connectedParticipants;
@property(readonly, nonatomic, getter=isSessionHost) _Bool sessionHost;
- (void)fetchExposedDevices;
- (void)fetchSocialDevicesWithDiscoveredDeviceIds:(NSArray *)arg1;
- (void)disableSocialDevice:(NSString *)arg1;
- (void)enableSocialDevice:(NSString *)arg1;
- (void)setPhysicalDeviceIDState:(NSString *)arg1;
- (void)removeObserver:(id <SPTSocialListeningModelObserver>)arg1;
- (void)addObserver:(id <SPTSocialListeningModelObserver>)arg1;
- (void)leaveSession;
- (void)joinSession:(NSURL *)arg1;
- (void)loadSession:(_Bool)arg1;
@end
