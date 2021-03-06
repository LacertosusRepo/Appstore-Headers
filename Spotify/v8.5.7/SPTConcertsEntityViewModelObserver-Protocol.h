//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTConcertsEntityState, SPTConcertsEntityViewModel;

@protocol SPTConcertsEntityViewModelObserver <NSObject>

@optional
- (void)entityViewModel:(SPTConcertsEntityViewModel *)arg1 didTransitionToState:(SPTConcertsEntityState *)arg2 fromState:(SPTConcertsEntityState *)arg3;
- (void)entityViewModel:(SPTConcertsEntityViewModel *)arg1 willTransitionToState:(SPTConcertsEntityState *)arg2;
- (void)entityViewModel:(SPTConcertsEntityViewModel *)arg1 showViewState:(long long)arg2;
- (void)entityViewModel:(SPTConcertsEntityViewModel *)arg1 showLoadingIndicator:(_Bool)arg2;
- (void)updateForEntityViewModel:(SPTConcertsEntityViewModel *)arg1;
@end

