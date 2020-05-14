//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConcertsEntityViewModelObserver-Protocol.h"

@class NSString;

@interface SPTConcertsInfoViewModel : NSObject <SPTConcertsEntityViewModelObserver>
{
    NSString *_text;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)entityViewModel:(id)arg1 didTransitionToState:(long long)arg2 fromState:(long long)arg3;
@property(readonly, nonatomic) long long defaultType;
@property(readonly, nonatomic) _Bool shouldShowCustomText;
@property(readonly, copy, nonatomic) NSString *pageTitle;
@property(readonly, copy, nonatomic) NSString *localizedFeatureName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

