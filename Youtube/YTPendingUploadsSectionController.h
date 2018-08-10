//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTHeaderFeedSectionController.h"

#import "YTPendingUploadsSectionResponderProvider.h"
#import "YTReachabilityObserver.h"
#import "YTRendererController.h"
#import "YTUploadInnerTubeProgressObserver.h"

@class GIMMe, NSMutableDictionary, NSString, YTIPendingUploadsRenderer, YTUploadTaskController, YTUploadTransferController;

@interface YTPendingUploadsSectionController : YTHeaderFeedSectionController <YTReachabilityObserver, YTUploadInnerTubeProgressObserver, YTPendingUploadsSectionResponderProvider, YTRendererController>
{
    _Bool _showHeader;
    YTIPendingUploadsRenderer *_pendingUploadsRenderer;
    YTUploadTaskController *_uploadTaskController;
    YTUploadTransferController *_innerTubeTransferController;
    NSMutableDictionary *_frontendUploadIDMessageMap;
    NSMutableDictionary *_helpEndPointMap;
}

- (void).cxx_destruct;
- (void)updateEntryAndCellForAllTasks;
- (void)updateEntryAndCellForTask:(id)arg1;
@property(readonly, nonatomic, getter=isPausedForPlayback) _Bool pausedForPlayback;
@property(readonly, nonatomic) long long waitingForNetwork;
- (_Bool)isUnifiedProgressBarEnabled;
- (_Bool)IsEntryMatchesWithFrontendUploadID:(id)arg1 entry:(id)arg2;
- (void)updateEntriesWithFrontendUploadID:(id)arg1;
- (void)updateCell:(id)arg1 forEntry:(id)arg2;
- (id)cellWithFrontendUploadID:(id)arg1;
- (id)feedbackMessageForUploadTask:(id)arg1;
- (void)uploadingPausedDidChange;
- (void)uploadProcessingDidErrorWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)uploadProcessingDidRejectWithFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)didProgressProcessingForFrontendUploadID:(id)arg1 renderer:(id)arg2;
- (void)didProgressTransferForFrontendUploadID:(id)arg1 progress:(id)arg2;
- (void)didProgressTranscodeForFrontendUploadID:(id)arg1 progress:(float)arg2;
- (void)uploadStatusDidChangeWithFrontendUploadID:(id)arg1 state:(long long)arg2;
- (void)reachabilityDidChange;
- (void)handleEntries:(id)arg1;
- (void)loadWithModel:(id)arg1;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

