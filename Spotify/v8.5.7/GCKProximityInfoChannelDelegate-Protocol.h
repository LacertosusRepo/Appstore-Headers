//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKProximityInfo, GCKProximityInfoChannel;

@protocol GCKProximityInfoChannelDelegate <NSObject>
- (void)proximityInfoChannel:(GCKProximityInfoChannel *)arg1 didFailToReceiveProximityInfoWithError:(GCKError *)arg2;
- (void)proximityInfoChannel:(GCKProximityInfoChannel *)arg1 didReceiveProximityInfo:(GCKProximityInfo *)arg2;
@end

