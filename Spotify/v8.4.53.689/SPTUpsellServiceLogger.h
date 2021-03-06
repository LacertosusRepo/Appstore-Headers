//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTUpsellLogger.h"

@class NSMutableDictionary, NSString, SPTDataLoader;

@interface SPTUpsellServiceLogger : NSObject <SPTDataLoaderDelegate, SPTUpsellLogger>
{
    id <SPTUpsellServiceLoggerDelegate> _delegate;
    id <SPTLogCenter> _logCenter;
    SPTDataLoader *_dataLoader;
    NSMutableDictionary *_impressionMessages;
    NSMutableDictionary *_interactionMessages;
}

@property(readonly, nonatomic) NSMutableDictionary *interactionMessages; // @synthesize interactionMessages=_interactionMessages;
@property(readonly, nonatomic) NSMutableDictionary *impressionMessages; // @synthesize impressionMessages=_impressionMessages;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) __weak id <SPTUpsellServiceLoggerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)logInteractionWithUpsell:(id)arg1 viaButton:(id)arg2;
- (void)logImpressionOfUpsell:(id)arg1;
- (void)logUpsellEventOfUpsell:(id)arg1 message:(id)arg2 messageList:(id)arg3;
@property(readonly, copy, nonatomic) NSString *loggerIdentifier;
- (void)performLogRequestForURL:(id)arg1 type:(id)arg2;
- (id)initWithDataLoader:(id)arg1 logCenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

