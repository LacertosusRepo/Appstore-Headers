//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTWatchTransition;

@protocol YTCowatchService <NSObject>
- (void)fetchCowatchSessionsWithResponseBlock:(void (^)(NSArray *))arg1;
- (void)createSessionWithResponder:(id <YTResponder>)arg1 serverParams:(NSString *)arg2;
- (void)inviteForCowatchSessionWithSessionId:(NSString *)arg1;
- (void)removeQueueItemWithId:(NSString *)arg1;
- (void)playQueueItemWithId:(NSString *)arg1;
- (void)appendToQueueVideoItemWithId:(NSString *)arg1;
- (void)setCowatchSessionWatchTransition:(YTWatchTransition *)arg1;
- (_Bool)hasEnteredCowatchSession;
@end

