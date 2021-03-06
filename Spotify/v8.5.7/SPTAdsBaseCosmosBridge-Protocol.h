//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol SPTResolver;

@protocol SPTAdsBaseCosmosBridge <NSObject>
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)logExpandVideoAd:(NSString *)arg1 atPlaybackPosition:(double)arg2;
- (void)logCollapseVideoAd:(NSString *)arg1 atPlaybackPosition:(double)arg2;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2 playbackPosition:(double)arg3 eventData:(NSDictionary *)arg4;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2 eventData:(NSDictionary *)arg3;
- (void)postCosmosAdEvent:(NSString *)arg1 forAd:(NSString *)arg2;
- (void)setRewardTime:(double)arg1 sponsorID:(NSString *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)getRewardTime:(void (^)(double, double))arg1;
- (void)overrideSlot:(NSString *)arg1 enabled:(_Bool)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)clearSlot:(NSString *)arg1 onResponse:(void (^)(_Bool, NSDictionary *))arg2;
- (void)triggerSlot:(NSString *)arg1 onResponse:(void (^)(_Bool, NSDictionary *))arg2;
- (void)nextTrackSlot:(NSString *)arg1 targeting:(NSDictionary *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)nextContextSlot:(NSString *)arg1 targeting:(NSDictionary *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)fetchSlot:(NSString *)arg1 targeting:(NSDictionary *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)createSlot:(NSString *)arg1 onResponse:(void (^)(_Bool, NSDictionary *))arg2;
- (void)del:(NSString *)arg1 endpoint:(NSString *)arg2 field:(NSString *)arg3 onResponse:(void (^)(_Bool, NSDictionary *))arg4;
- (void)del:(NSString *)arg1 field:(NSString *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)put:(NSString *)arg1 endpoint:(NSString *)arg2 body:(NSDictionary *)arg3 onResponse:(void (^)(_Bool, NSDictionary *))arg4;
- (void)put:(NSString *)arg1 endpoint:(NSString *)arg2 field:(NSString *)arg3 value:(NSString *)arg4 onResponse:(void (^)(_Bool, NSDictionary *))arg5;
- (void)put:(NSString *)arg1 field:(NSString *)arg2 value:(NSString *)arg3 onResponse:(void (^)(_Bool, NSDictionary *))arg4;
- (void)post:(NSString *)arg1 endpoint:(NSString *)arg2 body:(NSDictionary *)arg3 onResponse:(void (^)(_Bool, NSDictionary *))arg4;
- (void)post:(NSString *)arg1 body:(NSDictionary *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)sub:(NSString *)arg1 endpoint:(NSString *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)sub:(NSString *)arg1 onResponse:(void (^)(_Bool, NSDictionary *))arg2;
- (void)get:(NSString *)arg1 endpoint:(NSString *)arg2 onResponse:(void (^)(_Bool, NSDictionary *))arg3;
- (void)get:(NSString *)arg1 onResponse:(void (^)(_Bool, NSDictionary *))arg2;
- (void)requestAdEndpointWithEndpointDomain:(NSString *)arg1 endpoint:(NSString *)arg2 action:(NSString *)arg3 body:(NSDictionary *)arg4 headers:(NSDictionary *)arg5 multipleResponse:(_Bool)arg6 responseBlock:(void (^)(_Bool, NSDictionary *))arg7;
- (void)requestAdEndpoint:(NSString *)arg1 withAction:(NSString *)arg2 body:(NSDictionary *)arg3 headers:(NSDictionary *)arg4 multipleResponse:(_Bool)arg5 responseBlock:(void (^)(_Bool, NSDictionary *))arg6;
- (void)performOnReady:(void (^)(void))arg1;
- (void)readyWithResolver:(id <SPTResolver>)arg1;
@end

