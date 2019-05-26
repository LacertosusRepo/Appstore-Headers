//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTKVOController-Protocol.h"

@class FBKVOController, NSString;

@interface SPTKVOController : NSObject <SPTKVOController>
{
    FBKVOController *_kvoController;
}

@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
- (void).cxx_destruct;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4;
- (void)unobserveAll;
- (void)unobserve:(id)arg1 keyPath:(id)arg2;
- (void)unobserve:(id)arg1;
- (void)observe:(id)arg1 keyPaths:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)initWithObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

