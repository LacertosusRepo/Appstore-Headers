//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFollowModelFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTFollowDataProvider, SPTFollowModelMessageManager;
@protocol SPTCollectionPlatformConfiguration, SPTFollowFeatureLogger;

@interface SPTFollowModelFactoryImplementation : NSObject <SPTFollowModelFactory>
{
    NSString *_currentUsername;
    SPTDataLoaderFactory *_dataLoaderFactory;
    SPTFollowDataProvider *_followDataProvider;
    SPTFollowModelMessageManager *_messageManager;
    id <SPTCollectionPlatformConfiguration> _collectionPlatformConfiguration;
    id <SPTFollowFeatureLogger> _followFeatureLogger;
}

@property(retain, nonatomic) id <SPTFollowFeatureLogger> followFeatureLogger; // @synthesize followFeatureLogger=_followFeatureLogger;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionPlatformConfiguration; // @synthesize collectionPlatformConfiguration=_collectionPlatformConfiguration;
@property(retain, nonatomic) SPTFollowModelMessageManager *messageManager; // @synthesize messageManager=_messageManager;
@property(retain, nonatomic) SPTFollowDataProvider *followDataProvider; // @synthesize followDataProvider=_followDataProvider;
@property(retain, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(retain, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
- (void).cxx_destruct;
- (void)provideFollowModelForTargetURI:(id)arg1 logContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createMultipleFollowModelForFollowDataList:(id)arg1 logContext:(id)arg2;
- (id)createFollowModelForFollowData:(id)arg1 logContext:(id)arg2;
- (id)initWithCurrentUsername:(id)arg1 dataLoaderFactory:(id)arg2 followDataProvider:(id)arg3 messageManager:(id)arg4 collectionPlatformConfiguration:(id)arg5 followFeatureLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

