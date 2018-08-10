//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface SPTAdCosmosBridge : NSObject
{
    _Bool _ready;
    id <SPTResolver> _resolver;
    NSOperationQueue *_onReadyQueue;
}

@property(readonly, nonatomic) NSOperationQueue *onReadyQueue; // @synthesize onReadyQueue=_onReadyQueue;
@property(readonly, nonatomic) __weak id <SPTResolver> resolver; // @synthesize resolver=_resolver;
@property(nonatomic, getter=isReady) _Bool ready; // @synthesize ready=_ready;
- (void).cxx_destruct;
- (void)performOnReady:(CDUnknownBlockType)arg1;
- (void)requestAdEndpointWithEndpointDomain:(id)arg1 endpoint:(id)arg2 action:(id)arg3 body:(id)arg4 headers:(id)arg5 priority:(_Bool)arg6 multipleResponse:(_Bool)arg7 responseBlock:(CDUnknownBlockType)arg8;
- (void)requestAdEndpoint:(id)arg1 withAction:(id)arg2 body:(id)arg3 headers:(id)arg4 priority:(_Bool)arg5 multipleResponse:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7;
- (void)requestAdEndpointWithEndpointDomain:(id)arg1 endpoint:(id)arg2 action:(id)arg3 body:(id)arg4 headers:(id)arg5 multipleResponse:(_Bool)arg6 responseBlock:(CDUnknownBlockType)arg7;
- (void)requestAdEndpoint:(id)arg1 withAction:(id)arg2 body:(id)arg3 headers:(id)arg4 multipleResponse:(_Bool)arg5 responseBlock:(CDUnknownBlockType)arg6;
- (void)readyWithResolver:(id)arg1;
- (id)initWithResolver:(id)arg1;
- (void)del:(id)arg1 endpoint:(id)arg2 field:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)del:(id)arg1 field:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)put:(id)arg1 endpoint:(id)arg2 body:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)put:(id)arg1 endpoint:(id)arg2 field:(id)arg3 value:(id)arg4 onResponse:(CDUnknownBlockType)arg5;
- (void)put:(id)arg1 field:(id)arg2 value:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 endpoint:(id)arg2 body:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)post:(id)arg1 body:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)sub:(id)arg1 endpoint:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)sub:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)get:(id)arg1 endpoint:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)get:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)postIntent:(id)arg1 slotName:(id)arg2 targeting:(id)arg3 onResponse:(CDUnknownBlockType)arg4;
- (void)overrideSlot:(id)arg1 enabled:(_Bool)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)clearSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)triggerSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)nextTrackSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)nextContextSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)fetchSlot:(id)arg1 targeting:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)createSlot:(id)arg1 onResponse:(CDUnknownBlockType)arg2;
- (void)setRewardTime:(double)arg1 sponsorID:(id)arg2 onResponse:(CDUnknownBlockType)arg3;
- (void)getRewardTime:(CDUnknownBlockType)arg1;

@end

