//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
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
