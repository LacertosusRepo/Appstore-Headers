//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;

@protocol SPTAssistedCurationAddTrackHandler <NSObject>
- (void)addTrackURI:(NSURL *)arg1 fromContext:(unsigned long long)arg2 withCompletion:(void (^)(unsigned long long, NSError *))arg3;
@end

