//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDate, NSString;

@protocol SPTCrashSummaryObserver <NSObject>
- (void)sendPendingCrashReports;
- (void)logCrashWithClientVersion:(NSString *)arg1 OSVersion:(NSString *)arg2 date:(NSDate *)arg3 userName:(NSString *)arg4 UUID:(NSString *)arg5 detectorIdentifier:(NSString *)arg6 crashData:(NSData *)arg7;

@optional
- (_Bool)canHandleUserName;
@end
