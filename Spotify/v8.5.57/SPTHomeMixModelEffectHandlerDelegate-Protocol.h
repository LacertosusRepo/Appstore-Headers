//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTHomeMixModelEffectHandler;

@protocol SPTHomeMixModelEffectHandlerDelegate <NSObject>
- (void)homeMixModelEffectHandler:(SPTHomeMixModelEffectHandler *)arg1 failedToUpdatePublishExplicitSetting:(NSError *)arg2;
- (void)homeMixModelEffectHandler:(SPTHomeMixModelEffectHandler *)arg1 failedToUpdateEnabledSetting:(NSError *)arg2;
- (void)homeMixModelEffectHandler:(SPTHomeMixModelEffectHandler *)arg1 failedToUpdateToMood:(unsigned long long)arg2 fromMood:(unsigned long long)arg3 error:(NSError *)arg4;
@end

