//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol SPTCarPlayContentDataSource <NSObject>
@property(readonly, nonatomic) __weak NSArray *rootItemURIs;
- (void)fetchRootItemURIsWithAccessorySessionID:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
@end

