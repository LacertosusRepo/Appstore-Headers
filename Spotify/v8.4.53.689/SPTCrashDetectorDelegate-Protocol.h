//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol SPTCrashDetectorDelegate <NSObject>
- (void)crashDetector:(id <SPTCrashDetector>)arg1 detectedCrashAtDate:(NSDate *)arg2 clientVersion:(NSString *)arg3 OSVersion:(NSString *)arg4 userName:(NSString *)arg5 UUID:(NSString *)arg6;
@end

