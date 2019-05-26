//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSURL, SPTImageBlurView, UIImage;

@interface SPTNowPlayingCarouselBackgroundBlurView : UIView
{
    double _overlayRelativeIntensity;
    SPTImageBlurView *_leftOverlayImageBlurView;
    SPTImageBlurView *_backgroundImageBlurView;
    SPTImageBlurView *_rightOverlayImageBlurView;
    UIImage *_previousImage;
    UIImage *_backgroundImage;
    UIImage *_nextImage;
    NSURL *_previousImageURL;
    NSURL *_backgroundImageURL;
    NSURL *_nextImageURL;
}

@property(retain, nonatomic) NSURL *nextImageURL; // @synthesize nextImageURL=_nextImageURL;
@property(retain, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(retain, nonatomic) NSURL *previousImageURL; // @synthesize previousImageURL=_previousImageURL;
@property(retain, nonatomic) UIImage *nextImage; // @synthesize nextImage=_nextImage;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImage *previousImage; // @synthesize previousImage=_previousImage;
@property(retain, nonatomic) SPTImageBlurView *rightOverlayImageBlurView; // @synthesize rightOverlayImageBlurView=_rightOverlayImageBlurView;
@property(retain, nonatomic) SPTImageBlurView *backgroundImageBlurView; // @synthesize backgroundImageBlurView=_backgroundImageBlurView;
@property(retain, nonatomic) SPTImageBlurView *leftOverlayImageBlurView; // @synthesize leftOverlayImageBlurView=_leftOverlayImageBlurView;
@property(nonatomic) double overlayRelativeIntensity; // @synthesize overlayRelativeIntensity=_overlayRelativeIntensity;
- (void).cxx_destruct;
- (id)description;
- (void)skipBackward;
- (void)skipForward;
- (void)swapViews:(_Bool)arg1;
- (void)changedViewOrder;
- (void)setPreviousImage:(id)arg1 withURL:(id)arg2;
- (void)setNextImage:(id)arg1 withURL:(id)arg2;
- (void)setBackgroundImage:(id)arg1 withURL:(id)arg2;
@property(nonatomic) double blurRadius;
- (id)initWithFrame:(struct CGRect)arg1;

@end

