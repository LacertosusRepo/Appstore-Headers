//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTWazeTransportManager, SPTWazeTransportMessage;

@protocol SPTWazeTransportManagerDelegate <NSObject>
- (void)transportManager:(SPTWazeTransportManager *)arg1 didReceiveMessage:(SPTWazeTransportMessage *)arg2;
- (void)transportManager:(SPTWazeTransportManager *)arg1 didUpdateConnectionStatus:(_Bool)arg2;
@end

