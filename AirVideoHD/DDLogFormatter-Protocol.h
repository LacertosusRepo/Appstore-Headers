//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DDLogMessage, NSString;
@protocol DDLogger;

@protocol DDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(DDLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <DDLogger>)arg1;
- (void)didAddToLogger:(id <DDLogger>)arg1;
@end

