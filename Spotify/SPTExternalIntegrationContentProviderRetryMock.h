//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationContentProvider.h"

@class NSArray, NSError, NSString;

@interface SPTExternalIntegrationContentProviderRetryMock : NSObject <SPTExternalIntegrationContentProvider>
{
    _Bool _didRespondWithError;
    NSError *_error;
    id <SPTExternalIntegrationContent> _content;
    NSArray *_childContent;
}

@property(nonatomic) _Bool didRespondWithError; // @synthesize didRespondWithError=_didRespondWithError;
@property(readonly, nonatomic) NSArray *childContent; // @synthesize childContent=_childContent;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> content; // @synthesize content=_content;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)resolveChildContentOfParentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForChildContentOfParentWithURI:(id)arg1;
- (void)resolveContentWithURI:(id)arg1 options:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)priorityForContentWithURI:(id)arg1;
- (void)resetErrorFlag;
- (id)initWithError:(id)arg1 content:(id)arg2 childContent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
