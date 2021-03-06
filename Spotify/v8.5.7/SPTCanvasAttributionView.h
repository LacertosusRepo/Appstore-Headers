//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEGradientView, SPTCanvasNowPlayingAccessoryView, UILabel;

@interface SPTCanvasAttributionView : UIView
{
    SPTCanvasNowPlayingAccessoryView *_imageAccessory;
    GLUEGradientView *_backgroundView;
    UILabel *_captionLabel;
}

@property(readonly, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(readonly, nonatomic) GLUEGradientView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTCanvasNowPlayingAccessoryView *imageAccessory; // @synthesize imageAccessory=_imageAccessory;
- (void).cxx_destruct;
- (void)updateCaptionWithName:(id)arg1;
- (void)updateAvatar:(id)arg1 name:(id)arg2;
- (void)setUp;
- (id)init;

@end

