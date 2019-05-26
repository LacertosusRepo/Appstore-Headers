//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTSearch2DateProviding;

@interface SPTSearchLoggerImplementation : NSObject <SPTSearchLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTSearch2DateProviding> _dateProvider;
}

@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionForAutocompleteQueryClearedWithRequestId:(id)arg1;
- (void)logUIInteractionForAutocompleteSuggestionManuallyEntered:(id)arg1 requestId:(id)arg2;
- (void)logUIInteractionForAutocompleteSuggestionFilledWithRequestId:(id)arg1 index:(unsigned long long)arg2;
- (void)logUIInteractionForAutocompleteSuggestionSelected:(id)arg1 requestId:(id)arg2 index:(unsigned long long)arg3;
- (void)logUIImpressionVoiceFloatingMicrophoneTooltipCalloutWithSourceIdentifier:(id)arg1;
- (void)logUIInteractionLaunchVoiceSearchViewWithSourceIdentifier:(id)arg1;
- (void)logUIInteractionForClearCurrentSearchStringWithRequestID:(id)arg1;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 dateProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
