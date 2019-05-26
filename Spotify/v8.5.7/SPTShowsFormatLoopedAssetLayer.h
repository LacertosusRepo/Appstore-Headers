//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVSampleBufferDisplayLayer.h>

@class NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface SPTShowsFormatLoopedAssetLayer : AVSampleBufferDisplayLayer
{
    _Bool _looping;
    NSObject<OS_dispatch_queue> *_bufferQueue;
    NSURL *_assetURL;
}

@property(retain) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(retain) NSObject<OS_dispatch_queue> *bufferQueue; // @synthesize bufferQueue=_bufferQueue;
@property(getter=isLooping) _Bool looping; // @synthesize looping=_looping;
- (void).cxx_destruct;
- (id)videoTrackAssetReaderForAsset:(id)arg1;
- (void)stop;
- (void)dealloc;
- (void)startWithAsset:(id)arg1 forAssetURL:(id)arg2;

@end
