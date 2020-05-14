//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADJAttribution, ADJEventFailure, ADJEventSuccess, ADJSessionFailure, ADJSessionSuccess, NSURL;

@protocol AdjustDelegate

@optional
- (_Bool)adjustDeeplinkResponse:(NSURL *)arg1;
- (void)adjustSessionTrackingFailed:(ADJSessionFailure *)arg1;
- (void)adjustSessionTrackingSucceeded:(ADJSessionSuccess *)arg1;
- (void)adjustEventTrackingFailed:(ADJEventFailure *)arg1;
- (void)adjustEventTrackingSucceeded:(ADJEventSuccess *)arg1;
- (void)adjustAttributionChanged:(ADJAttribution *)arg1;
@end

