//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingLegacyFeedbackHandler-Protocol.h"

@class NSString, SPTProgressView, UIViewController;
@protocol SPTNowPlayingRemoteControlPolicy;

@interface SPTNowPlayingLegacyRadioFeedbackHandlerImplementation : NSObject <SPTNowPlayingLegacyFeedbackHandler>
{
    UIViewController *_containingViewController;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
- (void).cxx_destruct;
- (void)hideImprovingStationProgressViewWithError:(id)arg1;
- (void)showImprovingStationProgressView;
- (void)radioFeedbackButtonTouchedUpInsideWithPositiveFeedback:(_Bool)arg1 withConfirmation:(_Bool)arg2 andCompletionBlock:(CDUnknownBlockType)arg3;
- (_Bool)currentTrackHasPositiveFeedback;
- (_Bool)currentTrackHasNegativeFeedback;
- (void)handleNegativeFeedbackActionForTrackWithConfirmation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNegativeFeedbackActionForArtist:(id)arg1 trackName:(id)arg2 albumImageURL:(id)arg3 actionControl:(id)arg4 withConfirmation:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handlePositiveFeedbackAction:(id)arg1 withConfirmation:(_Bool)arg2;
- (id)initWithRemoteControlPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

