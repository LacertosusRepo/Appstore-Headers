//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 25 2019 19:12:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, UIColor, UIImage, UIImageView;
@protocol SPTImageBlurViewDelegate, SPTImageCache;

@interface SPTImageBlurView : UIView
{
    _Bool _needsUpdatedBlur;
    id <SPTImageBlurViewDelegate> _delegate;
    UIImage *_image;
    double _maximumBlurRadius;
    double _blurIntensity;
    double _blurRadius;
    id <SPTImageCache> _blurredImageCache;
    NSArray *_gradientColors;
    UIImageView *_originalImageView;
    UIImage *_processedImage;
    id _currentCacheKey;
    CAGradientLayer *_gradientLayer;
    UIView *_blurView;
    UIView *_tintView;
}

+ (id)blurViewForImage:(id)arg1 withFrame:(struct CGRect)arg2;
+ (id)blurViewForImage:(id)arg1 withFrame:(struct CGRect)arg2 blurredImageCache:(id)arg3 cacheKey:(id)arg4;
@property(retain, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool needsUpdatedBlur; // @synthesize needsUpdatedBlur=_needsUpdatedBlur;
@property(copy, nonatomic) id currentCacheKey; // @synthesize currentCacheKey=_currentCacheKey;
@property(retain, nonatomic) UIImage *processedImage; // @synthesize processedImage=_processedImage;
@property(retain, nonatomic) UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
@property(retain, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(nonatomic) __weak id <SPTImageCache> blurredImageCache; // @synthesize blurredImageCache=_blurredImageCache;
@property(readonly, nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) double blurIntensity; // @synthesize blurIntensity=_blurIntensity;
@property(nonatomic) double maximumBlurRadius; // @synthesize maximumBlurRadius=_maximumBlurRadius;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <SPTImageBlurViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateImageViewOnMainThreadWithBlurredImage:(id)arg1;
- (void)updateBlurredImageIfNeeded;
- (void)updateBlurIntensity;
- (id)processImage:(id)arg1;
- (void)setImage:(id)arg1 forCacheKey:(id)arg2;
@property(nonatomic) long long imageContentMode;
@property(retain, nonatomic) UIColor *tintColor;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 cacheKey:(id)arg3 blurredImageCache:(id)arg4;

@end

