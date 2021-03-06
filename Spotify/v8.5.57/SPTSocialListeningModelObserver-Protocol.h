//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSError;
@protocol SPTSocialListeningModel, SPTSocialListeningSessionModelEntity, SPTSocialListeningSocialDeviceModelEntity, SPTSocialListeningUpdateEventModelEntity;

@protocol SPTSocialListeningModelObserver <NSObject>
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didDeleteSession:(id <SPTSocialListeningSessionModelEntity>)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 didReceiveError:(NSError *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 updatedSession:(id <SPTSocialListeningSessionModelEntity>)arg2 updateEvent:(id <SPTSocialListeningUpdateEventModelEntity>)arg3;

@optional
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 gotExposedDevices:(NSDictionary *)arg2;
- (void)socialListeningModel:(id <SPTSocialListeningModel>)arg1 updatedSocialDevices:(NSArray<SPTSocialListeningSocialDeviceModelEntity> *)arg2;
@end

