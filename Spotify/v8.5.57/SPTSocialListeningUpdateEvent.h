//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningUpdateEventModelEntity-Protocol.h"

@class NSString;
@protocol SPTSocialListeningParticipantModelEntity;

@interface SPTSocialListeningUpdateEvent : NSObject <SPTSocialListeningUpdateEventModelEntity>
{
    unsigned long long _updateReason;
    id <SPTSocialListeningParticipantModelEntity> _participant;
}

@property(readonly, nonatomic) id <SPTSocialListeningParticipantModelEntity> participant; // @synthesize participant=_participant;
@property(readonly, nonatomic) unsigned long long updateReason; // @synthesize updateReason=_updateReason;
- (void).cxx_destruct;
- (id)initWithReasonString:(id)arg1 participant:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

