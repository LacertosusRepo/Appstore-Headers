//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, YTIMenuRenderer, YTIUploadFeedbackId, YTUploadEditInstructions, YTUploadMetadata, YTUpsell;

@protocol YTUploadTaskProtocol <NSObject>
@property(nonatomic) double timeRemaining;
@property(nonatomic) float progress;
@property(copy, nonatomic) NSString *shortMessage;
@property(readonly, nonatomic) YTUploadEditInstructions *editInstructions;
@property(readonly, nonatomic) YTUploadMetadata *metadata;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSURL *thumbnailURL;
@property(readonly, nonatomic) NSString *frontendUploadID;
@property(readonly, nonatomic) NSURL *assetURL;
- (NSString *)processingQuantifiedString;
- (NSString *)uploadingQuantifiedString;
- (NSString *)transcodingQuantifiedString;
- (YTIMenuRenderer *)menuRenderer;
- (YTIUploadFeedbackId *)feedbackID;
- (YTUpsell *)upsellWithWaitingForNetwork:(long long)arg1 pausedForPlayback:(_Bool)arg2;
- (_Bool)didError;
- (_Bool)isTranscodeSuccess;
- (_Bool)isTransferSuccess;
- (_Bool)isTransferProgressing;
@end

