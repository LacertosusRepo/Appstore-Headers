//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTVoiceCommand, SPTask;

@protocol SPTVoiceCommandHandler <NSObject>
- (SPTask *)handleVoiceCommand:(SPTVoiceCommand *)arg1;
- (_Bool)canHandleVoiceCommand:(SPTVoiceCommand *)arg1;
@end

