//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFeedbackManager.h"

@class NSString;

@interface SPTFeedbackManagerImplementation : NSObject <SPTFeedbackManager>
{
    id <SPTResolver> _resolver;
    id <SPTFeedbackTestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTFeedbackTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)removeFeedbackForEntityURI:(id)arg1 onContextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)dislikeEntityURI:(id)arg1 onContextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (void)likeEntityURI:(id)arg1 onContextURI:(id)arg2 subcontextURI:(id)arg3 viewURI:(id)arg4 reason:(id)arg5 backendURL:(id)arg6 feature:(id)arg7 actions:(id)arg8 success:(CDUnknownBlockType)arg9 failure:(CDUnknownBlockType)arg10;
- (id)initWithResolver:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

