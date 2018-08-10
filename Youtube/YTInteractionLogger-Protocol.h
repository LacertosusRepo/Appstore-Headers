//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPBMessage, NSObject<YTResponder>, NSString, YTICommand, YTIInteractionLoggingClientData;

@protocol YTInteractionLogger <NSObject>
- (void)sendGestureForRenderer:(GPBMessage *)arg1 gestureType:(int)arg2 clientData:(YTIInteractionLoggingClientData *)arg3 responder:(NSObject<YTResponder> *)arg4;
- (void)sendGestureForButton:(id <YTInteractionLoggingButtonProtocol>)arg1 responder:(NSObject<YTResponder> *)arg2;
- (void)sendGestureForButton:(id <YTInteractionLoggingButtonProtocol>)arg1 gestureType:(int)arg2 responder:(NSObject<YTResponder> *)arg3;
- (void)sendGestureForButton:(id <YTInteractionLoggingButtonProtocol>)arg1 gestureType:(int)arg2 clientData:(YTIInteractionLoggingClientData *)arg3 responder:(NSObject<YTResponder> *)arg4;
- (void)updateVisibilityForRenderer:(id)arg1 eventType:(int)arg2 responder:(NSObject<YTResponder> *)arg3;
- (void)updateVisibilityForButton:(id <YTInteractionLoggingButtonProtocol>)arg1 eventType:(int)arg2 responder:(NSObject<YTResponder> *)arg3;
- (void)attachButton:(id <YTInteractionLoggingButtonProtocol>)arg1 withResponder:(NSObject<YTResponder> *)arg2;
- (void)attachResponse:(GPBMessage *)arg1 withParentResponse:(GPBMessage *)arg2 clientData:(YTIInteractionLoggingClientData *)arg3 responder:(NSObject<YTResponder> *)arg4;
- (void)attachResponse:(GPBMessage *)arg1 withParentResponse:(GPBMessage *)arg2 responder:(NSObject<YTResponder> *)arg3;
- (void)attachResponse:(GPBMessage *)arg1 withResponder:(NSObject<YTResponder> *)arg2;
- (void)endScreenWithResponder:(NSObject<YTResponder> *)arg1;
- (void)newScreenWithPageVEType:(int)arg1 parentCSN:(NSString *)arg2 parentVEType:(int)arg3 parentVECounter:(long long)arg4 responder:(NSObject<YTResponder> *)arg5;
- (void)newScreenWithNavigationEndpoint:(YTICommand *)arg1 pageVEType:(int)arg2 responder:(NSObject<YTResponder> *)arg3;
- (void)enableInteractionLoggingForResponder:(NSObject<YTResponder> *)arg1;
@end

