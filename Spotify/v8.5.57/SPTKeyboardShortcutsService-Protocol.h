//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, SPTKeyboardShortcutRegistration;

@protocol SPTKeyboardShortcutsService <SPTService>
- (SPTKeyboardShortcutRegistration *)registerKeyCommandWithInput:(NSString *)arg1 modifierFlags:(long long)arg2 action:(void (^)(void))arg3 discoverabilityTitle:(NSString *)arg4;
@end

