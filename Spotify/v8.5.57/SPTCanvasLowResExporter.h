//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasVideoExporter-Protocol.h"

@class AVAssetExportSession, NSString, NSURL;

@interface SPTCanvasLowResExporter : NSObject <SPTCanvasVideoExporter>
{
    NSURL *_assetURL;
    double _assetDuration;
    AVAssetExportSession *_exportSession;
}

@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(readonly, nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (void)didFailToLoadVideoForTrackWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didLoadVideoForTrackWithVideoData:(id)arg1 outputURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)load:(CDUnknownBlockType)arg1;
- (id)exportPresetForAsset:(id)arg1;
- (_Bool)hasLocalAssetForOutputURL:(id)arg1;
- (id)localURLForAssetURL:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 assetDuration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
