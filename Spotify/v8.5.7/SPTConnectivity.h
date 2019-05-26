//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAuthController, SPTCoreSchedulerThread;

@interface SPTConnectivity : NSObject
{
    struct Core *_core;
    SPTCoreSchedulerThread *_coreScheduler;
    SPTAuthController *_authController;
}

@property(readonly, nonatomic) SPTAuthController *authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) SPTCoreSchedulerThread *coreScheduler; // @synthesize coreScheduler=_coreScheduler;
- (void).cxx_destruct;
- (id)provideAuthController;
- (id)initWithCore:(struct Core *)arg1 scheduler:(id)arg2;

@end

