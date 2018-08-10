//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTUpsellAutoTrialLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)createUpsellEventLogMessage:(id)arg1 upsellMessageList:(id)arg2;
- (void)createImpressionMessageWithIdentifier:(id)arg1;
- (void)createInteractionMesage:(id)arg1 identifier:(id)arg2;
- (void)logAutoTrialEndedShufflePlay;
- (void)logAutoTrialStartedPlayTrack;
- (void)logAutoTrialEndedImpression;
- (void)logAutoTrialStartedImpression;
- (void)logAutoTrialActivationError:(id)arg1;
- (void)logAutoTrialActivated:(id)arg1;
- (void)logAutoTrialTaskActivationRequestError:(id)arg1;
- (void)logAutoTrialTaskActivation:(id)arg1;
- (id)initWithLogCenter:(id)arg1;

@end

