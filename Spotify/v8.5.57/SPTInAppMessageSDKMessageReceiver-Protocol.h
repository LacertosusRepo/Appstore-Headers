//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTInAppMessageSDKMessageViewModel;

@protocol SPTInAppMessageSDKMessageReceiver <NSObject>
- (void)didReceiveMessageViewModel:(id <SPTInAppMessageSDKMessageViewModel>)arg1 matchedPattern:(NSString *)arg2 triggerType:(NSString *)arg3;
@end

