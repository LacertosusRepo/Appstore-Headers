//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>, NSString, PDLClientConfigInternal;

@interface PDLSessionLoggerImpl : NSObject
{
    int _clearcutAppID;
    NSNumber *_querySessionId;
    NSNumber *_selectionSessionId;
    NSNumber *_submitSessionId;
    id <CCTClearcutLogger> _clearcutLogger;
    id <PDLTopNCache> _topNCache;
    NSString *_query;
    PDLClientConfigInternal *_clientConfig;
    id <PDLClientInfoProvider> _clientInfoProvider;
    id <GSCAddressBookService> _addressBookService;
    NSObject<OS_dispatch_queue> *_selectionSessionIDQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *selectionSessionIDQueue; // @synthesize selectionSessionIDQueue=_selectionSessionIDQueue;
@property(readonly, nonatomic) int clearcutAppID; // @synthesize clearcutAppID=_clearcutAppID;
@property(readonly, nonatomic) id <GSCAddressBookService> addressBookService; // @synthesize addressBookService=_addressBookService;
@property(readonly, nonatomic) id <PDLClientInfoProvider> clientInfoProvider; // @synthesize clientInfoProvider=_clientInfoProvider;
@property(readonly, nonatomic) PDLClientConfigInternal *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) id <CCTClearcutLogger> clearcutLogger; // @synthesize clearcutLogger=_clearcutLogger;
@property(readonly, nonatomic) NSNumber *submitSessionId; // @synthesize submitSessionId=_submitSessionId;
@property(readonly, nonatomic) NSNumber *selectionSessionId; // @synthesize selectionSessionId=_selectionSessionId;
@property(readonly, nonatomic) NSNumber *querySessionId; // @synthesize querySessionId=_querySessionId;
- (void).cxx_destruct;
- (id)entityIdForPersonWithField:(id)arg1 includeIdentityValues:(_Bool)arg2;
- (id)entityIdForField:(id)arg1 includeFieldValue:(_Bool)arg2;
- (id)clientInterface;
- (id)socialAffinityEntityForEventType:(int)arg1 group:(id)arg2;
- (int)socialAffinityEventSourceWithQuery:(id)arg1 isAutocompletionLog:(_Bool)arg2 isClientGenerated:(_Bool)arg3;
- (id)socialAffinityEntityForEventType:(int)arg1 field:(id)arg2 query:(id)arg3 isAutocompletionLog:(_Bool)arg4;
- (id)autocompleteClientMetadataWithCacheAndAddressbookInfo;
- (id)getSocialAffinityExtension:(int)arg1 query:(id)arg2 querySessionID:(id)arg3 selectionSessionID:(id)arg4 field:(id)arg5 group:(id)arg6 isAutocompletionLog:(_Bool)arg7;
- (CDUnknownBlockType)logEventBlock:(int)arg1 query:(id)arg2 querySessionID:(id)arg3 selectionSessionID:(id)arg4 field:(id)arg5 group:(id)arg6 isAutocompletionLog:(_Bool)arg7;
- (void)reportEventType:(int)arg1 query:(id)arg2 querySessionID:(id)arg3 field:(id)arg4 selectionSessionID:(id)arg5;
- (void)reportEventType:(int)arg1 querySessionID:(id)arg2 group:(id)arg3 selectionSessionID:(id)arg4;
- (void)createNewSubmitSessionId;
- (void)reportGroupSelection:(id)arg1;
- (void)reportGroupDisplay:(id)arg1;
- (void)reportFieldsProceed:(id)arg1;
- (void)reportCloseWithAction:(unsigned long long)arg1 fields:(id)arg2;
- (void)reportFieldSelection:(id)arg1;
- (void)reportResultFieldsDisplay:(id)arg1;
- (void)reportNewQuery:(id)arg1;
- (id)initWithRegistryContext:(id)arg1 clientConfig:(id)arg2 submissionID:(id)arg3;

@end

