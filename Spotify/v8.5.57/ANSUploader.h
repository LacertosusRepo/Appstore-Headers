//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSOperationQueue, NSString, NSURLSession;
@protocol ANSUploaderDelegate;

@interface ANSUploader : NSObject <NSURLSessionDelegate>
{
    NSURLSession *_session;
    id <ANSUploaderDelegate> _delegate;
    double _defaultUploadTimeout;
    double _lowPowerUploadTimeout;
    NSOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) double lowPowerUploadTimeout; // @synthesize lowPowerUploadTimeout=_lowPowerUploadTimeout;
@property(nonatomic) double defaultUploadTimeout; // @synthesize defaultUploadTimeout=_defaultUploadTimeout;
@property(nonatomic) __weak id <ANSUploaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)handleTaskDescription:(id)arg1 completedWithError:(id)arg2;
- (void)handleTask:(id)arg1 completedWithError:(id)arg2;
- (void)restartTask:(id)arg1;
- (void)checkForExistingTaskMatchingDescription:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkSession:(id)arg1 forTasksMatchingDescription:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)taskArray:(id)arg1 hasTaskMatchingDescription:(id)arg2;
- (void)startNewUploadRequest:(id)arg1 filePath:(id)arg2 uniqueName:(id)arg3;
- (id)errorUserInfoWithFilePath:(id)arg1 uniqueName:(id)arg2;
- (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
- (void)startUploadRequest:(id)arg1 filePath:(id)arg2 uniqueName:(id)arg3;
- (id)session;
- (id)createBackgroundSessionConfiguration;
- (Class)urlSessionConfigurationClass;
- (Class)urlSessionClass;
- (void)attemptToReconnectBackgroundSessionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool supportsBackgroundRequests;
- (_Bool)shouldUseBackgroundRequests;
@property(readonly, nonatomic) _Bool lowPowerMode;
- (_Bool)supportsPowerStateNotifications;
- (void)powerStageChanged:(id)arg1;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

