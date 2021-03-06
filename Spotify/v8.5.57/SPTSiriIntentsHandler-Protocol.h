//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class INIntent, NSDictionary, NSString;

@protocol SPTSiriIntentsHandler <NSObject>
- (void)handleIntentWithPlayCommandURI:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)handleIntent:(INIntent *)arg1 completionHandler:(void (^)(INIntentResponse *))arg2 measurements:(NSDictionary *)arg3 dimensions:(NSDictionary *)arg4;
@end

