//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate;

@protocol LogObserver <NSObject>
- (void)logObserver:(struct LogObserver *)arg1 receivedLogLine:(const char *)arg2 fromModule:(const char *)arg3 file:(const char *)arg4 line:(long long)arg5 threadId:(unsigned long long)arg6 at:(NSDate *)arg7 logLevel:(long long)arg8;
@end

