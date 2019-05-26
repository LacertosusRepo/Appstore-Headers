//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTRawConfiguration;
@protocol SPTRemoteConfigurationDebugLogger, SPTRemoteConfigurationEventLogger, SPTRemoteConfigurationPersistence, SPTRemoteConfigurationPingbackEventLogger, SPTRemoteConfigurationTransport;

@interface SPTRemoteConfiguration : NSObject
{
    SPTRawConfiguration *_activeConfiguration;
    NSString *_installationID;
    NSString *_clientID;
    NSString *_version;
    id <SPTRemoteConfigurationTransport> _transport;
    id <SPTRemoteConfigurationEventLogger> _eventLogger;
    id <SPTRemoteConfigurationPingbackEventLogger> _pingbackEventLogger;
    id <SPTRemoteConfigurationDebugLogger> _debugLogger;
    id <SPTRemoteConfigurationPersistence> _persistence;
}

@property(readonly, nonatomic) id <SPTRemoteConfigurationPersistence> persistence; // @synthesize persistence=_persistence;
@property(readonly, nonatomic) id <SPTRemoteConfigurationDebugLogger> debugLogger; // @synthesize debugLogger=_debugLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationPingbackEventLogger> pingbackEventLogger; // @synthesize pingbackEventLogger=_pingbackEventLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationEventLogger> eventLogger; // @synthesize eventLogger=_eventLogger;
@property(readonly, nonatomic) id <SPTRemoteConfigurationTransport> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *installationID; // @synthesize installationID=_installationID;
@property(retain, nonatomic) SPTRawConfiguration *activeConfiguration; // @synthesize activeConfiguration=_activeConfiguration;
- (void).cxx_destruct;
- (int)stringToProtoFetchType:(id)arg1;
- (void)clearLastFetchType;
- (id)restoreLastFetchType;
- (void)storeLastFetchType:(id)arg1;
- (id)getInstallationID;
- (void)logMessage:(id)arg1 level:(unsigned long long)arg2;
- (id)createLegacyPingbackErrorURL;
- (id)extendURLComponents:(id)arg1 fetchType:(id)arg2;
- (id)createURLComponentsWithEndpoint:(id)arg1;
- (void)handleFetchSuccessWithData:(id)arg1 fetchType:(id)arg2;
- (void)handleFetchSuccessNoData;
- (void)handleFetchError:(id)arg1;
- (id)getWithClass:(Class)arg1;
- (id)pingbackPayloadForError:(id)arg1;
- (id)pingbackPayloadForDefaultConfiguration:(id)arg1;
- (id)pingbackPayloadForConfiguration:(id)arg1 fetchType:(id)arg2;
- (void)sendPingbackWithConfiguration:(id)arg1 endpoint:(id)arg2;
- (void)sendPingbackAppliedDefaultConfiguration:(id)arg1 fetchType:(id)arg2;
- (void)sendPingbackAppliedConfiguration:(id)arg1 fetchType:(id)arg2;
- (id)wrapProtobufMessage:(id)arg1;
- (void)sendAppliedDefaultConfiguration:(id)arg1;
- (void)sendAppliedConfiguration:(id)arg1;
- (void)sendEventsForConfiguration:(id)arg1;
- (id)clientAttributes;
- (id)parseData:(id)arg1;
- (void)activateConfiguration:(id)arg1;
- (void)clearPersistentStorage;
- (void)activateFetched;
- (void)fetchConfigurationWithFetchType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 pingbackEventLogger:(id)arg3 debugLogger:(id)arg4 persistence:(id)arg5 clientID:(id)arg6 clientVersion:(id)arg7;
- (id)initWithTransport:(id)arg1 eventLogger:(id)arg2 pingbackEventLogger:(id)arg3 debugLogger:(id)arg4 clientID:(id)arg5 clientVersion:(id)arg6;

@end

