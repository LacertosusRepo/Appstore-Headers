//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAlertToken;

@protocol SPTAlertTokenObserver <NSObject>

@optional
- (void)alertOperationForTokenWasCancelled:(id <SPTAlertToken>)arg1;
- (void)alertOperationForTokenDidComplete:(id <SPTAlertToken>)arg1;
@end
