//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTServiceManager;

@protocol SPTServiceManagerDelegate <NSObject>
- (void)serviceManagerDidUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillUnloadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerDidLoadServices:(SPTServiceManager *)arg1;
- (void)serviceManagerWillLoadServices:(SPTServiceManager *)arg1;
@end
