//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;

@interface SPTCanvasContentLayerVideoPreloaderResult : NSObject
{
    NSURL *_assetURL;
    double _assetDuration;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) double assetDuration; // @synthesize assetDuration=_assetDuration;
@property(readonly, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
- (void).cxx_destruct;
- (id)initWithAssetURL:(id)arg1 assetDuration:(double)arg2 error:(id)arg3;

@end
