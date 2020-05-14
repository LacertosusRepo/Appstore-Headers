//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 14 2020 10:06:36).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "SPTImageLoaderDelegate-Protocol.h"

@class CAGradientLayer, GLUEImageView, NSArray, NSString, NSURL;
@protocol SPTImageLoader;

@interface SPTPodcastEpisodeCoverArtTableViewCell : UITableViewCell <SPTImageLoaderDelegate>
{
    NSURL *_lastCoverArtImageURL;
    GLUEImageView *_coverArtImageView;
    CAGradientLayer *_gradientLayer;
    id <SPTImageLoader> _imageLoader;
    NSArray *_startLocation;
    NSArray *_endLocation;
}

@property(readonly, nonatomic) NSArray *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly, nonatomic) NSArray *startLocation; // @synthesize startLocation=_startLocation;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) GLUEImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(retain, nonatomic) NSURL *lastCoverArtImageURL; // @synthesize lastCoverArtImageURL=_lastCoverArtImageURL;
- (void).cxx_destruct;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
@property(retain, nonatomic) NSURL *coverArtImageURL;
- (void)stopAnimation;
- (void)animateLoadingImage;
- (void)setupGradientLayer;
- (void)setupAnimationLocations;
- (id)initWithImageLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
