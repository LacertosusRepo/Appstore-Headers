//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMLoggerDataProvider-Protocol.h"

@class NSString, SPSession;
@protocol SPTNetworkConnectivityController;

@interface SPTVideoLoggerDataProviderImpl : NSObject <BMLoggerDataProvider>
{
    NSString *_featureIdentifier;
    SPSession *_loginSession;
    id <SPTNetworkConnectivityController> _ncc;
}

@property(retain, nonatomic) id <SPTNetworkConnectivityController> ncc; // @synthesize ncc=_ncc;
@property(nonatomic) __weak SPSession *loginSession; // @synthesize loginSession=_loginSession;
@property(copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (void).cxx_destruct;
- (id)streamingRules;
- (_Bool)isIncognitoMode;
- (id)connectionType;
- (id)initWithFeatureIdentifier:(id)arg1 loginSession:(id)arg2 networkConnectivityController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

