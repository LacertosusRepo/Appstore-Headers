//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol SPTShareVideoDataProvider <NSObject>
- (void)provideVideoDataForEntityURI:(NSURL *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end
