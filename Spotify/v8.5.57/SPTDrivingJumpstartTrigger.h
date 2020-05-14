//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarDetectionStateObserver-Protocol.h"

@class UIApplication;
@protocol SPTCarDetector, SPTDrivingJumpstartHandler;

@interface SPTDrivingJumpstartTrigger : NSObject <SPTCarDetectionStateObserver>
{
    id <SPTDrivingJumpstartHandler> _jumpstartHandler;
    id <SPTCarDetector> _carDetector;
    UIApplication *_application;
}

@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(readonly, nonatomic) id <SPTDrivingJumpstartHandler> jumpstartHandler; // @synthesize jumpstartHandler=_jumpstartHandler;
- (void).cxx_destruct;
- (void)carDetector:(id)arg1 didChangeCarConnected:(_Bool)arg2;
- (void)unload;
- (id)initWithJumpstartHandler:(id)arg1 carDetector:(id)arg2 application:(id)arg3;

@end

