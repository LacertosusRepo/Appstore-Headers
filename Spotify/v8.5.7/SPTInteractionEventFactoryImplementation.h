//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInteractionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTInteractionEventFactoryImplementation : NSObject <SPTInteractionEventFactory>
{
    NSString *_specificationId;
    NSArray *_components;
    NSString *_interactionType;
    NSArray *_errors;
}

@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(readonly, copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(readonly, copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
- (void).cxx_destruct;
- (id)unfollowWithSubject:(id)arg1;
- (id)uiElementToggle;
- (id)unlikeWithSubject:(id)arg1;
- (id)shuffleDisableWithTargetUri:(id)arg1;
- (id)hideTrackWithSubject:(id)arg1;
- (id)uiNavigateWithTargetUri:(id)arg1;
- (id)repeatOneEnableWithTargetUri:(id)arg1;
- (id)repeatEnableWithTargetUri:(id)arg1;
- (id)skipToPreviousWithFrom:(id)arg1 withTo:(id)arg2;
- (id)uiReveal;
- (id)pauseWithTargetUri:(id)arg1;
- (id)seek;
- (id)addToPlaylistWithPlaylist:(id)arg1 withSubject:(id)arg2;
- (id)followWithSubject:(id)arg1;
- (id)uiHide;
- (id)repeatDisableWithTargetUri:(id)arg1;
- (id)shuffleEnableWithTargetUri:(id)arg1;
- (id)likeWithSubject:(id)arg1;
- (id)playFromContextWithUri:(id)arg1;
- (id)skipToNextWithFrom:(id)arg1 withTo:(id)arg2;
- (id)shufflePlay;
- (id)resumeWithTargetUri:(id)arg1;
- (id)playWithTargetUri:(id)arg1;
- (id)initWithSpecificationId:(id)arg1 components:(id)arg2 interactionType:(id)arg3 errors:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
