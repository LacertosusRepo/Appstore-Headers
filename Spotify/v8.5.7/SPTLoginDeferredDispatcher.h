//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPTLoginDeferredDispatcher : NSObject
{
    NSMutableArray *_handlers;
}

@property(retain, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingHandlers;
@property(nonatomic) _Bool allowDispatch;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

