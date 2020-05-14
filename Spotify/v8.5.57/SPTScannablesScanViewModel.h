//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "SPTScannablesDataSourceDelegate-Protocol.h"

@class CALayer, NSString, SPTScannablesCaptureSession, SPTScannablesDependencies, SPTTagReader, SPTaskCompletionSource;
@protocol OS_dispatch_queue, SPTScannablesDataSource, SPTScannablesScanViewModelDelegate;

@interface SPTScannablesScanViewModel : NSObject <SPTScannablesDataSourceDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    unsigned long long _scannerStatus;
    NSString *_sourceIdentifier;
    id <SPTScannablesScanViewModelDelegate> _delegate;
    SPTaskCompletionSource *_startSessionCompletionSource;
    SPTScannablesCaptureSession *_captureSession;
    SPTScannablesDependencies *_dependencies;
    SPTTagReader *_tagReader;
    id <SPTScannablesDataSource> _dataSource;
    NSObject<OS_dispatch_queue> *_queue;
    CALayer *_captureLayer;
}

@property(retain, nonatomic) CALayer *captureLayer; // @synthesize captureLayer=_captureLayer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) id <SPTScannablesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) SPTTagReader *tagReader; // @synthesize tagReader=_tagReader;
@property(retain, nonatomic) SPTScannablesDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) SPTScannablesCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(retain, nonatomic) SPTaskCompletionSource *startSessionCompletionSource; // @synthesize startSessionCompletionSource=_startSessionCompletionSource;
@property(retain, nonatomic) id <SPTScannablesScanViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) unsigned long long scannerStatus; // @synthesize scannerStatus=_scannerStatus;
- (void).cxx_destruct;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)scannablesDataSource:(id)arg1 didFailFetchingScannableWithError:(id)arg2;
- (void)scannablesDataSource:(id)arg1 didFinishFetchingScannable:(id)arg2;
- (void)notifyDelegateOfFailureWithError:(id)arg1;
- (void)notifyDelegateOfSuccessWithScannable:(id)arg1;
- (void)fetchScannableWithID:(struct NSString *)arg1;
- (void)scanFromImage:(id)arg1;
- (void)focusOnPoint:(struct CGPoint)arg1;
- (id)stopSession;
- (id)startSession;
- (id)initWithCaptureSession:(id)arg1 dataSource:(id)arg2 tagReader:(id)arg3 dependencies:(id)arg4 sourceIdentifier:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

