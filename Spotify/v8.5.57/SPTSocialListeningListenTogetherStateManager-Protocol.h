//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTSocialListeningListenTogetherStateObserver;

@protocol SPTSocialListeningListenTogetherStateManager <NSObject>
@property(readonly, nonatomic) long long currentState;
- (void)removeListenTogetherStateObserver:(id <SPTSocialListeningListenTogetherStateObserver>)arg1;
- (void)addListenTogetherStateObserver:(id <SPTSocialListeningListenTogetherStateObserver>)arg1;
- (void)updateCurrentState:(long long)arg1;
@end

