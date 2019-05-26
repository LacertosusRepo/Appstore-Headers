//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "EXP_HUBContentOperation-Protocol.h"

@class NSError, SPTHomeConsolidateContentCache;
@protocol EXP_HUBContentOperationDelegate, EXP_HUBViewModelBuilder, SPTOfflineModeState;

@interface SPTHomeConsolidateCachedContentOperation : NSObject <EXP_HUBContentOperation>
{
    id <EXP_HUBContentOperationDelegate> _delegate;
    SPTHomeConsolidateContentCache *_homeContentCache;
    id <SPTOfflineModeState> _offlineModeState;
    id <EXP_HUBViewModelBuilder> _viewModelBuilder;
    NSError *_previousError;
}

@property(retain, nonatomic) NSError *previousError; // @synthesize previousError=_previousError;
@property(retain, nonatomic) id <EXP_HUBViewModelBuilder> viewModelBuilder; // @synthesize viewModelBuilder=_viewModelBuilder;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) __weak SPTHomeConsolidateContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(nonatomic) __weak id <EXP_HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)makeUnknownError;
- (void)finishWithOperationStatus:(unsigned long long)arg1;
- (void)updateBuilderLoggingData:(id)arg1;
- (void)updateCustomData;
- (void)updateBuilders;
- (void)parseBody:(id)arg1;
- (void)loadFromCache;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithHomeContentCache:(id)arg1 offlineModeState:(id)arg2;

@end

