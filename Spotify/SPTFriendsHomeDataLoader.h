//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"

@class NSString, SPTDataLoader;

@interface SPTFriendsHomeDataLoader : NSObject <SPTDataLoaderDelegate>
{
    _Bool _isLoadingHome;
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _imageLoader;
}

@property(nonatomic) _Bool isLoadingHome; // @synthesize isLoadingHome=_isLoadingHome;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)handleFriendsWeeklyReadyStateResponse:(id)arg1 withSuccess:(_Bool)arg2;
- (void)handleRecommendedUsersResponse:(id)arg1 withSuccess:(_Bool)arg2;
- (void)handleHomeResponse:(id)arg1 withSuccess:(_Bool)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fetchFriendsWeeklyReadyStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecommendedUsersWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchHomeEntityListWithVariants:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataLoader:(id)arg1 imageLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

