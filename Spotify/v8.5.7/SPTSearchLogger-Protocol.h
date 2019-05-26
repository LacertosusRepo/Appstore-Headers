//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "EXP_SPTHubImpressionLogger-Protocol.h"
#import "EXP_SPTHubInteractionLogger-Protocol.h"

@class NSString;

@protocol SPTSearchLogger <EXP_SPTHubImpressionLogger, EXP_SPTHubInteractionLogger>
- (void)logUIInteractionForAutocompleteSuggestionFilledWithRequestId:(NSString *)arg1 index:(unsigned long long)arg2;
- (void)logUIInteractionForAutocompleteQueryClearedWithRequestId:(NSString *)arg1;
- (void)logUIInteractionForAutocompleteSuggestionManuallyEntered:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)logUIInteractionForAutocompleteSuggestionSelected:(NSString *)arg1 requestId:(NSString *)arg2 index:(unsigned long long)arg3;
- (void)logUIImpressionVoiceFloatingMicrophoneTooltipCalloutWithSourceIdentifier:(NSString *)arg1;
- (void)logUIInteractionLaunchVoiceSearchViewWithSourceIdentifier:(NSString *)arg1;
- (void)logUIInteractionForClearCurrentSearchStringWithRequestID:(NSString *)arg1;
@end
