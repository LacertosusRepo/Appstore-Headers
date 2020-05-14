//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSFileManager, CLSNetworkClient, NSOperationQueue;
@protocol CLSReportsControllerDelegate;

@interface CLSReportsController : NSObject
{
    id <CLSReportsControllerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    CLSNetworkClient *_networkClient;
    CLSFileManager *_fileManager;
}

@property(readonly, nonatomic) CLSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) CLSNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <CLSReportsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reportUploadAtPath:(id)arg1 completedWithError:(id)arg2;
- (_Bool)cleanUpSubmittedReportAtPath:(id)arg1;
- (_Bool)uploadPackagedReportAtPath:(id)arg1 asUrgent:(_Bool)arg2;
- (_Bool)submitPackageMultipartMimeAtPath:(id)arg1 synchronously:(_Bool)arg2;
- (_Bool)prepareAndSubmitReport:(id)arg1 asUrgent:(_Bool)arg2 withProcessing:(_Bool)arg3;
- (_Bool)fillInRequest:(id)arg1 forMultipartMimeDataAtPath:(id)arg2;
- (id)mutableRequestWithURL:(id)arg1 timeout:(double)arg2;
- (id)APIKey;
- (id)localeIdentifier;
- (_Bool)packagingEnabled;
- (_Bool)submissionEnabled;
- (id)reportURL;
- (id)reportEndpoint;
- (id)appBundleIdentifier;
- (id)settings;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2 client:(id)arg3 fileManager:(id)arg4;

@end

