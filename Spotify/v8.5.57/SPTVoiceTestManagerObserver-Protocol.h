//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTVoiceTestManager;

@protocol SPTVoiceTestManagerObserver <NSObject>

@optional
- (void)testManager:(id <SPTVoiceTestManager>)arg1 didChangeVoiceSearchEnabledState:(_Bool)arg2;
- (void)testManager:(id <SPTVoiceTestManager>)arg1 didChangeVoiceServiceEnabledState:(_Bool)arg2;
@end

