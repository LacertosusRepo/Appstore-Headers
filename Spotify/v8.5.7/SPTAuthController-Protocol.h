//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTAuthControllerObserver;

@protocol SPTAuthController <NSObject>
- (void)removeObserver:(id <SPTAuthControllerObserver>)arg1;
- (void)addObserver:(id <SPTAuthControllerObserver>)arg1;
- (void)authenticateWithURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 completionHandler:(_Bool (^)(_Bool, NSURL *))arg3;
@end

