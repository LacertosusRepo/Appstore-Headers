//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMAnimationBlockDelegate : NSObject
{
    CDUnknownBlockType blockOnAnimationStarted;
    CDUnknownBlockType blockOnAnimationSucceeded;
    CDUnknownBlockType blockOnAnimationFailed;
}

@property(copy, nonatomic) CDUnknownBlockType blockOnAnimationFailed; // @synthesize blockOnAnimationFailed;
@property(copy, nonatomic) CDUnknownBlockType blockOnAnimationSucceeded; // @synthesize blockOnAnimationSucceeded;
@property(copy, nonatomic) CDUnknownBlockType blockOnAnimationStarted; // @synthesize blockOnAnimationStarted;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
