//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningParticipantViewModel-Protocol.h"

@class NSString, NSURL, SPTSocialListeningParticipantModel;

@interface SPTSocialListeningParticipantViewModelImplementation : NSObject <SPTSocialListeningParticipantViewModel>
{
    SPTSocialListeningParticipantModel *_participantModel;
}

@property(readonly, nonatomic) SPTSocialListeningParticipantModel *participantModel; // @synthesize participantModel=_participantModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *participantID;
- (id)initWithParticipantModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

