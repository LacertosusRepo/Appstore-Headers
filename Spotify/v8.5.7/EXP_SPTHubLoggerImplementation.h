//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_SPTHubLogger-Protocol.h"

@class EXP_SPTHubImageLoadingLoggerImplementation, EXP_SPTHubImpressionLoggerImplementation, EXP_SPTHubInteractionLoggerImplementation, EXP_SPTHubLoadingLoggerImplementation, NSString;

@interface EXP_SPTHubLoggerImplementation : NSObject <EXP_SPTHubLogger>
{
    EXP_SPTHubImageLoadingLoggerImplementation *_imageLoadingLogger;
    EXP_SPTHubImpressionLoggerImplementation *_impressionLogger;
    EXP_SPTHubInteractionLoggerImplementation *_interactionLogger;
    EXP_SPTHubLoadingLoggerImplementation *_loadingLogger;
}

@property(readonly, nonatomic) EXP_SPTHubLoadingLoggerImplementation *loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) EXP_SPTHubInteractionLoggerImplementation *interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) EXP_SPTHubImpressionLoggerImplementation *impressionLogger; // @synthesize impressionLogger=_impressionLogger;
@property(readonly, nonatomic) EXP_SPTHubImageLoadingLoggerImplementation *imageLoadingLogger; // @synthesize imageLoadingLogger=_imageLoadingLogger;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didFinishLoadingImageWithURI:(id)arg2;
- (void)imageLoader:(id)arg1 didBeginLoadingImageWithURI:(id)arg2;
- (void)logLoadingCancelled;
- (void)logLoadingFailedWithError:(id)arg1;
- (void)logLoadingCompleted;
- (void)logLoadingStarted;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 featureIdentifier:(id)arg2 pageIdentifier:(id)arg3 pageURI:(id)arg4 componentModelURIResolver:(id)arg5 viewLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

