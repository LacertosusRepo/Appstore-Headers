//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCDBoqDataTransport.h"
#import "FCDBoqDataTransportOperationDelegate.h"
#import "SRLService.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface FCDBoqDataTransport : NSObject <SRLService, FCDBoqDataTransportOperationDelegate, FCDBoqDataTransport>
{
    _Bool _isExpiringConsistencyTokenJar;
    id <FCDGTMTransport> _gtmTransport;
    id <GSCAccountId> _accountID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_consistencyTokenJar;
    long long _consistencyTokenJarExpireTime;
}

@property(nonatomic) long long consistencyTokenJarExpireTime; // @synthesize consistencyTokenJarExpireTime=_consistencyTokenJarExpireTime;
@property(nonatomic) _Bool isExpiringConsistencyTokenJar; // @synthesize isExpiringConsistencyTokenJar=_isExpiringConsistencyTokenJar;
@property(copy, nonatomic) NSString *consistencyTokenJar; // @synthesize consistencyTokenJar=_consistencyTokenJar;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) id <FCDGTMTransport> gtmTransport; // @synthesize gtmTransport=_gtmTransport;
- (void).cxx_destruct;
- (void)updateConsistencyTokenJarsWithHeader:(id)arg1;
- (id)activeConsistencyTokenJars;
- (id)operationForRequest:(id)arg1;
- (id)initWithAccountID:(id)arg1 transport:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

