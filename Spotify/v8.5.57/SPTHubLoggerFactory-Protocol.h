//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTHubComponentModelURIResolver, SPTHubImpressionLogger, SPTHubInteractionLogger, SPTHubLoadingLogger, SPTHubLogger, SPTViewLogger;

@protocol SPTHubLoggerFactory <NSObject>
- (id <SPTHubLoadingLogger>)createLoadingLoggerWithPageIdentifier:(NSString *)arg1 pageURI:(NSURL *)arg2;
- (id <SPTHubInteractionLogger>)createInteractionLoggerWithFeatureIdentifier:(NSString *)arg1 pageURI:(NSURL *)arg2;
- (id <SPTHubImpressionLogger>)createImpressionLoggerWithFeatureIdentifier:(NSString *)arg1 pageURI:(NSURL *)arg2 componentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg3;
- (id <SPTHubLogger>)createLoggerWithFeatureIdentifier:(NSString *)arg1 pageIdentifier:(NSString *)arg2 pageURI:(NSURL *)arg3 componentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg4 viewLogger:(id <SPTViewLogger>)arg5;
- (id <SPTHubLogger>)createLoggerWithFeatureIdentifier:(NSString *)arg1 pageIdentifier:(NSString *)arg2 pageURI:(NSURL *)arg3 componentModelURIResolver:(id <SPTHubComponentModelURIResolver>)arg4;
@end

