//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol HUBConnectivityStateResolverObserver;

@protocol HUBConnectivityStateResolver
- (void)removeObserver:(id <HUBConnectivityStateResolverObserver>)arg1;
- (void)addObserver:(id <HUBConnectivityStateResolverObserver>)arg1;
- (unsigned long long)resolveConnectivityState;
@end

