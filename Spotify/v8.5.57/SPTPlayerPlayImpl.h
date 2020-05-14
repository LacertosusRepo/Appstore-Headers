//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerPlay-Protocol.h"

@class NSString, NSURL, SPTPlayOptions, SPTPlayerContext, SPTask;
@protocol OS_dispatch_queue, SPTPlayer, SPTResolver;

@interface SPTPlayerPlayImpl : NSObject <SPTPlayerPlay>
{
    id <SPTResolver> _resolver;
    NSObject<OS_dispatch_queue> *_queue;
    id <SPTPlayer> _player;
    CDUnknownBlockType _timeGetter;
    SPTPlayerContext *_context;
    SPTPlayOptions *_options;
    NSURL *_viewURI;
    SPTask *_sessionTask;
}

- (void).cxx_destruct;
- (void)invalidate;
- (id)play;
- (id)makePlayRequestForSession:(id)arg1;
- (id)playRequestForSession:(id)arg1;
- (id)loggingParams;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 queue:(id)arg2 createSessionTask:(id)arg3 player:(id)arg4 timeGetter:(CDUnknownBlockType)arg5 context:(id)arg6 options:(id)arg7 viewURI:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

