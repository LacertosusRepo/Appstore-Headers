//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCanvasModel;

@interface SPTCanvasImageResolverContext : NSObject
{
    long long _resolverType;
    CDUnknownBlockType _completionBlock;
    id <SPTCanvasModel> _canvasModel;
}

@property(readonly, nonatomic) id <SPTCanvasModel> canvasModel; // @synthesize canvasModel=_canvasModel;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) long long resolverType; // @synthesize resolverType=_resolverType;
- (void).cxx_destruct;
- (id)initWithResolverType:(long long)arg1 canvasModel:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

