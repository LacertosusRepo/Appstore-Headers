//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDA4AConnectionMonitor, IDA4APacket, NSError;

@protocol IDA4AConnectionMonitorDelegate <NSObject>
- (void)monitor:(IDA4AConnectionMonitor *)arg1 didEncounterError:(NSError *)arg2;
- (void)monitor:(IDA4AConnectionMonitor *)arg1 didCreatePacket:(IDA4APacket *)arg2;
@end

