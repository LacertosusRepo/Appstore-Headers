//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString, SPTLogMessage;

@protocol SPTLogCenter <NSObject>
- (void)detachCoreLogger;
- (void)attachCoreLogger:(id <SPTLogger>)arg1;
- (_Bool)sendMessageWithSequenceNumber:(NSNumber *)arg1 messageName:(NSString *)arg2;
- (_Bool)updateMessageWithSequenceNumber:(NSNumber *)arg1 messageName:(NSString *)arg2 message:(SPTLogMessage *)arg3;
- (NSDictionary *)createMessage:(NSString *)arg1;
- (void)sendMessage:(SPTLogMessage *)arg1;
@end

