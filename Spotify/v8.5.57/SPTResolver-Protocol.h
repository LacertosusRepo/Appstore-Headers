//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTRequest, SPTRequestLifetime;

@protocol SPTResolver <NSObject>
- (SPTRequestLifetime *)resolve:(SPTRequest *)arg1 onValue:(_Bool (^)(SPTResponse *))arg2 onClose:(void (^)(void))arg3;
@end

