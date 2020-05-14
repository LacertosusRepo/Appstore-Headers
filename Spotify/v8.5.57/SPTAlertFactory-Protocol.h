//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTAlert, SPTAlertAction;

@protocol SPTAlertFactory <NSObject>
- (id <SPTAlertAction>)alertActionWithTitle:(NSString *)arg1 style:(long long)arg2 handler:(void (^)(id <SPTAlertAction>))arg3;
- (id <SPTAlert>)alertWithTitle:(NSString *)arg1 message:(NSString *)arg2 preferredStyle:(long long)arg3;
@end
