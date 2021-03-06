//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBSDKGraphErrorRecoveryProcessor, NSError;

@protocol FBSDKGraphErrorRecoveryProcessorDelegate <NSObject>
- (void)processorDidAttemptRecovery:(FBSDKGraphErrorRecoveryProcessor *)arg1 didRecover:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (_Bool)processorWillProcessError:(FBSDKGraphErrorRecoveryProcessor *)arg1 error:(NSError *)arg2;
@end

