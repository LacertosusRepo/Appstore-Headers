//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTViewOfflineSwitch;

@protocol SPTViewOfflineSwitchDelegate <NSObject>
- (unsigned long long)offlineSwitchViewOfflineAvailability:(SPTViewOfflineSwitch *)arg1;
- (void)offlineSwitchViewDidChangeState:(SPTViewOfflineSwitch *)arg1 isOn:(_Bool)arg2;
@end
