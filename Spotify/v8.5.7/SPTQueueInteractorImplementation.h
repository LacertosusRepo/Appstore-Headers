//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueueInteractor-Protocol.h"

@class NSString;
@protocol SPTQueueInteractorTarget;

@interface SPTQueueInteractorImplementation : NSObject <SPTQueueInteractor>
{
    id <SPTQueueInteractorTarget> _target;
}

@property(nonatomic) __weak id <SPTQueueInteractorTarget> target; // @synthesize target=_target;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

