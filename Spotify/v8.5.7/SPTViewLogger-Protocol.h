//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURL;

@protocol SPTViewLogger <NSObject>
- (void)logViewLoadingCancelledWithPageIdentifier:(NSString *)arg1;
- (void)logViewDataDidFailToLoadWithError:(NSError *)arg1 pageIdentifier:(NSString *)arg2;
- (void)logImageLoadingEndedForImageWithURI:(NSURL *)arg1;
- (void)logImageLoadingStartedForImageWithURI:(NSURL *)arg1;
- (void)logViewDataDidLoadWithPageIdentifier:(NSString *)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(NSString *)arg1;
@property(nonatomic, readonly) long long state;
@property(nonatomic, readonly) NSString *pageIdentifier;
@end

