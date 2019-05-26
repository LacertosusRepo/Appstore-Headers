//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SPTNowPlayingViewPremiumDefaultInteractionEvent : NSObject <SPTInteractionEvent>
{
    NSString *_interactionType;
    NSString *_specificationId;
    NSArray *_components;
    NSString *_action;
    NSDictionary *_actionParameters;
    NSArray *_errors;
}

@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
- (void).cxx_destruct;
- (id)initWithType:(id)arg1 specificationId:(id)arg2 components:(id)arg3 action:(id)arg4 actionParameters:(id)arg5 errors:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

