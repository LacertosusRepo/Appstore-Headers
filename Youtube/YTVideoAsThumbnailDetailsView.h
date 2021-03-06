//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayerLayer, YTImageView;

@interface YTVideoAsThumbnailDetailsView : UIView
{
    id <YTVideoAsThumbnailDetailsViewDelegate> _delegate;
    AVPlayerLayer *_playerLayer;
    UIView *_playerWrapper;
    YTImageView *_placeholderImageView;
}

@property(retain, nonatomic) YTImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithDelegate:(id)arg1;

@end

