//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUICompletionNotifierObserver;

@protocol SPTUICompletionNotifier <NSObject>
- (void)removeObserver:(id <SPTUICompletionNotifierObserver>)arg1;
- (void)addObserver:(id <SPTUICompletionNotifierObserver>)arg1 sendInitial:(_Bool)arg2;
- (void)performBlockWhenLoggedInUIIsLoaded:(void (^)(void))arg1;
@end
