//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_SPTHubLoadingLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTViewLogger;

@interface EXP_SPTHubLoadingLoggerImplementation : NSObject <EXP_SPTHubLoadingLogger>
{
    id <SPTLogCenter> _logCenter;
    NSString *_pageIdentifier;
    id <SPTViewLogger> _viewLogger;
}

@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logLoadingCancelled;
- (void)logLoadingFailedWithError:(id)arg1;
- (void)logLoadingCompleted;
- (void)logLoadingStarted;
- (id)initWithLogCenter:(id)arg1 pageIdentifier:(id)arg2 viewLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

