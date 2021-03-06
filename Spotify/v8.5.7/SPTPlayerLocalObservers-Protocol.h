//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTPlayerContext;
@protocol SPTPlayerStagedContextObserver;

@protocol SPTPlayerLocalObservers <NSObject>
@property(retain, nonatomic) SPTPlayerContext *stagedContext;
- (void)notifyStagedContextObserversWithBlock:(void (^)(id <SPTPlayerStagedContextObserver>))arg1;
- (void)addStagedContextObserver:(id <SPTPlayerStagedContextObserver>)arg1;
@end

