//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IMVideoOutputView.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, AVPlayerLayer, CADisplayLink, CALayer;

@interface IMLegacyVideoOutputView : IMVideoOutputView
{
    AVPlayerLayer *playerLayer;
    CALayer *subtitleLayer;
    AVPlayer *player;
    id readyForDisplayToken;
    CADisplayLink *displayLink;
    double nextVSync;
    AVPlayerItemVideoOutput *videoOutput;
    AVPlayerItem *currentItem;
    _Bool inBackground;
    double contrast;
    double brightness;
    double exposure;
}

+ (void)load;
+ (_Bool)hasAnyOutput;
- (void)setExposure:(double)arg1;
- (double)exposure;
- (void)setBrightness:(double)arg1;
- (double)brightness;
- (void)setContrast:(double)arg1;
- (double)contrast;
- (void).cxx_destruct;
- (void)imRemoveFromSuperlayer;
- (_Bool)imPickRoute:(id)arg1 withPassword:(id)arg2;
- (void)setLayoutUsingTransform:(_Bool)arg1;
- (void)setEnableSubtitleDisplay:(_Bool)arg1;
- (void)layoutSubviews;
- (_Bool)positionForPictureInPicture;
- (void)setPlayer:(id)arg1;
- (void)setAVPlayer:(id)arg1;
- (void)displayLinkCallback:(id)arg1;
- (void)didMoveToWindow;
- (void)doInit;
- (void)removePlayerLayer;
- (void)enterForeground;
- (void)enterBackground;
- (void)createPlayerLayer;
- (void)readyForDisplayChanged;
- (void)setPlayerItem:(id)arg1;
- (void)outputViewDidResume;
- (void)outputViewDidPause;
- (_Bool)hasAnyOutput;
- (struct __CVBuffer *)lastPixelBuffer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)supportsAdjustments;

@end
