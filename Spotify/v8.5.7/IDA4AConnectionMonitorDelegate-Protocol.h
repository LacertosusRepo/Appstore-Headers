//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IDA4AConnectionMonitor, IDA4APacket, NSError;

@protocol IDA4AConnectionMonitorDelegate <NSObject>
- (void)monitor:(IDA4AConnectionMonitor *)arg1 didEncounterError:(NSError *)arg2;
- (void)monitor:(IDA4AConnectionMonitor *)arg1 didCreatePacket:(IDA4APacket *)arg2;
@end

