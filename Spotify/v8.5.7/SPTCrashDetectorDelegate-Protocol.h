//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString;
@protocol SPTCrashDetector;

@protocol SPTCrashDetectorDelegate <NSObject>
- (void)crashDetector:(id <SPTCrashDetector>)arg1 detectedCrashAtDate:(NSDate *)arg2 clientVersion:(NSString *)arg3 OSVersion:(NSString *)arg4 userName:(NSString *)arg5 UUID:(NSString *)arg6;
@end

