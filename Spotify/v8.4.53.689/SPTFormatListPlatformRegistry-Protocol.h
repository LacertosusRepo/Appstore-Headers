//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTFormatListPlatformRegistry <NSObject>
- (void)unregisterFallbackHandler;
- (void)unregisterHandlers;
- (void)unregisterFallbackHandler:(id <SPTFormatListPlatformRegistration>)arg1;
- (void)unregisterHandler:(id <SPTFormatListPlatformRegistration>)arg1;
- (id <SPTFormatListPlatformRegistration>)registerFallbackHandler:(UIViewController<SPTPageController> * (^)(NSURL *, NSString *, id <SPTPageCreationContext>))arg1;
- (id <SPTFormatListPlatformRegistration>)registerHandler:(UIViewController<SPTPageController> * (^)(NSURL *, NSString *, id <SPTPageCreationContext>))arg1 predicate:(_Bool (^)(NSString *, NSDictionary *, NSURL *))arg2;
@end

