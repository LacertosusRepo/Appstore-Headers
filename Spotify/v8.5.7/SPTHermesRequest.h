//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHermesController;

@interface SPTHermesRequest : NSObject
{
    struct MultiStringHermesQuery *_query;
    CDUnknownBlockType _callback;
    SPTHermesController *_controller;
}

+ (id)hermesRequestWithRequestURL:(id)arg1 usingMethod:(id)arg2 payload:(id)arg3 whenDone:(CDUnknownBlockType)arg4 controller:(id)arg5;
@property(nonatomic) __weak SPTHermesController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) struct MultiStringHermesQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)done;
- (void)start;
- (void)invalidateForDealloc:(_Bool)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithRequestURL:(id)arg1 usingMethod:(id)arg2 payload:(id)arg3 whenDone:(CDUnknownBlockType)arg4 controller:(id)arg5;

@end

