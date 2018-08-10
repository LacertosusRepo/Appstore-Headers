//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "YTEditCameraRecording.h"

@class CALayer, NSString;

@interface YTReelCameraRecordButton : UIButton <YTEditCameraRecording>
{
    CALayer *_backgroundLayerWhite;
    CALayer *_backgroundLayerRed;
    _Bool _recording;
    double _timeLimit;
}

@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateBackgroundAnimations;
- (void)createLayers;
- (void)animateOscillatingBackgroundStartTime:(double)arg1;
- (void)animateBackgroundFadeOutStartTime:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
