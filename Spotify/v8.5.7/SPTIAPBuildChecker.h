//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTIAPBuildChecker : NSObject
{
}

+ (_Bool)isBuildEnvironmentProduction:(_Bool)arg1 sandboxReceipt:(_Bool)arg2;
+ (_Bool)isRunningTestFlightBetaBuild;
+ (_Bool)isRunningProductionBuild;
+ (_Bool)hasSandboxReceipt;

@end

