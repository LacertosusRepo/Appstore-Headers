//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSignupDataLoaderResponse;
@protocol SPTSignupDataLoader;

@protocol SPTSignupDataLoaderDelegate <NSObject>
- (void)dataLoader:(id <SPTSignupDataLoader>)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)dataLoader:(id <SPTSignupDataLoader>)arg1 didFinishLoadingWithSuccessResponse:(SPTSignupDataLoaderResponse *)arg2;
@end

