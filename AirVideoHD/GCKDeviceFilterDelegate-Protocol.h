//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDevice, NSError;

@protocol GCKDeviceFilterDelegate <NSObject>
- (void)filteringFailedForDevice:(GCKDevice *)arg1 withError:(NSError *)arg2;
- (void)filteringFinishedForDevice:(GCKDevice *)arg1 withResult:(_Bool)arg2 deviceChanged:(_Bool)arg3 deviceIDChanged:(_Bool)arg4;
@end
