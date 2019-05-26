//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol SPTGaiaAirplayDisconnectPollerDelegate;

@interface SPTGaiaAirplayDisconnectPoller : NSObject
{
    id <SPTGaiaAirplayDisconnectPollerDelegate> _delegate;
    NSTimer *_airplayDisconnectTimer;
}

@property(retain, nonatomic) NSTimer *airplayDisconnectTimer; // @synthesize airplayDisconnectTimer=_airplayDisconnectTimer;
@property(nonatomic) __weak id <SPTGaiaAirplayDisconnectPollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)poll;
- (void)stopPolling;
- (void)startPolling;

@end

